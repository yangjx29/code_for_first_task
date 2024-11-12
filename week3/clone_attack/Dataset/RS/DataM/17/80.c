int main () {
    int pp;
    pp = (501 - 499);
    char a [(1671 - 671)];
    int d [1000];
    int n;
    char b = '(', c = ')';
    int ww;
    ww = (280 - 280);
    for (; !(-(601 - 600) == (ww = getchar ()));) {
        a[(862 - 861)] = ww;
        {
            int i = (400 - 398);
            while (999 >= i) {
                a[i] = getchar ();
                if (!('\n' != a[i])) {
                    n = i - (995 - 994);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                i = i + 1;
            };
        }
        {
            int i = (115 - 114);
            while (n >= i) {
                d[i] = (430 - 430);
                i = i + 1;
            };
        }
        {
            int i = (544 - 543);
            while (i <= n) {
                if (!(b == a[i]) && a[i] != c)
                    d[i] = 1;
                i++;
            };
        }
        {
            int i = 1;
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
            while (n / 2 >= i) {
                for (int j = 1;
                n >= j; j = j + 1) {
                    if (a[j] == b || d[j] == 1)
                        continue;
                    {
                        int k = j;
                        while (k > (300 - 300)) {
                            if (a[k] == c || d[k] == 1)
                                continue;
                            d[j] = 1;
                            d[k] = 1;
                            break;
                            k = k - 1;
                        };
                    };
                }
                i++;
            };
        }
        {
            int i = 1;
            while (i <= n) {
                cout << a[i];
                i++;
            };
        }
        cout << endl;
        {
            int i = 1;
            while (i <= n) {
                if (d[i] == 1)
                    cout << " ";
                else if (a[i] == '(')
                    cout << "$";
                else
                    cout << "?";
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

