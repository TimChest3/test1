     #include <iostream>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Rus");
    int n = 0;
    cout << "Введите количество елементов :";
    cin >> n;
 
    int *arr = new int[n];
 
    for (int i = 0; i < n; i++)
    {
        cout << "Введите елемент [ " << i + 1 << " ] = ";
        cin >> arr[i];
    }
 
    int minimal = arr[0];
    int maximum = arr[0];
    int average = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minimal)
        {
            minimal = arr[i];
        }
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
        average += arr[i];
    }
 
    cout << "Максимум = " << maximum << endl;
    cout << "Минимум = " << minimal << endl;
    cout << "Сумма всех елементов = " << average << endl;
    cout << "Середнее арифметическое = " << average / n << endl;
 
    delete[] arr;
}
