/*
    Globals.h - This file is part of Element
    Copyright (C) 2016-2017 Kushview, LLC.  All rights reserved.
*/

#ifndef EL_GLOBALS_H
#define EL_GLOBALS_H

#include "element/Juce.h"
#include "engine/AudioEngine.h"
#include "URIs.h"
#include "WorldBase.h"

namespace Element {

class CommandManager;
class DeviceManager;
class MediaManager;
class PluginManager;
class Session;
class Settings;
class Writer;

struct CommandLine {
    explicit CommandLine (const String& cli = String::empty);
    bool fullScreen;
    int port;
};

class Globals :  public WorldBase
{
public:
    explicit Globals (const String& commandLine = String::empty);
    ~Globals();

    const CommandLine cli;

    CommandManager& getCommands();
    DeviceManager& devices();
    PluginManager& plugins();
    Settings& settings();
    SymbolMap& symbols();
    MediaManager& media();
    Session& session();
    AudioEnginePtr engine() const;

    const String& getAppName() const { return appName; }
    void setEngine (EnginePtr engine);

private:
    String appName;
    friend class Application;
    class Impl;
    ScopedPointer<Impl> impl;
};

}

#endif // EL_GLOBALS_H
