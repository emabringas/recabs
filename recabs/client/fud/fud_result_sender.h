/* $Id: fud_result_sender.h 589 2011-07-14 18:25:31Z marjobe $ */

/** 
 *  @file:      fud_result_sender.h
 *  @details    Header file for FuDResultSender class.\n
 *              System: RecAbs\n
 *              Language: C++\n
 *  
 *  @author     Mariano Bessone
 *  @email      marjobe AT gmail.com
 *
 *  @author     Emanuel Bringas
 *  @email      emab73 AT gmail.com
 *
 *  @date       March 2011
 *  @version    0.1
 *
 * RecAbs: Recursive Abstraction, an abstraction layer to any recursive
 * process without data dependency for the framework FuD.
 * See <https://code.google.com/p/recabs/>.
 *
 * Copyright (C) 2010, 2011 - Mariano Bessone & Emanuel Bringas, FuDePAN
 *
 * This file is part of RecAbs project.
 *
 * RecAbs is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * RecAbs is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with RecAbs.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef FUD_RESULT_SENDER_H
#define FUD_RESULT_SENDER_H

#include "recabs/client/result_sender.h"

namespace recabs
{

class FuDSender : public RealSender
{
    public:

        /**
         * Constructor.
         */
        FuDSender(){};

        /**
         * Destructor.
         */
        virtual ~FuDSender(){};

        /**
         * Reimplementation of method send.
         */
        virtual void send(const OutputMessage& out);

};

}

#endif
