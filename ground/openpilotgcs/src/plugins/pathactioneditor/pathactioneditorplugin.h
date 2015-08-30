/**
 ******************************************************************************
 * @file       pathactioneditorplugin.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2012.
 * @addtogroup PathAction Editor GCS Plugins
 * @{
 * @addtogroup PathActionEditorGadgetPlugin PathAction Editor Gadget Plugin
 * @{
 * @brief A gadget to edit a list of pathactions
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef PathActionEditorPLUGIN_H_
#define PathActionEditorPLUGIN_H_

#include <extensionsystem/iplugin.h>

class PathActionEditorGadgetFactory;

class PathActionEditorPlugin : public ExtensionSystem::IPlugin {
    Q_OBJECT
                                                       Q_PLUGIN_METADATA(IID "OpenPilot.PathActionEditor")

public:
    PathActionEditorPlugin();
    ~PathActionEditorPlugin();

    void extensionsInitialized();
    bool initialize(const QStringList & arguments, QString *errorString);
    void shutdown();
private:
    PathActionEditorGadgetFactory *mf;
};

#endif /* PathActionEditorPLUGIN_H_ */
