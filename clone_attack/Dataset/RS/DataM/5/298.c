int main () {
    char pZMUDm [501];
    int i, j, a, b, c, d, m, n;
    double  z;
    char oLZOn01 [501];
    d = 0;
    c = 0;
    j = (200 - 200);
    i = (648 - 648);
    scanf ("%lf", &z);
    scanf ("%s", oLZOn01);
    scanf ("%s", pZMUDm);
    for (; pZMUDm[j] != '\0';) {
        j = j + 1;
    }
    for (b = 0; pZMUDm[b] != '\0'; b = b + 1) {
        if (pZMUDm[b] == 'A' || pZMUDm[b] == 'T' || pZMUDm[b] == 'C' || pZMUDm[b] == 'G') {
            d++;
        };
    }
    n = 0;
    for (; oLZOn01[i] != '\0';) {
        i = i + 1;
    }
    {
        a = 0;
        while (!('\0' == oLZOn01[a])) {
            if (oLZOn01[a] == 'A' || oLZOn01[a] == 'T' || oLZOn01[a] == 'C' || oLZOn01[a] == 'G') {
                c = c + 1;
            }
            a++;
        };
    }
    if (i == j && c == i && d == i) {
        {
            m = 0;
            while (m < i) {
                if (oLZOn01[m] == pZMUDm[m]) {
                    n = n + 1;
                }
                m = m + 1;
            };
        }
        if ((1.0 * n / i) > z) {
        }
        else {
            printf ("no");
        };
    }
    else
        ;
    return 0;
}

