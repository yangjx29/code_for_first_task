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
    int n;
    scanf ("%d", &n);
    if (!((197 - 197) == n / 10000)) {
        a = n / 10000;
        b = (n - a * 10000) / (1087 - 87);
        c = (n - a * 10000 - b * (1799 - 799)) / (143 - 43);
        e = (n - a * 10000 - b * (1299 - 299) - c * 100) / (391 - 381);
        f = n - a * 10000 - b * (1774 - 774) - c * 100 - e * (54 - 44);
        d = f * 10000 + e * 1000 + c * 100 + b * (485 - 475) + a;
        printf ("%d", d);
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
        if (n / 10000 == 0 && !(0 == n / 1000)) {
            a = n / 1000;
            b = (n - a * 1000) / 100;
            c = (n - a * 1000 - b * 100) / 10;
            e = n - a * 1000 - b * 100 - c * 10;
            d = e * 1000 + c * 100 + b * 10 + a;
            printf ("%d", d);
        }
        else {
            if (n / 1000 == 0 && n / 100 != 0) {
                a = n / 100;
                b = (n - a * 100) / 10;
                c = n - a * 100 - b * 10;
                d = c * 100 + b * 10 + a;
                printf ("%d", d);
            }
            else {
                if (n / 100 == 0 && n / 10 != 0) {
                    a = n / 10;
                    b = n - a * 10;
                    d = b * 10 + a;
                    printf ("%d", d);
                };
            };
        };
    }
    return 0;
}

