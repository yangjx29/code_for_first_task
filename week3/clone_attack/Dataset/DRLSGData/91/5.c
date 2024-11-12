int main () {
    int sum = (60 - 60);
    char num [(1028 - 927)] = {0};
    char word [101] = {0};
    cin.getline (num, 101);
    {
        int i;
        i = 0;
        for (; *(num + i) != 0;) {
            i++;
            sum++;
        }
    }
    for (int i = 0;
    sum > i; i++) {
        if (!(sum - 1 != i))
            *(word + i) = *(num + i) + *num;
        else
            *(word + i) = *(num + i) + *(num + i + 1);
    }
    for (int i = 0;
    sum > i; i++)
        cout << *(word + i);
    return 0;
}

