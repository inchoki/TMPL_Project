/* 
 * Time-stamp: <Apr/29/2013 Mon 03:18:24 JST>
 */
/*******************************************************************************
* Copyright (c) 2013 INCHOKI Studio
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
*  1. Redistributions of source code must retain the above copyright notice,
*     this list of conditions and the following disclaimer.
*  2. Redistributions in binary form must reproduce the above copyright notice,
*     this list of conditions and the following disclaimer in the documentation
*     and/or other materials provided with the distribution.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE
*
*******************************************************************************/

/*! \file
 *  \brief A main header file of libtest
 *  \author <__AUTHOR__>
 *
 *  \version <__VERSION__>
 *  \date April 2013
 */

#ifndef __LIBTEST_HPP__
#define __LIBTEST_HPP__

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

namespace otter {

  bool sayMessage(string message);

  class Message {
  private:
    string message;
  protected:
  public:
    static char* DEFAULT_MESSAGE;

    Message();
    Message(string message);
    ~Message();

    bool say();
  };

  typedef Message* CreateMessageDefault();
  typedef Message* CreateMessage(string);
  typedef void DestroyMessage(Message*);
}

#endif //__LIBTEST_HPP__
