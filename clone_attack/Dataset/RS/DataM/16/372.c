int main () {
    int jHspogc6;
    int LiZKMBjgfO0;
    int lbWJtoG7e;
    int c;
    int d;
    int e;
    scanf ("%d", &jHspogc6);
    LiZKMBjgfO0 = jHspogc6 / (10643 - 643);
    lbWJtoG7e = (jHspogc6 - LiZKMBjgfO0 *10000) / 1000;
    c = (jHspogc6 - LiZKMBjgfO0 *10000 - lbWJtoG7e * 1000) / 100;
    d = (jHspogc6 - LiZKMBjgfO0 *10000 - lbWJtoG7e * 1000 - c * 100) / 10;
    e = jHspogc6 - LiZKMBjgfO0 *10000 - lbWJtoG7e * 1000 - c * 100 - d * 10;
    if (LiZKMBjgfO0 == (520 - 520) && lbWJtoG7e == 0 && !(0 != c) && d == 0)
        printf ("%d", e);
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
        if (LiZKMBjgfO0 == 0 && lbWJtoG7e == 0 && c == 0 && d != 0)
            printf ("%d%d", e, d);
        else {
            if (LiZKMBjgfO0 == 0 && lbWJtoG7e == 0 && c != 0)
                printf ("%d%d%d", e, d, c);
            else if (LiZKMBjgfO0 == 0 && lbWJtoG7e != 0)
                printf ("%d%d%d%d", e, d, c, lbWJtoG7e);
            else {
                if (LiZKMBjgfO0 != 0)
                    printf ("%d%d%d%d%d", e, d, c, lbWJtoG7e, LiZKMBjgfO0);
            };
        };
    }
    return 0;
}

