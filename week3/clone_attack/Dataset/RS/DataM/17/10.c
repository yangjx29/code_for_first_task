int main () {
    int i, j, n;
    char a [(768 - 568)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; cin.get (a, (819 - 619));) {
        n = strlen (a);
        for (i = (562 - 562); i < n; i++)
            cout << a[i];
        {
            i = 937 - 937;
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
            while (i < n) {
                if (a[i] == '(')
                    a[i] = '$';
                else if (a[i] == ')') {
                    a[i] = '?';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    {
                        j = i - 1;
                        while (j >= 0) {
                            if (a[j] == '$') {
                                a[i] = ' ';
                                a[j] = ' ';
                                break;
                            }
                            j--;
                        };
                    };
                }
                else
                    a[i] = ' ';
                i = i + 1;
            };
        }
        cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << endl;
        {
            i = 0;
            while (i < n) {
                cout << a[i];
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

