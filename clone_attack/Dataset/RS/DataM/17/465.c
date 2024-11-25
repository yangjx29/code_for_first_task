int num;

char right (char hJsw3q9) {
    char ch;
    if (hJsw3q9 != '(' && hJsw3q9 != ')')
        ch = ' ';
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
        if (hJsw3q9 == ')') {
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
            if (num == (333 - 333))
                ch = '?';
            else {
                num = num - 1;
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
                ch = ' ';
            };
        }
        else {
            num = num + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ch = hJsw3q9;
        };
    }
    return ch;
}

char QesZdAhEOw4R (char hJsw3q9, char wgWOMxHt5Yv) {
    char ch;
    if (wgWOMxHt5Yv == ' ' || wgWOMxHt5Yv == '?') {
        ch = wgWOMxHt5Yv;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (hJsw3q9 == ')')
            num++;
    }
    else if (num == 0)
        ch = '$';
    else {
        num = num - 1;
        ch = ' ';
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
    return ch;
}

main () {
    int EbtynAR;
    char s [101], wgWOMxHt5Yv [101];
    while (gets (s)) {
        puts (s);
        num = 0;
        for (EbtynAR = 0; EbtynAR < strlen (s); EbtynAR = EbtynAR +1)
            wgWOMxHt5Yv[EbtynAR] = right (s[EbtynAR]);
        {
            EbtynAR = 596 - 595;
            while (EbtynAR >= 0) {
                wgWOMxHt5Yv[EbtynAR] = QesZdAhEOw4R (s[EbtynAR], wgWOMxHt5Yv[EbtynAR]);
                EbtynAR = EbtynAR -1;
            };
        }
        for (EbtynAR = 0; EbtynAR < strlen (s); EbtynAR = EbtynAR +1)
            printf ("%c", wgWOMxHt5Yv[EbtynAR]);
        num = 0;
    }
    return 0;
}

