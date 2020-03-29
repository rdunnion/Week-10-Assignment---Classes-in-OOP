
#include <iostream>
using namespace std;

class Test
{
    private:
        float SomeData;
        float SomeData2;

    public:
        float function1(void)
        {
            cout << "Please enter a number with up to 3 decimal points.\n";
            cin >> SomeData;
            return SomeData;
        }

        float function2(void)
        {
            cout << "Please enter a second number. It may include 3 decimal points.\n";
            cin >> SomeData2;
            return SomeData2;
        }

};

int main()
{
    Test obj1, obj2;
    float sum1 = obj1.function1() + obj2.function2();
    cout << "The sum of the numbers you have chosen is: " << sum1 << endl;
}