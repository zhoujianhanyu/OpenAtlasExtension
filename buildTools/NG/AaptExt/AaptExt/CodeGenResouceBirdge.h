//
//  CodeGenResouceBirdge.h
//  AaptExt
//
//  Created by BunnyBlue on 7/23/15.
//  Copyright (c) 2015 BunnyBlue. All rights reserved.
//

#ifndef __AaptExt__CodeGenResouceBirdge__
#define __AaptExt__CodeGenResouceBirdge__

#include <stdio.h>
#include <string>
#include "CodeGen.h"
using namespace std;
class CodeGenResouceBirdge{
    public:
    string  genResourceBridgeClass();
    std::string  genResourceBridgeHeader();

    string  genFunctionBridge_getResource();
    string  genFunctionBridge_AnalyticsSharedResource();
};

#endif /* defined(__AaptExt__CodeGenResouceBirdge__) */
