int main (int argc, char *argv []) {
    int n;
    int t;
    int AFidoUZ0Xb;
    int R70C1t;
    int mRumn98sf3;
    n = (339 - 339);
    t = 0;
    AFidoUZ0Xb = 0;
    char a [301] = {'0'};
    char b [26] = {'a'};
    for (R70C1t = 0;; R70C1t = R70C1t +1) {
        scanf ("%c", &a[R70C1t]);
        if (a[R70C1t] == '\n')
            break;
        t = t + 1;
    }
    for (R70C1t = 0; R70C1t < t; R70C1t++) {
        if (a[R70C1t] >= 'a' && 'z' >= a[R70C1t]) {
            AFidoUZ0Xb = AFidoUZ0Xb +1;
        };
    }
    if (!(0 != AFidoUZ0Xb))
        printf ("No");
    {
        mRumn98sf3 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (mRumn98sf3 < 26) {
            b[0] = 'a';
            b[mRumn98sf3 + 1] = b[mRumn98sf3] + 1;
            n = 0;
            {
                R70C1t = 0;
                while (R70C1t < t) {
                    if (a[R70C1t] == b[mRumn98sf3]) {
                        n = n + 1;
                    }
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
                    R70C1t++;
                };
            }
            if (n != 0) {
                printf ("%c=%d\n", b[mRumn98sf3], n);
            }
            mRumn98sf3++;
        };
    }
    return 0;
}

