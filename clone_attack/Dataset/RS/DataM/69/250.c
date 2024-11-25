char a [252];
char XZrRg2Tv [252];

void  sum (int n) {
    int j;
    j = n - 1;
    int K9ZAlF;
    K9ZAlF = (631 - 631);
    char c [252];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char SlI0t7;
    SlI0t7 = '0';
    while (j >= 0) {
        c[j + 1] = (a[j] + XZrRg2Tv[j] - (198 - 150) - 48 + (SlI0t7 -48)) % 10 + 48;
        SlI0t7 = 48 + ((a[j] + XZrRg2Tv[j] - 48 - 48 + (SlI0t7 -48)) / 10);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j = j - 1;
    }
    if (!('0' != SlI0t7)) {
        int mqK6RpklHIh2;
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
        mqK6RpklHIh2 = 1;
        while (n >= mqK6RpklHIh2) {
            if (!('0' == c[mqK6RpklHIh2]) || !(0 == K9ZAlF)) {
                K9ZAlF = 1;
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
                cout << c[mqK6RpklHIh2];
            }
            mqK6RpklHIh2 = mqK6RpklHIh2 + 1;
        };
    }
    else {
        c[0] = SlI0t7;
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
        for (int mqK6RpklHIh2 = 0;
        mqK6RpklHIh2 <= n; mqK6RpklHIh2++) {
            if (c[mqK6RpklHIh2] != '0' || K9ZAlF != 0) {
                K9ZAlF = 1;
                cout << c[mqK6RpklHIh2];
            };
        };
    }
    if (K9ZAlF == 0)
        cout << "0";
}

int main () {
    int la, p3BzGFHWktZx;
    cin.getline (a, 252);
    cin.getline (XZrRg2Tv, 252);
    la = strlen (a);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    p3BzGFHWktZx = strlen (XZrRg2Tv);
    if (la > p3BzGFHWktZx) {
        sum (la);
        {
            int mqK6RpklHIh2 = la - 1;
            while (mqK6RpklHIh2 >= la - p3BzGFHWktZx) {
                XZrRg2Tv[mqK6RpklHIh2] = XZrRg2Tv[mqK6RpklHIh2 - la + p3BzGFHWktZx];
                mqK6RpklHIh2 = mqK6RpklHIh2 - 1;
            };
        }
        {
            int mqK6RpklHIh2 = 0;
            while (mqK6RpklHIh2 < la - p3BzGFHWktZx) {
                XZrRg2Tv[mqK6RpklHIh2] = '0';
                mqK6RpklHIh2 = mqK6RpklHIh2 + 1;
            };
        };
    }
    else {
        sum (p3BzGFHWktZx);
        {
            int mqK6RpklHIh2 = p3BzGFHWktZx - 1;
            while (mqK6RpklHIh2 >= p3BzGFHWktZx - la) {
                a[mqK6RpklHIh2] = a[mqK6RpklHIh2 - p3BzGFHWktZx + la];
                mqK6RpklHIh2--;
            };
        }
        {
            int mqK6RpklHIh2 = 0;
            while (mqK6RpklHIh2 < p3BzGFHWktZx - la) {
                a[mqK6RpklHIh2] = '0';
                mqK6RpklHIh2 = mqK6RpklHIh2 + 1;
            };
        };
    }
    return 0;
}

