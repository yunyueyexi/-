#ifndef __PERSON_H__
#define __PERSON_H__


// 声明 person 类
class person
{
private:
    // 定义属性（数据成员、成员变量）
    int id;
    char name[21];
    float sight;

public:
    // 声明各种方法（函数成员、成员函数）

    // 声明各种重载的构造函数
    person();
    person(int id);
    person(int id, const char* name, float sight = 4.3);

    // 声明析构函数
    ~person();

    int getID(void);
    void setSight(float sight = 4.3);
    float getSight(void);
    void speak(void);
    void speak(const char* text);
    void study(void);
};


#endif
