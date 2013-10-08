// Torc - Copyright 2011 University of Southern California.  All Rights Reserved.
// $HeadURL$
// $Id$

// This program is free software: you can redistribute it and/or modify it under the terms of the 
// GNU General Public License as published by the Free Software Foundation, either version 3 of the 
// License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
// without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See 
// the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License along with this program.  If 
// not, see <http://www.gnu.org/licenses/>.

#include <vector>

#include "torc/generic/om/PortElement.hpp"
#include "torc/generic/om/Port.hpp"
#include "torc/generic/om/PortReference.hpp"

namespace torc {

namespace generic {

/**
 * Set the port element type
 *
 * @param[in] Pointer to port element type
 */
void
PortElement::setType( const ElementType & inSource ) throw()
{
    mType = inSource;
}

PortElement::PortElement()
    :mType( eElementTypePort ),
    mPort(),
    mPortReference() {
}

PortElement::PortElement( const PortSharedPtr &inPort )
    :mType( eElementTypePort ),
    mPort( inPort ),
    mPortReference() {
}

PortElement::PortElement( const PortReferenceSharedPtr &inPortRef )
    :mType( eElementTypePortReference ),
    mPort( ),
    mPortReference( inPortRef ) {
}

PortElement::PortElement( const PortElement &inRhs )
    :mType( inRhs.mType ),
    mPort( inRhs.mPort ),
    mPortReference( inRhs.mPortReference ) {
}

PortElement &
PortElement::operator =( const PortElement &inRhs ) {
    if( this == &inRhs )
    {
        mType = inRhs.mType;
        mPort = inRhs.mPort;
        mPortReference = inRhs.mPortReference;
    }
    return *this;
}

PortElement::~PortElement() throw() {
}

} // namespace torc::generic

} // namespace torc