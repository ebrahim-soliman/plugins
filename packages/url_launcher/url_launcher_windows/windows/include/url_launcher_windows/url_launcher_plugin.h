// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#ifndef PACKAGES_URL_LAUNCHER_URL_LAUNCHER_WINDOWS_WINDOWS_INCLUDE_URL_LAUNCHER_WINDOWS_URL_LAUNCHER_PLUGIN_H_
#define PACKAGES_URL_LAUNCHER_URL_LAUNCHER_WINDOWS_WINDOWS_INCLUDE_URL_LAUNCHER_WINDOWS_URL_LAUNCHER_PLUGIN_H_

#include <flutter_plugin_registrar.h>

#define FLUTTER_PLUGIN_EXPORT __declspec(dllexport)

#if defined(__cplusplus)
extern "C" {
#endif

FLUTTER_PLUGIN_EXPORT void UrlLauncherPluginRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar);

#if defined(__cplusplus)
}  // extern "C"
#endif

#endif  // PACKAGES_URL_LAUNCHER_URL_LAUNCHER_WINDOWS_WINDOWS_INCLUDE_URL_LAUNCHER_WINDOWS_URL_LAUNCHER_PLUGIN_H_
