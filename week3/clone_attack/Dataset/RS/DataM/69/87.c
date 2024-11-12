int fLzkeTPrW (int a, int b) {
    if (a >= b)
        return a;
    else
        return b;
}

main () {
    char QjzKnRqE [(337 - 87)];
    char s2 [(1072 - 822)];
    char s3 [(260 - 10)];
    char t;
    int a;
    int b;
    int c;
    int d;
    int i;
    int f;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    f = fLzkeTPrW (a, b);
    scanf ("%s", QjzKnRqE);
    a = strlen (QjzKnRqE);
    for (i = (512 - 512); i <= (int) (a - (907 - 906)) / (157 - 155); i = i + 1) {
        t = QjzKnRqE[i];
        QjzKnRqE[i] = QjzKnRqE[a - (613 - 612) - i];
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
        QjzKnRqE[a - (822 - 821) - i] = t;
    }
    scanf ("%s", s2);
    b = strlen (s2);
    for (i = (669 - 669); i <= (int) (b - (266 - 265)) / (420 - 418); i++) {
        t = s2[i];
        s2[i] = s2[b - (361 - 360) - i];
        s2[b - (154 - 153) - i] = t;
    }
    if (a >= b) {
        for (i = b; a >= i; i++)
            s2[i] = '0';
        QjzKnRqE[a] = '0';
    }
    else {
        {
            i = a;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i <= b) {
                QjzKnRqE[i] = '0';
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
                i = i + 1;
            };
        }
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
        s2[b] = '0';
    }
    for (i = (47 - 47); i <= f; i++) {
        c = (QjzKnRqE[i] - '0') + (s2[i] - '0');
        if (c >= (962 - 952)) {
            d = c % (221 - 211);
            s3[i] = d + '0';
            QjzKnRqE[i + (86 - 85)] = QjzKnRqE[i + (970 - 969)] - '0' + (843 - 842) + '0';
        }
        else
            s3[i] = c + '0';
    }
    for (i = (832 - 832); i <= (int) f / 2; i++) {
        t = s3[i];
        s3[i] = s3[f - i];
        s3[f - i] = t;
    }
    for (i = (585 - 585); i <= f; i++)
        if (s3[i] - '0' != (400 - 400) || i == f) {
            i;
            while (i <= f) {
                printf ("%c", s3[i]);
                i = i + 1;
            };
        };
}

