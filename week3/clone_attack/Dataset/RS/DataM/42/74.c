int main () {
    int n, SqidnybK, i, j = 0;
    int a [n];
    cin >> n;
    {
        i = 0;
        while (n > i) {
            cin >> a[i];
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
            i++;
        };
    }
    cin >> SqidnybK;
    {
        i = 0;
        while (i < n) {
            if (a[i] != SqidnybK) {
                a[j] = a[i];
                j++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = j;
        while (i < n) {
            a[i] = '\0';
            i++;
        };
    }
    {
        i = 0;
        while (i < j) {
            if (i == 0)
                cout << a[i];
            else
                cout << " " << a[i];
            i++;
        };
    }
    return 0;
}

