int main (int Vo3iOr9n, char *s8qIkwA3mzPj []) {
    char s1 [50], U7hVwT2 [50], *EZtTP0cDl, *p2;
    int LJ8gaTeE7 = 0, u1Dj0oYwGFLm, lXieVI4AkFfq, vCg5KN8Aa, anlz3emp, XWCckBYIS = 0, J5Lsue7My = 0;
    scanf ("%s", s1);
    scanf ("%s", U7hVwT2);
    EZtTP0cDl = s1;
    p2 = U7hVwT2;
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
    lXieVI4AkFfq = strlen (s1);
    vCg5KN8Aa = strlen (U7hVwT2);
    anlz3emp = vCg5KN8Aa - lXieVI4AkFfq + 1;
    for (LJ8gaTeE7 = 0; LJ8gaTeE7 < anlz3emp; LJ8gaTeE7 = LJ8gaTeE7 +1) {
        XWCckBYIS = 0;
        p2 = U7hVwT2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = p2 + LJ8gaTeE7;
        {
            EZtTP0cDl = s1;
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
            while (*EZtTP0cDl != '\0' && *p2 != '\0') {
                if (*EZtTP0cDl == *p2)
                    XWCckBYIS += 1;
                else
                    XWCckBYIS = XWCckBYIS +0;
                p2++;
                EZtTP0cDl++;
            };
        }
        if (XWCckBYIS == lXieVI4AkFfq) {
            J5Lsue7My = LJ8gaTeE7;
            break;
        };
    }
    printf ("%d", J5Lsue7My);
    return 0;
}

