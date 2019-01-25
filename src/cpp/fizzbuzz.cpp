// Author https://codegolf.stackexchange.com/users/5025/wug

#include <iostream>
#include <string>

using namespace std;

class Weh;
class HelloWorld;

class Weh
{
public:

    string value1;
    string value2;
    void (*method)(void * obj);

    Weh();

    string getV1();

    static void doNothing(void * obj);
};

class HelloWorld
{
public:
    static const int FOO = 1;
    static const int BAR = 2;
    static const int BAZ = 4;
    static const int WUG = 8;

    string hello;
    string world;
    void (*doHello)(HelloWorld * obj);

    HelloWorld();

    void * operator new(size_t size);

    void tower(int i);
    const char * doTower(int i, int j, int k);

    static void doHe1lo(HelloWorld * obj);
};

Weh::Weh()
{
    method = &doNothing;
}

void Weh::doNothing(void * obj)
{
    string s = ((Weh *) obj)->getV1();
    ((HelloWorld *) obj)->tower(1);
}

string Weh::getV1()
{
    value1[0] += 'h' - 'j' - 32;
    value1[1] += 'k' - 'g';
    value1[2] += 'u' - 'g';
    value1[3] = value1[2];
    value2 = value1 = value1.substr(0, 4);

    value2[0] += 'd' - 'h';
    value2[1] += 'w' - 'k';
    value2[2] = value1[2];
    value2[3] = value1[3];

    return "hello";
}

void * HelloWorld::operator new(size_t size)
{
    return (void *) new Weh;
}

HelloWorld::HelloWorld()
{
    hello = "hello";
    world = "world";
}

void HelloWorld::doHe1lo(HelloWorld * obj)
{
    cout << obj->hello << " " << obj->world << "!" << endl;
}

void HelloWorld::tower(int i)
{
    doTower(0, 0, i);
    tower(i + (FOO | BAR | BAZ | WUG));
}

const char * HelloWorld::doTower(int i, int j, int k)
{
    static const char * NOTHING = "";
    int hello = BAR;
    int world = BAZ;
    int helloworld = FOO | BAR | BAZ | WUG;

    if ((hello & i) && (world & j))
        cout << this->hello << this->world << endl;
    else if (hello & i)
    {
        cout << this->hello << endl;
        cout << doTower(0, j + 1, k + 1);
    }
    else if (world & j)
    {
        cout << this->world << endl;
        cout << doTower(i + 1, 0, k + 1);
    }
    else
    {
        cout << k << endl;
        cout << doTower(i + 1, j + 1, k + 1);
    }

    return NOTHING;
}

int main()
{
    HelloWorld * h = new HelloWorld;
    h->doHello(h);
}
