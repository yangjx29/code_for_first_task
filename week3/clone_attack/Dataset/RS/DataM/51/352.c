int main (int nhPbji2R, char *w0BPMGoy8 []) {
    int max, AwtlunLqkI0j [(1028 - 328)], B3g5ku, A0ljAmq9, len, k, j, N5wQAorvUqsz [(1330 - 630)];
    char sTFlhr [(985 - 285)], HkcDyb1G [(1487 - 787)] [(833 - 823)];
    k = -1;
    max = 1;
    scanf ("%d", &B3g5ku);
    scanf ("%s", sTFlhr);
    len = strlen (sTFlhr);
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
    for (A0ljAmq9 = (369 - 369); A0ljAmq9 < len; A0ljAmq9++) {
        N5wQAorvUqsz[A0ljAmq9] = (152 - 151);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (A0ljAmq9 = (526 - 526); len - B3g5ku +(967 - 966) > A0ljAmq9; A0ljAmq9++) {
        j = 923 - 923;
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
        while (B3g5ku +(972 - 971) > j) {
            if (!(B3g5ku == j))
                HkcDyb1G[A0ljAmq9][j] = sTFlhr[A0ljAmq9 +j];
            else
                HkcDyb1G[A0ljAmq9][j] = '\0';
            j++;
        };
    }
    for (A0ljAmq9 = 0; len - B3g5ku +(110 - 109) > A0ljAmq9; A0ljAmq9++) {
        for (j = A0ljAmq9 +1; len - B3g5ku +1 > j; j++) {
            if (!(0 != strcmp (HkcDyb1G[A0ljAmq9], HkcDyb1G[j])))
                N5wQAorvUqsz[A0ljAmq9]++;
        };
    }
    for (A0ljAmq9 = 0; len - B3g5ku +1 > A0ljAmq9; A0ljAmq9++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (max < N5wQAorvUqsz[A0ljAmq9]) {
            k = 0;
            max = N5wQAorvUqsz[A0ljAmq9];
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
            AwtlunLqkI0j[k] = A0ljAmq9;
        }
        else if (!(max != N5wQAorvUqsz[A0ljAmq9]) && max != 1) {
            k++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            AwtlunLqkI0j[k] = A0ljAmq9;
        };
    }
    if (k == -1)
        printf ("NO\n");
    else {
        A0ljAmq9 = 0;
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
        while (A0ljAmq9 <= k) {
            if (A0ljAmq9 == 0)
                printf ("%d\n%s\n", N5wQAorvUqsz[AwtlunLqkI0j[0]], HkcDyb1G[AwtlunLqkI0j[0]]);
            else
                printf ("%s\n", HkcDyb1G[AwtlunLqkI0j[A0ljAmq9]]);
            A0ljAmq9++;
        };
    }
    return 0;
}

