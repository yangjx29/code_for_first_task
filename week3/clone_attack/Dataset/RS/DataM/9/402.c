int main () {
    int TNPtlekKGHm, i, j, hkav5A3j = (438 - 438);
    struct   patient {
        char CD2Uzt8Eydn4 [(105 - 94)];
        int bdEtXIojTF;
    }
    *CQhlFZCynLw, *p60_up, *q5Ey82Pm, xS3tTZR;
    free (p60_up);
    free (q5Ey82Pm);
    scanf ("%d", &TNPtlekKGHm);
    CQhlFZCynLw = (struct   patient *) malloc (sizeof (struct   patient) * TNPtlekKGHm);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TNPtlekKGHm > i) {
            scanf ("%s", &(CQhlFZCynLw[i].CD2Uzt8Eydn4));
            scanf ("%d", &(CQhlFZCynLw[i].bdEtXIojTF));
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
            i++;
        };
    }
    for (i = 0; TNPtlekKGHm >= i; i = i + 1) {
        if ((1051 - 991) <= CQhlFZCynLw[i].bdEtXIojTF) {
            hkav5A3j++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
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
    p60_up = (struct   patient *) malloc (sizeof (struct   patient) * hkav5A3j);
    for (i = 0, j = 0; TNPtlekKGHm > i; i++) {
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
        if (60 <= CQhlFZCynLw[i].bdEtXIojTF) {
            p60_up[j] = CQhlFZCynLw[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j + 1;
        };
    }
    q5Ey82Pm = (struct   patient *) malloc (sizeof (struct   patient) * (TNPtlekKGHm -hkav5A3j));
    for (i = 0, j = 0; TNPtlekKGHm > i; i++) {
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
        if (60 > CQhlFZCynLw[i].bdEtXIojTF) {
            q5Ey82Pm[j] = CQhlFZCynLw[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            j++;
        };
    }
    for (j = 1; hkav5A3j >= j; j = j + 1) {
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
        for (i = 0; i < hkav5A3j - j; i++) {
            if (p60_up[i].bdEtXIojTF < p60_up[i + 1].bdEtXIojTF) {
                xS3tTZR = p60_up[i + 1];
                p60_up[i + 1] = p60_up[i];
                p60_up[i] = xS3tTZR;
            };
        };
    }
    for (i = 0; i < hkav5A3j; i++) {
        puts (p60_up[i].CD2Uzt8Eydn4);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    {
        i = 0;
        while (i < TNPtlekKGHm -hkav5A3j) {
            puts (q5Ey82Pm[i].CD2Uzt8Eydn4);
            i++;
        };
    }
    return 0;
}

