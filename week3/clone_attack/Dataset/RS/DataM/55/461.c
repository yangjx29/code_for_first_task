int main (int argc, char *lPWErnjo9LTH []) {
    int rhbD6q8nNxC, OOqBWgwEK6ZQ, i, oy6Uoz1, gb12muaLQ [100], Ks6lKor34PAD, z39BnkAWE;
    char a [3], YCZHxl [(566 - 466)], c [3], after [100], strtmp, ADgi42FQGjv [100];
    puts (ADgi42FQGjv);
    int Mxw1JWI = (756 - 756);
    scanf ("%s %s %s", a, YCZHxl, c);
    oy6Uoz1 = strlen (YCZHxl);
    rhbD6q8nNxC = atoi (a);
    OOqBWgwEK6ZQ = atoi (c);
    {
        i = 0;
        while (i < oy6Uoz1) {
            if (YCZHxl[i] >= 'a' && YCZHxl[i] <= 'z')
                YCZHxl[i] = YCZHxl[i] - 32;
            if (YCZHxl[i] >= '0' && YCZHxl[i] <= '9')
                gb12muaLQ[i] = YCZHxl[i] - 48;
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
            if ('A' <= YCZHxl[i] && YCZHxl[i] <= 'Z')
                gb12muaLQ[i] = YCZHxl[i] - 55;
            i = i + 1;
        };
    }
    for (i = 0; i < oy6Uoz1; i = i + 1) {
        Mxw1JWI = Mxw1JWI *rhbD6q8nNxC + gb12muaLQ[i];
    }
    if (Mxw1JWI == 0) {
        ADgi42FQGjv[0] = '0';
        ADgi42FQGjv[1] = '\0';
    }
    else {
        {
            i = 0;
            while (i < 100) {
                if (Mxw1JWI < 1)
                    break;
                else {
                    Ks6lKor34PAD = Mxw1JWI % OOqBWgwEK6ZQ;
                    if (Ks6lKor34PAD >= 10)
                        strtmp = Ks6lKor34PAD +55;
                    else
                        strtmp = Ks6lKor34PAD +48;
                    after[i] = strtmp;
                    Mxw1JWI = Mxw1JWI / OOqBWgwEK6ZQ;
                }
                i = i + 1;
            };
        }
        after[i] = '\0';
        z39BnkAWE = strlen (after);
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
        for (i = 0; i < z39BnkAWE; i = i + 1) {
            ADgi42FQGjv[i] = after[z39BnkAWE - i - 1];
        }
        ADgi42FQGjv[i] = '\0';
    }
    return 0;
}

