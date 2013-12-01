/* $Id: recabs.h 564 2011-06-06 23:28:46Z marjobe $ */

/**
 *  @file:      recabs.h
 *  @details    Main header file.\n
 *              System: RecAbs\n
 *              Language: C++\n
 *
 *  @author     Mariano Bessone
 *  @email      marjobe AT gmail.com
 *
 *  @author     Emanuel Bringas
 *  @email      emab73 AT gmail.com
 *
 *  @date       August 2010
 *  @version    0.1
 *
 * This file is part of RecAbs
 *
 * RecAbs: Recursive Abstraction, an abstraction layer to any recursive
 * processes without data dependency for framework FuD.
 * <https://code.google.com/p/recabs/>
 *
 * Copyright (C) 2010 - Mariano Bessone and Emanuel Bringas
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

#ifndef RECABS_H
#define RECABS_H

/** Common side */
#include "recabs/common/serializable_recursive_functor.h"
#include "recabs/common/common.h"

/** Client side */
#include "recabs/client/l4_client_app.h"
#include "recabs/client/deserializer_functor.h"
#include "recabs/client/distributable_recursive_processor.h"
#include "recabs/client/by_size_result_sender.h"
//#include "distribution_policy.h"

/** Server side */
#include "recabs/server/l4_server_app.h"
#include "recabs/server/recursion_manager.h"

#endif

