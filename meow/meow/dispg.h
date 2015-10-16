// Copyright (c) 2015, tandasat. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.

//
// This module declares interfaces to disable PatchGuard functions.
//
#pragma once

////////////////////////////////////////////////////////////////////////////////
//
// macro utilities
//

////////////////////////////////////////////////////////////////////////////////
//
// constants and macros
//

////////////////////////////////////////////////////////////////////////////////
//
// types
//

////////////////////////////////////////////////////////////////////////////////
//
// prototypes
//

EXTERN_C NTSTATUS DispgInitialization(_In_ PUNICODE_STRING RegistryKey);

EXTERN_C void DispgTermination();

EXTERN_C NTSTATUS DispgDisablePatchGuard();

////////////////////////////////////////////////////////////////////////////////
//
// variables
//

////////////////////////////////////////////////////////////////////////////////
//
// implementations
//
