#include <iostream>
using namespace std;
void subsequence(char *input, int i, char *output, int j)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }

    //excluding
    subsequence(input, i + 1, output, j);

    //including
    output[j] = input[i];
    subsequence(input, i + 1, output, j + 1);
}
int main()
{
    char input[100], output[100];
    cin >> input;
    subsequence(input, 0, output, 0);
    return 0;
}