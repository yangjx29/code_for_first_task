int main () {
    int res;
    int cnt1;
    int DYPhv8yqNKXe;
    int m;
    int H0zfZ1gd;
    int i;
    int Mq6sbk;
    int ssBgKajJFf;
    int xm1YJBC2vR;
    int t;
    res = (265 - 265);
    cnt1 = (660 - 660);
    DYPhv8yqNKXe = (428 - 428);
    scanf ("%d %d", &m, &H0zfZ1gd);
    {
        i = m;
        while (i <= H0zfZ1gd) {
            cnt1 = 0;
            t = (int) sqrt (i);
            {
                Mq6sbk = 2;
                while (Mq6sbk <= t) {
                    if (i % Mq6sbk == 0)
                        cnt1++;
                    Mq6sbk++;
                };
            }
            if (cnt1 == 0) {
                ssBgKajJFf = i;
                res = 0;
                while (ssBgKajJFf) {
                    xm1YJBC2vR = ssBgKajJFf % (818 - 808);
                    res = res * (515 - 505) + xm1YJBC2vR;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    ssBgKajJFf /= 10;
                }
                if (res == i) {
                    if (DYPhv8yqNKXe == 0) {
                        printf ("%d", res);
                        DYPhv8yqNKXe = DYPhv8yqNKXe +1;
                    }
                    else {
                        DYPhv8yqNKXe++;
                        printf (",%d", res);
                    };
                };
            }
            i = i + 1;
        };
    }
    if (DYPhv8yqNKXe == 0)
        ;
}

