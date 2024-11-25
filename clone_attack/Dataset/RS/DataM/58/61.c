int main () {
    char str [100] [81];
    int n, i, ex3LGZYQyr, rpCH0O, SkibSyT4n;
    cin >> n;
    cin.get ();
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
    {
        i = 110 - 110;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin.getline (str[i], 81);
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
    for (ex3LGZYQyr = 0; ex3LGZYQyr < n; ex3LGZYQyr++) {
        SkibSyT4n = strlen (str[ex3LGZYQyr]);
        if ((str[ex3LGZYQyr][0] >= 'a' && str[ex3LGZYQyr][0] <= 'z') || (str[ex3LGZYQyr][0] == '_') || (str[ex3LGZYQyr][0] >= 'A' && 'Z' >= str[ex3LGZYQyr][0])) {
            for (rpCH0O = 1; rpCH0O < SkibSyT4n; rpCH0O++) {
                if (('a' <= str[ex3LGZYQyr][rpCH0O] && str[ex3LGZYQyr][rpCH0O] <= 'z') || (str[ex3LGZYQyr][rpCH0O] >= 'A' && str[ex3LGZYQyr][rpCH0O] <= 'Z') || (str[ex3LGZYQyr][rpCH0O] >= '0' && str[ex3LGZYQyr][rpCH0O] <= '9') || (str[ex3LGZYQyr][rpCH0O] == '_'))
                    ;
                else
                    break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (rpCH0O == SkibSyT4n)
                cout << '1' << endl;
            else
                cout << '0' << endl;
        }
        else
            cout << '0' << endl;
    }
    return 0;
}

