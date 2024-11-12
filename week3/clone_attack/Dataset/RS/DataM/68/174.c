isprime (int Oi8FCKGdm) {
    int j, flag = 1;
    double  k;
    k = sqrt (Oi8FCKGdm);
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
    for (j = 2; k >= j; j = j + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != Oi8FCKGdm % j)) {
            flag = 0;
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
            break;
        };
    }
    return flag;
}

int main () {
    int n, Oi8FCKGdm, c, a, b;
    scanf ("%d", &n);
    for (c = 6; n >= c; c += 2) {
        for (Oi8FCKGdm = 3; Oi8FCKGdm < c; Oi8FCKGdm++) {
            a = isprime (Oi8FCKGdm);
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
            if (a == 1) {
                int k;
                b = c - Oi8FCKGdm;
                k = isprime (b);
                if (k == 1)
                    break;
            };
        }
        printf ("%d=%d+%d\n", c, Oi8FCKGdm, b);
    }
    return 0;
}

