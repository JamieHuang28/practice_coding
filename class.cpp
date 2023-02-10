#include <iostream>

class Interface
{
private:
    /* data */
public:
    virtual ~Interface(){};
    virtual void methodA() = 0;
    virtual void methodB() = 0;
};

class ClassA : public Interface
{
private:
    /* data */
public:
    ClassA(){}
    ~ClassA(){}
    void methodA() {
        std::cout << "ClassA.methodA()";
    }
    void methodB() {
        std::cout << "ClassA.methodB()";
    }
};

class ClassB : public ClassA
{
private:
    /* data */
public:
    ClassB(){}
    ~ClassB(){}
    void methodA() {
        ClassA::methodA();
    }
    void methodB() {
        std::cout << "ClassB.methodB()";
    }
};

int main(int argc, char const *argv[])
{
    Interface* b = new ClassB();
    b->methodA();
    b->methodB();
    return 0;
}
