// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class mutagenServerTarget : TargetRules
{
 
    public mutagenServerTarget(TargetInfo Target)

       {

     Type = TargetType.Server;

        bUsesSteam = false;

       }

        //
        // TargetRules interface.
        //
            public override void SetupBinaries
            (
             TargetInfo Target,
             ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
             ref List<string> OutExtraModuleNames
             )
               {
                OutExtraModuleNames.Add("mutagen");
               }
  }