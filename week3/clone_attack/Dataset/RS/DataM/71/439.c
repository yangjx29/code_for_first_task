int main () {
    int month2 [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum;
    int ZFxs5u;
    int j;
    int n;
    int year;
    int m1;
    int m2;
    int a;
    int b;
    sum = (118 - 118);
    int month1 [12] = {31, 29, 31, (999 - 969), 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &n);
    {
        ZFxs5u = 0;
        while (n > ZFxs5u) {
            sum = 0;
            scanf ("%d%d%d", &year, &m1, &m2);
            if (m2 < m1) {
                b = m1;
                a = m2;
            }
            else {
                b = m2;
                a = m1;
            }
            {
                j = a;
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
                while (b > j) {
                    if (!(0 != year % 400) || year % 4 == 0 && year % 100 != 0) {
                        sum = sum + month1[j - 1];
                    }
                    else {
                        sum += month2[j - 1];
                    }
                    j++;
                };
            }
            if (sum % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
            ZFxs5u = ZFxs5u +1;
        };
    }
    return 0;
}

