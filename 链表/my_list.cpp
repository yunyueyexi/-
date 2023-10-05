#include<exception>
#include<string>
class mylist
{
private:
    //类型成员
    struct node
    {
        double data;  //节点数据域
        node* next;   //节点指针域
    };

    //数据成员
    node* head;
    node* tail;
    long len;

public:
    //函数方法/成员
    mylist();  //创建链表
    //mylist(const mylist& l); //拷贝代码
    ~mylist(); //销毁链表

    //mylist operator=(const mylist& l);
    void push_back(const double& data);
    void push_front(const double& data);
    bool remove(const double& data);
    double& find(const double& data);
    void tracerse(bool (*visit)(double&));
    void sort(bool (*cmp)(const double&,const double&));
    void rever(void);
    void clear(void);

    int size() const;
    bool empty(void) const;
};


//类的实现

mylist:: mylist()
{
    node* n = new node;
     n ->next = nullptr;

     head = tail = n;
     len = 0;
}

mylist::~mylist()
{
    node* p = nullptr;

    while(head != nullptr)
    {
        p = head->next;
        delete head;
        len = 0;
    }
}

void mylist::push_back(const double& data)
{
    node* n = new node;
    n ->data = data;
    n ->next = nullptr;


    // 将新节点加入到链表中
    tail->next = n;
    tail = n;
    len++;

}

void mylist::push_front(const double& data)
{
    // 时间复杂度为 O(1)

    // 创建一个新节点
    node* n = new node;

    n->data = data;
    n->next = head->next;

    // 将新节点加入到链表中
    head->next = n;

    if(n->next == nullptr) tail = n;

    len++;
}

bool mylist::remove(const double& data)
{
    node* p = head, *q;

    // 遍历链表找到要删除节点的前驱节点
    while(p->next != nullptr && p->next->data != data)
        p = p->next;

    // 如果没找到目标节点
    if(p->next == nullptr) throw 1;

    // 如果找到了目标节点就删除它
    q = p->next;
    p->next = q->next;  // 将目标节点的前后节点连接起来
    delete q;            // 释放目标节点

    if(nullptr == p->next) tail = p;

    len--;

    return true;
}

double& mylist::find(const double& data)
{
    node* p = head->next;

    // 遍历链表找到要修改的节点
    while(p != NULL && p->data != data)
        p = p->next;

    // 如果没找到目标节点
    if(p == NULL) throw 1;

    // 如果找到了目标节点就返回其数据域的指针
    return p->data;   
}
