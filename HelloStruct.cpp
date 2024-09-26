#include "HelloStruct.hpp"
#include <vector>

vector <string>
members;

void HelloStruct::add_member(string member)
{
	members.push_back(member);
}
