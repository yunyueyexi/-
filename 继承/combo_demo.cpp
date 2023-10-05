#include<iostream>

class light
{
private:
    /* data */
public:
    light(void);
    ~light();
};

light::light(void)
{
    std::cout << "light()" << std::endl;
}

light::~light()
{
    std::cout << "~light()" << std::endl;

}



class wheel
{
private:
    int id;
    std::string model;
public:
    wheel(void);
    wheel(int id,std::string model);
    ~wheel();
};

wheel::wheel(void)
{
    std::cout << "whell()" << std::endl;
}

wheel::wheel(int id,std::string model):id(id),model(model)
{
    std:: cout << "wheel(int id,std::string model)" << std::endl;
}

wheel::~wheel()
{
    std::cout << "~wheel()" << std::endl;
}

class car
{
private:
    int weight;
    std::string model;  //子对象
    wheel w; //子对象
    light l; //子对象
public:
    car(void);
    car(int weight,std::string model,int wid,std::string wm);
    ~car();
};

car::car(void)
{
    std::cout << "car()" << std::endl;
}

car::car(int weight,std::string model,int wid,std::string wm):weight(weight),model(model),w(wid,wm)
{
    std::cout << "car(int weight,std::string model,int wid,std::string wm)" << std::endl;
}


car::~car()
{
    std::cout << "~car()" << std::endl;
   
}



int main()
{
    car c2(1440,"保时捷",1001,"米其林");
    car c1;


    return 0;

}


