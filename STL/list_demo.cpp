#include <iostream>
#include <list>
#include <algorithm> //所有常用算法封装库

using namespace std;

int main()
{
    list<int> nums;

    nums.push_back(5);
    nums.push_back(2);
    nums.push_front(3);
    nums.push_front(7);

    nums.insert(nums.begin(), 9); // 任意插，第一个参数是想要插入的位置。第二个是在目标位置之前插入  插入头部

    nums.insert(nums.end(), 4); // 任意插入，end是在尾部后一位的位置，所以这个插入是直接插到了链表尾部

    // list<int>::iterator it = nums.begin();
    auto it = nums.begin(); // 当类型很长的时候可以用 aout 关键字来代替类型c++可以自动推导类型
    ++it;
    ++it;
    nums.insert(it, 19);
    // 把开始的位置向后挪两位
    cout << nums.size() << endl;

    // it = find(nums.begin(), nums.end(), 4);

    // nums.erase(nums.begin());

    // it = find(nums.begin(), nums.end(), 19); // 包括begin但不包括end
    // //nums.erase(it);                        // 删除指定数据
    // nums.erase(it, nums.end());              // 删除指定范围数据

    nums.reverse(); // 交换位置
    nums.sort();    // 升序
    // nums.sort(cmp); //降序

    // greater<int> cmp2;
    // nums.sort(cmp2);   //与下面等效
    nums.sort(greater<int>());

    for (it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}