/* 
 * Time-stamp: <Apr/29/2013 Mon 02:32:22 JST>
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
 *  \brief A main source file of libtest
 *  \author INCHOKI Studio
 *
 *  \version 0.1
 *  \date April 2013
 */

#include <libtest.hpp>

using namespace std;

char* otter::Message::DEFAULT_MESSAGE="Hello World!";

bool otter::sayMessage(string message)
{
  cout << message << endl;
  return EXIT_SUCCESS;
}

extern "C" otter::Message* createDefaultObject()
{
  return new otter::Message;
}

extern "C" otter::Message* createObject(string message)
{
  return new otter::Message(message);
}

extern "C" void destroyObject(otter::Message* object)
{
  delete object;
}

otter::Message::Message()
{
  this->message = otter::Message::DEFAULT_MESSAGE;
}

otter::Message::Message(string message)
{
  this->message = message;
}

otter::Message::~Message()
{
}

bool otter::Message::say()
{
  cout << this->message << endl;
  return EXIT_SUCCESS;
}

