/*
 *  Copyright 2001, 2002 Adrian Thurston <thurston@cs.queensu.ca>
 */

/*  This file is part of Aapl.
 *
 *  Aapl is free software; you can redistribute it and/or modify it under the
 *  terms of the GNU Lesser General Public License as published by the Free
 *  Software Foundation; either version 2.1 of the License, or (at your option)
 *  any later version.
 *
 *  Aapl is distributed in the hope that it will be useful, but WITHOUT ANY
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 *  FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 *  more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Aapl; if not, write to the Free Software Foundation, Inc., 59
 *  Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include <iostream>
#include <stdio.h>

using std::cout;
using std::endl;

#include "bstmap.h"

typedef BstMap< char *, int, CmpStr > Map;

void testBstMap1()
{
	cout << "TEST 1" << endl;
	Map m1( "hi there", 1 );
	Map m2( "friend" );

	cout << m1.data[0].key << endl;
	cout << m2.data[0].key << endl;
}

void testBstMap2()
{
	cout << "TEST 2" << endl;
	BstMap<char *, int, CmpStr> table1( "hi" );
	cout << table1[0].key << endl;

	BstMap<char *, int, CmpStr> table2( "there", 1  );
	cout << table2[0].key << endl;
	cout << table2[0].value << endl;
}


int main()
{
	testBstMap1();
	testBstMap2();
	return 0;
}
