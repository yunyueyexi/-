#include <fstream>
#
#include <iostream>
#include <list>
#include <algorithm>
#include <queue>

using namespace std;
#define FLAG 0
struct food
{
    int id;
    char name[21];
    float price;
};

struct cmp
{
    bool operator()(const food &a, const food &b) const
    {
        if (a.id == b.id)
        {
            if (a.price == b.price)
                return a.name > b.name;
            return a.price > b.price;
        }
        return a.id > b.id;
    }
};

int main()
{
    // ofstream f("data1");

    // int i = 12345567;
    // double d = -3.14;
    // string s = "hello,中国";

    // f << i << ' ' << s << endl;

    // // f.close();    //这里有析构函数自动释放，所以除非自己立即需要，否则无需进行释放

    // food b = {1001, "数字电路", 55.2};

    // f.write((const char *)&b, sizeof(b)); // write是将内存中的数据原封不动的转移到外存中，二进制 准守当前的国际编码标准
    food b;
    list<food> bs;
    char c;
    while (1)
    {
        cout << "请输入商品信息:" << endl;
        cout << "ID:";
        cin >> b.id;
        cout << "商品名:";
        cin >> b.name;
        cout << "商品价格:";
        cin >> b.price;
        bs.push_back(b);

        cout << "是否需要继续输入(y/n)";
        cin >> c;
        if (c == 'n' || c == 'N')
            break;
    }

    bs.sort(cmp()); // 三级排序

#if (FLAG)
    for (auto it = bs.begin(); it != bs.end(); it++)
    {
        cout << it->id << ' ' << it->name << ' ' << it->price << endl;
    }
#endif

    ofstream f("my_data");
    for (auto it = bs.begin(); it != bs.end(); it++)
    {
        f.write((const char *)&*it, sizeof(food));
    }
    f.close();

    vector<food> q;
    ifstream f1("my_data");

    while (f1)
    {
        f1.read((char *)&b, sizeof(food));
        q.push_back(b);
    }

    reverse(q.begin(), q.end());
    for (int i = 0; i < q.size(); i++)
    {
        cout << q[i].id << " " << q[i].name << " " << q[i].price << endl;
    }
    return 0;
}