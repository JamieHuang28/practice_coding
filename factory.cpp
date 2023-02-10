#include <iostream>
#include <memory>

class ProductInterface
{
public:
    virtual void execute() = 0;
};

typedef std::shared_ptr<ProductInterface> ProductInterfacePtr;

class Creator
{
public:
    Creator(){}
    virtual ~Creator(){}
    virtual ProductInterfacePtr create() = 0;
    virtual void launch();
};

void Creator::launch()
{
    ProductInterfacePtr product = create();
    product->execute();
}

class ConcreteProductA : public ProductInterface
{
private:
    const std::string type_ = "ConcreteProductA";
public:
    ConcreteProductA();
    ~ConcreteProductA();
    virtual void execute();
};

ConcreteProductA::ConcreteProductA()
{
}

ConcreteProductA::~ConcreteProductA()
{
}

void ConcreteProductA::execute()
{
    std::cout << type_ << "::execute()" << std::endl;
}

class ConcreteCreatorA : public Creator
{
private:
    std::string design_ = "Designed by Jamie.";
public:
    ConcreteCreatorA();
    ~ConcreteCreatorA();
    virtual ProductInterfacePtr create();
};

ConcreteCreatorA::ConcreteCreatorA()
{
}

ConcreteCreatorA::~ConcreteCreatorA()
{
}

ProductInterfacePtr ConcreteCreatorA::create() {
    std::cout << "ConcreteCreatorA create a product on its way.\n";
    return std::make_shared<ConcreteProductA>();
}


class ConcreteProductB : public ProductInterface
{
private:
    const std::string type_ = "ConcreteProductB";
public:
    ConcreteProductB();
    ~ConcreteProductB();
    virtual void execute();
};

ConcreteProductB::ConcreteProductB()
{
}

ConcreteProductB::~ConcreteProductB()
{
}

void ConcreteProductB::execute()
{
    std::cout << type_ << "::execute()" << std::endl;
}

class ConcreteCreatorB : public Creator
{
private:
    std::string design_ = "Designed by Jamie.";
public:
    ConcreteCreatorB();
    ~ConcreteCreatorB();
    virtual ProductInterfacePtr create();
};

ConcreteCreatorB::ConcreteCreatorB()
{
}

ConcreteCreatorB::~ConcreteCreatorB()
{
}

ProductInterfacePtr ConcreteCreatorB::create()
{
    std::cout << "ConcreteCreatorB create a product on its way.\n";
    return std::make_shared<ConcreteProductB>();
}

int main(int argc, char const *argv[])
{
    ConcreteCreatorA creator_a;
    creator_a.launch();
    ConcreteCreatorB creator_b;
    creator_b.launch();
    return 0;
}
