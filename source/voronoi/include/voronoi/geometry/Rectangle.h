/**
  * (C) LGPL-3
  *
  * Voronoi++ <https://github.com/rlux/voronoi>
  *
  * Copyright: 2012 Lux, Scheibel
  * Authors:
  *     Roland Lux <rollux2000@googlemail.com>
  *     Willy Scheibel <willyscheibel@gmx.de>
  * 
  * This file is part of Voronoi++.
  *
  * Voronoi++ is free software: you can redistribute it and/or modify
  * it under the terms of the GNU Lesser General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  * 
  * Voronoi++ is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU Lesser General Public License for more details.
  * 
  * You should have received a copy of the GNU Lesser General Public License
  * along with Voronoi++.  If not, see <http://www.gnu.org/licenses/>.
  **/

#pragma once

#include <voronoi/voronoi_api.h>

#include <voronoi/geometry/Point.h>

namespace geometry {

class VORONOI_API Rectangle
{
public:
	Rectangle();
	Rectangle(const Point& a, const Point& b);
	Rectangle(real left, real top, real width, real height);

	real x() const;
	real y() const;
	real width() const;
	real height() const;
	
	real left() const;
	real right() const;
	real top() const;
	real bottom() const;
	
	Point topLeft() const;
	Point topRight() const;
	Point bottomLeft() const;
	Point bottomRight() const;
	
	bool contains(const Point& p) const;
	void resizeToInclude(const Point& p);
protected:
	real _top;
	real _left;
	real _height;
	real _width;
};

} //end namespace geometry
