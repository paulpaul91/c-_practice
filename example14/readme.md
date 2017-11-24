@(C++再回炉)
date：2017/11/24 
对于vertor使用仍需完善
<font color=green size=5>我是罗斌</font>
<font color=red size=5>我是罗斌</font>
<font color=blue size=5>我是罗斌</font>
#vector使用
**快速查找手册**
**迭代器**
正向迭代器
vector<int>::iterator p=a.begin();
反向迭代器
vector<int>::reverse_iterator rp=a.rbegin();
like cbegin()、end()、cend() 当每次迭代器使用后，迭代器首地址要进行重赋值
**下标操作**
vector<int> c
c[i]
c.at(i)
**尾部操作**
//尾部插入一个元素
c.push_back(t)
//尾部弹出一个元素
c.pop_back()
//查看尾部元素
c.back()
**在某个位置插入**
a.insert(p+1,1);
**插入数组**
int c[]={2,3,4,5};
//插入一个数组
a.insert(p+2,c,c+4);
**删除元素**
//删除元素
a.erase(p+2);
//删除前5个元素
a.erase(p,p+5);
//删除所有元素
a.clear()
//vector的大小
a.size()
**交换、判空**
empty() 判容器是否为空
swap() 交换函数


使用vector进行求和
```c++
int f(vector<int>& c)删除元素
{
	int sum=0;
	vector<int>::iterator p=c.begin();
	while(p!=c.end())
	{
		sum+=*p;
		p++;
	}
	return sum;
}
```
实例化
```c++
int main()
{
	int b[]={5,8,7,6,5,8,9,1,10,22,33};
	vector<int> a(b,b+11);
	vector<int>::iterator p=a.begin();
	//end()是容器最后一个元素的最后	p=a.begin();一个元素
	while(p！=a.end())
	{
		cout<<*p<<endl;
		sum+=*p++;
	}
	cout<<"sum"<<sum<<endl;
	//反向迭代器
	vector<int>::reverse_iterator rp=a.rbegin();
	int sum2=0;
	while(rp!=a.rend())
	{
		cout<<*rp<<endl;
		sum2+=*rp++;
	}	p=a.begin();删除元素
	cout<<"sum2="<<sum2<<endl;
	return
}
```
**构建查找函数**(正向迭代器)
```C++
template<typename T>
typename vector<T>::iterator my_find(vector<T>& c,const T val)
{
	vector<T>::iterator p=c.begin();
	while(p!=c.end())
	{
		if(*p==val)
			return p
		p++
	}
	return c.end();
}删除元素
```
**反向迭代**
```C++
template<typename T>
typename vector<T>::iterator my_find(vector<T>& c,const T val)
{
	vector<T>::reverse_iterator rp=c.rbegin();
	while(rp!=c.rend())
	{
		if(*rp==val)
		{
			typename vector<T>::iterator p=rp.base();
			return --rp;
		}
        rp++;
	}删除元素
	return c.end();
}
```
##vector 支持下标运算
```c++
vector<int> c
c[i]
c.at(i)
//尾部插入一个元素
c.push_back(t)
//尾部弹出一个元素
c.pop_back()
//查看尾部元素
c.back()
```
##看点实际的代码理解的更daxiao方便
```C++
int main()删除元素
{
	int b[]={0,6,7,8,9};
	//直接将数组赋予vector
	int<int> a(b,b+5);
	//设置迭代器为初始位置
	vector<int>::iterator p=a.begin();
	//在p+1位置插入1 ，即a[1]位置
	a.insert(p+1,1);
	while(p!=a.end())
	{
		cout<<*p++<<endl;
	}
	int c[]={2,3,4,5};
	p=a.begin();
	//插入一个数组
	a.insert(p+2,c,c+4);删除元素删除元素
	//删除元素
	a.erase(p+2);
	//删除前5个元素
	a.erase(p,p+5);
	//删除所有元素
	a.clear()
	//vector的大小
	a.size()
}
```
empty() 判容器是否为空
swap() 交换函数

