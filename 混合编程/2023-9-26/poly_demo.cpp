#include <iostream>
#include <cstring>

using namespace std;


class person
{
private:
    char name[21];
    int id;
    
public:
    person(): id(0), name("")
    {
    }

    person(int id, const char* name): id(id)
    {
        strcpy(this->name, name);
    }

    virtual ~person()
    {
        std::cout << "~person()" << std::endl;
    }    

    // 虚函数
    virtual void show(void) const
    {
        std::cout << id << " " << name << std::endl;
    }

    virtual void speak(void) const = 0;  // 纯虚函数

    virtual void study(void) const = 0;  // 纯虚函数

    // 虚函数
    // virtual void speak(void) const
    // {
    //     std::cout << "speak!" << std::endl;
    // }

    // void speak(double d, int i)  // 方法重载
    // {

    // }
};


class chinese: public person
{
private:
    // char name[21];
    // int id;
    char sx[5];

public:
    chinese(): sx("")
    {
    }

    chinese(int id, const char* name, const char* sx): person(id, name)
    {
        strcpy(this->sx, sx);
    }

    virtual ~chinese()
    {
        std::cout << "~chinese()" << std::endl;
    }    

    void show(void) const
    {
        std::cout << sx << " ";
        person::show();
    }

    //void speak(void) const  // 重写
    virtual void speak(void) const override;  // 重写    
    virtual void study(void) const override;  // 重写    
};


void chinese::speak(void) const  // 重写
{
    std::cout << "我说中国话！" << std::endl;
}   


void chinese::study(void) const  // 重写
{
    std::cout << "我要学中文！" << std::endl;
}  


class wuhaner: public chinese
{
public:
    wuhaner(int id, const char* name, const char* sx): chinese(id, name, sx)
    {
    }

    void speak(int i) const  // 同名覆盖
    {
        std::cout << "我说武汉话！" << std::endl;
    }
};


class english: public person
{
private:
    // char name[21];
    // int id;
    char xz[10];

public:
    english(): xz("")
    {
    }

    english(int id, const char* name, const char* xz): person(id, name)
    {
        strcpy(this->xz, xz);
    }

    ~english()
    {
        //std::cout << "~english()" << std::endl;
    }    

    void show(void) const
    {
        std::cout << xz << " ";
        person::show();
    }

    virtual void speak(void) const override
    {
        std::cout << "I can speak in english!" << std::endl;
    }   

    virtual void study(void) const override;  // 重写   
};




void english::study(void) const  // 重写
{
    std::cout << "I can study in english!" << std::endl;
}  


void do_speak(person& p);


int main()
{
    // //person* p = new person(1000, "王五", "蛇");
    // //person p1;
    // chinese c1(1001, "张三", "龙");
    // english e1(2001, "Tom", "狮子座");
    // wuhaner w1(3001, "李四", "虎");

    // // 28 36 40
    // //std::cout << sizeof(p1) << ' ' << sizeof(c1) << ' ' << sizeof(e1) << std::endl;

    // w1.speak(1);
    // w1.chinese::speak();

    // // 下面都是向上转型的示例

    // // p1 = c1;
    // // p1.show();
    // // p1.speak();

    // // p1 = e1;
    // // p1.show();
    // // p1.speak();

    // person* p2 = nullptr;

    // p2 = &c1;
    // p2->show();
    // p2->speak();

    // p2 = &e1;
    // p2->show();
    // p2->speak();

    // do_speak(c1);
    // do_speak(e1);
    // do_speak(p1);
    // do_speak(w1);

    // person& p3 = c1;
    // person& p4 = e1;

    // p3.show();
    // p3.speak();

    // p4.show();
    // p4.speak();

    person* p = new chinese(1001, "张三", "龙");

    p->show();
    p->speak();
    p->study();

    delete p;

    return 0;
}


void do_speak(person& p)
{
    p.speak();
}


// void do_speak(person* p)
// {
//     p->speak();
// }
