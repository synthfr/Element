/*
    Preferences.cpp - This file is part of Element
    Copyright (C) 2016 Kushview, LLC.  All rights reserved.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#include "element/Juce.h"
#include "gui/GuiApp.h"
#include "gui/Preferences.h"

namespace Element {

    PreferencesComponent::PreferencesComponent (GuiApp& gui)
        : PreferencesWidget (gui)
    {
    }

    PreferencesComponent::~PreferencesComponent()
    {
        std::clog << "~PreferencesComponent()\n";
    }

    void
    PreferencesComponent::resized()
    {
        Component::resized();
    }
}



