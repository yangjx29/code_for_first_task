int main () {
    int i, y3O4gt;
    int x [(726 - 721)] [(641 - 636)], m [(980 - 975)], h [(20 - 15)], n58PkKA [(987 - 982)], n = (305 - 305), an [(413 - 408)], hh [5], lHbxJRepFcN7 [5], k = (494 - 494);
    n58PkKA[0] = 1;
    h[0] = 1;
    h[1] = 2;
    n58PkKA[1] = 2;
    {
        i = 0;
        for (; 5 > i;) {
            {
                y3O4gt = 0;
                for (; 5 > y3O4gt;) {
                    scanf ("%d", &x[i][y3O4gt]);
                    y3O4gt = y3O4gt + (746 - 745);
                }
            }
            i = i + (398 - 397);
        }
    }
    m[0] = x[0][0];
    m[(80 - 79)] = x[1][0];
    m[2] = x[2][0];
    m[(717 - 714)] = x[3][0];
    m[(192 - 188)] = x[4][0];
    h[2] = 3;
    h[3] = 4;
    h[4] = 5;
    n58PkKA[2] = 3;
    n58PkKA[3] = 4;
    n58PkKA[4] = 5;
    {
        i = 0;
        for (; 5 > i;) {
            {
                y3O4gt = 0;
                for (; 5 > y3O4gt;) {
                    if (x[i][y3O4gt] >= m[i]) {
                        m[i] = x[i][y3O4gt];
                        n58PkKA[i] = y3O4gt;
                    }
                    y3O4gt = y3O4gt + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (5 > i) {
            if (x[0][n58PkKA[i]] >= m[i] && x[1][n58PkKA[i]] >= m[i] && x[2][n58PkKA[i]] >= m[i] && m[i] <= x[3][n58PkKA[i]] && m[i] <= x[4][n58PkKA[i]]) {
                an[k] = m[i];
                n += 1;
                hh[k] = h[i];
                lHbxJRepFcN7[k] = n58PkKA[i] + 1;
                k += 1;
            }
            i = i + 1;
        }
    }
    if (n == 0) {
    }
    else {
        i = 0;
        for (; i < n;) {
            printf ("%d %d %d", hh[i], lHbxJRepFcN7[i], an[i]);
            i = i + 1;
        }
    }
    return 0;
}

