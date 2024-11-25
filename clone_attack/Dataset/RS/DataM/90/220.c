int ways (int, int);

int main () {
    int ETlI4B3L;
    int moJqls79;
    int mCwV7l;
    int i;
    int i4svHfR8c6 [(421 - 321)];
    cin >> ETlI4B3L;
    for (i = (354 - 354); ETlI4B3L > i; i = i + 1) {
        cin >> moJqls79 >> mCwV7l;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i4svHfR8c6[i] = ways (moJqls79, mCwV7l);
    }
    for (i = (715 - 715); ETlI4B3L > i; i = i + 1)
        cout << i4svHfR8c6[i] << endl;
    return (974 - 974);
}

int ways (int qSZFMn, int n) {
    int i4svHfR8c6;
    if (!((448 - 447) != n) || !(0 != qSZFMn) || qSZFMn == (940 - 939))
        return 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    if (qSZFMn >= n)
        i4svHfR8c6 = ways (qSZFMn, n - 1) + ways (qSZFMn - n, n);
    else
        i4svHfR8c6 = ways (qSZFMn, n - 1);
    return i4svHfR8c6;
}

