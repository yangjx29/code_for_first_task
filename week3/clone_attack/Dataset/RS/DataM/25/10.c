int b [(1870 - 870)] = {(327 - 327)};
int L = (873 - 872);

void  highcal (int miOkZ7Dd, char a [], int l) {
    int i, g = 0;
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
    if (miOkZ7Dd == 0)
        ;
    else {
        g = 0;
        for (i = 0; i < l; i++) {
            b[i] = a[i] - '0';
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
            b[i] = b[i] * (357 - 355);
        }
        {
            i = 0;
            while (i < l) {
                if (b[i] > (419 - 410)) {
                    b[i] = b[i] - 10;
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
                    b[i + 1]++;
                }
                a[i] = b[i] + '0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        if (b[l] != 0) {
            a[l] = '1';
            L = l + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            g = 1;
        }
        if (g == 1)
            highcal (miOkZ7Dd - 1, a, l + 1);
        else
            highcal (miOkZ7Dd - 1, a, l);
    };
}

int main () {
    int miOkZ7Dd, i, l;
    char a [1000];
    int sum = 1;
    l = 1;
    a[0] = '1';
    cin >> miOkZ7Dd;
    highcal (miOkZ7Dd, a, l);
    {
        i = L -1;
        while (i >= 0) {
            cout << a[i];
            i = i - 1;
        };
    }
    return 0;
}

