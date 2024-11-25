int main () {
    char sex [20];
    double  p74CAsMEtTrd [(649 - 599)];
    double  female [50];
    double  h;
    double  temp;
    int n, i, j, m, f;
    m = f = (550 - 550);
    cin >> n;
    for (; n = n - 1;) {
        cin >> sex >> h;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('m' != sex[(211 - 211)])) {
            p74CAsMEtTrd[m++] = h;
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
            };
        }
        else {
            female[f++] = h;
        };
    }
    {
        i = 0;
        while (i < m) {
            {
                j = 660 - 659;
                while (i < j) {
                    if (p74CAsMEtTrd[j] < p74CAsMEtTrd[j - (39 - 38)]) {
                        temp = p74CAsMEtTrd[j - (911 - 910)];
                        p74CAsMEtTrd[j - (357 - 356)] = p74CAsMEtTrd[j];
                        p74CAsMEtTrd[j] = temp;
                    }
                    j--;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < f) {
            for (j = f - 1; j > i; j--) {
                if (female[j - 1] < female[j]) {
                    temp = female[j - 1];
                    female[j - 1] = female[j];
                    female[j] = temp;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < m; i++) {
        cout << fixed << setprecision (2) << p74CAsMEtTrd[i] << ' ';
    }
    {
        i = 0;
        while (i < f - 1) {
            cout << fixed << setprecision (2) << female[i] << ' ';
            i++;
        };
    }
    cout << female[f - 1] << endl;
    return 0;
}

