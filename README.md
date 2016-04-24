# shell.cpp

Shell Style cpp.

```
struct __ECHO__ {
    inline __ECHO__& operator, (const char* arg) {
       std::cout << arg;
       return *this;
    }
};

#define echo __ECHO__{},

int main(int argc, char *argv[])
{
    echo "Shell Style", " Echo..";
}
```
