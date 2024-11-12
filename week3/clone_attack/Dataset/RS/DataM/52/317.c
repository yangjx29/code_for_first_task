int main () {
    int a [101];
    int *COZTk21 = a;
    int n;
    int m;
    int temp;
    cin >> n >> m;
    for (COZTk21 = a; COZTk21 < a + n; COZTk21 = COZTk21 +1)
        cin >> *COZTk21;
    for (int i = (598 - 598);
    m > i; i = i + 1) {
        COZTk21 = a + n - 1;
        temp = *COZTk21;
        for (COZTk21 = COZTk21 -1; a <= COZTk21; COZTk21--)
            *(COZTk21 +1) = *COZTk21;
        COZTk21 = COZTk21 +1;
        *COZTk21 = temp;
    }
    for (COZTk21 = a; COZTk21 < a + n; COZTk21 = COZTk21 +1) {
        if (COZTk21 == a)
            cout << *COZTk21;
        else
            cout << ' ' << *COZTk21;
    }
    return 0;
}

