
/*
 Copyright (C) 2006 Mark Joshi

 This file is part of XLW, a free-software/open-source C++ wrapper of the
 Excel C API - http://xlw.sourceforge.net/

 XLW is free software: you can redistribute it and/or modify it under the
 terms of the XLW license.  You should have received a copy of the
 license along with this program; if not, please email xlw-users@lists.sf.net

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/


#ifndef TEST_H
#define TEST_H

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include <xlw/DoubleOrNothing.h>
#include <xlw/ArgList.h>
#include "PayOff.h"
#include "reftest.h"
#include "wrapper.h"
#include "ArgListFactory.h"

using namespace xlw;

//<xlw:libraryname=MJDesignPatternExample
//<xlw:typeregister(Wrapper<PayOff> ArgumentList GetFromFactory<PayOff>)


double // evaluate pay--off
//<xlw:time
PayOffEvaluation(const Wrapper<PayOff>& PayOffTable // table for payoff
               , double Spot // point for evaluation
                );

#endif
