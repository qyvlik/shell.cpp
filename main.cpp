#include <thread>
#include <iostream>

struct __ECHO__ {
    inline __ECHO__& operator, (const char* arg) {
       std::cout << arg;
       return *this;
    }
};

#define echo __ECHO__{},

struct __DO_LATER_ {
    template<typename T>
    inline void operator, (T&& t) {
        std::thread {std::forward<T>(t)}.detach();
    }
};

#define later __DO_LATER_{},

#define fuctor(...) [=](...)

#define async later fuctor()

#define Loop while(true){}

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;

    async {
        echo "Shell Style", " Echo..";
    };

    async {
        echo "Shell Style", " Echo..";
    };

    Loop;
    return 0;
}

