#ifndef JIESU_H
#define JIESU_H
#include <iostream>
#include <string>
using namespace std;
int fact(int val);
static int a=5;
size_t count_calls();
void reset(int *ip);
void reset1(int &a);
std::string::size_type find_char(const std::string &s,char c,std::string::size_type &occurs);
void print(const int *a);
void print1(const char *cp);
void print2(const int *beg,const int *end);
void print3(const int ia[],size_t size);
#endif
