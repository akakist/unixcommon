/* 
 * This file is part of the UnixCommons distribution (https://github.com/yoori/unixcommons).
 * UnixCommons contains help classes and functions for Unix Server application writing
 *
 * Copyright (c) 2012 Yuri Kuznecov <yuri.kuznecov@gmail.com>.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */



#include "../Overload/Server/TestInt.hpp"

#include "Init.hpp"

void
Client::work() throw (eh::Exception)
{
  CORBATest::OctetSeq param;
  if (opt_secure_url.installed())
  {
    (*opt_secure_url)->test(param);
  }
  if (opt_url.installed())
  {
    (*opt_url)->test(param);
  }
}

int
main(int argc, char** argv)
{
  Usage<Client, Server> usage;
  return usage.use(argc, argv);
}
