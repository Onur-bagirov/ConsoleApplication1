#include <iostream>

using namespace std;

// Funksiyalar

int bigSmallNumber(int* num_1, int* num_2)
{
    if (*num_1 > *num_2)
    {
        return *num_1;
    }
    else
    {
        return *num_2;
    }
}

int negPos(int* num_1)
{
    if (*num_1 > 0)
    {
        return true;
    }
    else if (*num_1 < 0)
    {
        return false;
    }
    else if (*num_1 == 0)
    {
        return true;
    }
}

void change(int* num_1, int* num_2)
{
    int temp = *num_1;
    *num_1 = *num_2;
    *num_2 = temp;
}

int additionNumber(int* num_1, int* num_2)
{
    return *num_1 + *num_2;
}

int minusNumber(int* num_1, int* num_2)
{
    return *num_1 - *num_2;
}

int hitNumber(int* num_1, int* num_2)
{
    return *num_1 * *num_2;
}

int divideNumber(int* num_1, int* num_2)
{
    return *num_1 / *num_2;
}

int calculator(int* num_1, int* num_2, char* choose)
{
    if (*choose == '+')
    {
        return additionNumber(num_1,num_2);
    }
    else if(*choose == '-')
    {
        return minusNumber(num_1, num_2);
    }
    else if (*choose == '*')
    {
        return hitNumber(num_1, num_2);
    }
    else if (*choose == '/')
    {
        return divideNumber(num_1, num_2);
    }
}

int arrayNumberAdd(int array[], int* size)
{
    int num = 0;

    srand(time(NULL));

    for (int i = 0; i < *size; i++)
    {
        array[i] = rand() % 101;
    }

    return num;
}


int main()
{
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";

    int NumOneOne;
    int NumOneTwo;

    cout << "Enter number one : ";
    cin >> NumOneOne;

    cout << "Enter number two : ";
    cin >> NumOneTwo;

    int AnswerOne = bigSmallNumber(&NumOneOne, &NumOneTwo);
    cout << "Big number : " << AnswerOne;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    int NumTwo;

    cout << "Enter number : ";
    cin >> NumTwo;

    int AnswerTwo = negPos(&NumTwo);
    cout << "Answer : " << AnswerTwo;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";

    int NumThreeOne;
    int NumThreeTwo;

    cout << "Enter number one : ";
    cin >> NumThreeOne;

    cout << "Enter number two : ";
    cin >> NumThreeTwo;

    change(&NumThreeOne, &NumThreeTwo);


    cout << "\n\n\n";

    cout << "Enter number one : " << NumThreeOne << endl;
    cout << "Enter number two : " << NumThreeTwo << endl;
    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";

    int NumberFourOne;
    int NumberFourTwo;
    char operatorOne;

    cout << "Enter number one : ";
    cin >> NumberFourOne;

    cout << "Enter number two : ";
    cin >> NumberFourTwo;

    cout << "Enter operator : ";
    cin >> operatorOne;

    int AnswerFour = calculator(&NumberFourOne, &NumberFourTwo, &operatorOne);
    cout << "Answer : " << AnswerFour;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 5";
    cout << "\n\n\n\n";

    const int Arraysize = 10;
    int ArrayFive[Arraysize];









  
}
