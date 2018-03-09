#ifndef Header_H
#define Header_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Header
{
public:
	void pushop(int);
	void pushnum(int);
	int ans();

	Header();
	~Header();
};

#endif
