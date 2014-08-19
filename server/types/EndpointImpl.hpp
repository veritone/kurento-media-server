/*
 * (C) Copyright 2014 Kurento (http://kurento.org/)
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser General Public License
 * (LGPL) version 2.1 which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-2.1.html
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 */

#ifndef __ENDPOINT_IMPL_HPP__
#define __ENDPOINT_IMPL_HPP__

#include "MediaElementImpl.hpp"
#include <Endpoint.hpp>

namespace kurento
{

class EndpointImpl: public virtual Endpoint, public MediaElementImpl
{
public:
  EndpointImpl (const std::string &factoryName,
                std::shared_ptr< MediaObjectImpl > parent);
  virtual ~EndpointImpl() throw () {};

private:
  class StaticConstructor
  {
  public:
    StaticConstructor();
  };

  static StaticConstructor staticConstructor;
};

} /* kurento */

#endif /* __ENDPOINT_IMPL_HPP__ */