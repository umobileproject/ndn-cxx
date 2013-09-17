/**
 * Copyright (C) 2013 Regents of the University of California.
 * @author: Jeff Thompson <jefft0@remap.ucla.edu>
 * See COPYING for copyright and distribution information.
 */

#include "changed-event.hpp"

using namespace std;

namespace ndn {

void ChangedEvent::fire()
{
  for (unsigned int i = 0; i < listeners_.size(); ++i)
    listeners_[i]();
}

}
