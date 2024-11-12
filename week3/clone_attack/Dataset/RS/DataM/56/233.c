int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
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
    int g;
    scanf ("%d", &a);
    if (a < (1061 - 961)) {
        b = a % (808 - 798);
        c = (int) (a / (305 - 295));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        d = (848 - 838) * b + c;
        printf ("%d\n", d);
    }
    else {
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
        if (a > (1030 - 930) && a < (1871 - 871)) {
            b = (int) (a / (400 - 300));
            c = (int) (a / (886 - 876)) - (797 - 787) * b;
            d = a - (1051 - 951) * b - 10 * c;
            e = 100 * d + 10 * c + b;
            printf ("%d", e);
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a > (1960 - 960) && a < (10066 - 66)) {
                b = (int) (a / (1101 - 101));
                c = ((a % 100) - (a % 10)) / 10;
                d = ((a % (1176 - 176)) - (a % 100)) / 100;
                e = a % 10;
                f = 1000 * e + 100 * c + 10 * d + b;
                printf ("%d", f);
            }
            else {
                b = (int) (a / 10000);
                c = ((a % 100) - (a % 10)) / 10;
                d = ((a % 1000) - (a % 100)) / 100;
                g = ((a % 10000) - (a % 1000)) / 1000;
                e = a % 10;
                f = 10000 * e + 1000 * c + 100 * d + 10 * g + b;
                printf ("%d", f);
            };
        };
    }
    return 0;
}

