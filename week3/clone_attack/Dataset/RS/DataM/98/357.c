char a [10010];
int prcqAiOgbfR, n, i, my9l8IQuHVf;

void  biubiu (int DZWkNr, int ll) {
    int k;
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
    if (ll - DZWkNr < 80) {
        {
            i = DZWkNr;
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
            while (i < ll) {
                cout << a[i];
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
                i++;
            };
        }
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
    }
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (a[DZWkNr +(985 - 906)] == ' ') {
            {
                i = DZWkNr;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (i < DZWkNr +79) {
                    cout << a[i];
                    i++;
                };
            }
            cout << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            biubiu (DZWkNr +80, ll);
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (a[DZWkNr +80] == ' ') {
                for (i = DZWkNr; i <= DZWkNr +79; i++)
                    cout << a[i];
                cout << endl;
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
                biubiu (DZWkNr +81, ll);
            }
            else {
                {
                    k = 223 - 145;
                    while (DZWkNr < k) {
                        if (a[k] == ' ')
                            break;
                        k = k - 1;
                    };
                }
                {
                    i = DZWkNr;
                    while (k > i) {
                        cout << a[i];
                        i++;
                    };
                }
                cout << endl;
                biubiu (k + 1, ll);
            };
        };
    };
}

int main () {
    gets (a);
    int ll;
    ll = prcqAiOgbfR;
    scanf ("%d\n", &n);
    prcqAiOgbfR = strlen (a);
    i = prcqAiOgbfR;
    while (a[i] == ' ') {
        ll = ll - 1;
        i = i - 1;
    }
    for (i = 0; i < prcqAiOgbfR; i++) {
        if (i == 0 && a[i] == ' ') {
            for (my9l8IQuHVf = 0; my9l8IQuHVf < prcqAiOgbfR - 1; my9l8IQuHVf++)
                a[my9l8IQuHVf] = a[my9l8IQuHVf + 1];
            i = i - 1;
            ll--;
        };
    }
    biubiu (0, ll);
    return 0;
}

