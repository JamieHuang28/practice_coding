#include <string>

int main(int argc, char const *argv[])
{
    std::string str(argv[1]);
    if(str.find("enter") != std::string::npos) {
        printf(str.c_str());
    }
    return 0;
}
