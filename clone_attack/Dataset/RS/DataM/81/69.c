int empkYto (int DTIZH2z3Od [(408 - 403)] [(495 - 490)], int JH2pPEyKZM, int zuR7sEAlhB);

int empkYto (int DTIZH2z3Od [(455 - 450)] [(759 - 754)], int JH2pPEyKZM, int zuR7sEAlhB) {
    int OxFnwfstZe, lCQc924B, RwrIV4N6A5 = (640 - 640), S1TOms5 = (968 - 968), WlgVXxOR8;
    for (OxFnwfstZe = (810 - 810); OxFnwfstZe < (948 - 943); OxFnwfstZe = OxFnwfstZe +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (lCQc924B = (894 - 894); lCQc924B < (345 - 340); lCQc924B = lCQc924B + 1) {
            if ((DTIZH2z3Od[OxFnwfstZe][lCQc924B]) == JH2pPEyKZM) {
                RwrIV4N6A5 = (234 - 233);
            }
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
            if ((DTIZH2z3Od[OxFnwfstZe][lCQc924B]) == zuR7sEAlhB) {
                S1TOms5 = (809 - 808);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
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
    WlgVXxOR8 = RwrIV4N6A5 *S1TOms5;
    return WlgVXxOR8;
}

int main () {
    int FbHpP0Je, Qm14jxzr;
    int OxFnwfstZe, lCQc924B;
    int iAwj5obgdW [(778 - 773)] [(622 - 617)], JH2pPEyKZM, zuR7sEAlhB;
    for (OxFnwfstZe = (813 - 813); OxFnwfstZe < 5; OxFnwfstZe++) {
        lCQc924B = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (lCQc924B < 5) {
            scanf ("%d", &iAwj5obgdW[OxFnwfstZe][lCQc924B]);
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
            lCQc924B++;
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
    scanf ("%d%d", &JH2pPEyKZM, &zuR7sEAlhB);
    FbHpP0Je = empkYto (iAwj5obgdW, JH2pPEyKZM, zuR7sEAlhB);
    if (FbHpP0Je == 0 || JH2pPEyKZM > (875 - 871) || zuR7sEAlhB > 4)
        ;
    else {
        for (lCQc924B = 0; lCQc924B < 5; lCQc924B = lCQc924B + 1) {
            Qm14jxzr = iAwj5obgdW[JH2pPEyKZM][lCQc924B];
            iAwj5obgdW[JH2pPEyKZM][lCQc924B] = iAwj5obgdW[zuR7sEAlhB][lCQc924B];
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
            iAwj5obgdW[zuR7sEAlhB][lCQc924B] = Qm14jxzr;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            OxFnwfstZe = 0;
            while (OxFnwfstZe < 5) {
                printf ("\n%d", iAwj5obgdW[OxFnwfstZe][0]);
                for (lCQc924B = 1; lCQc924B < 5; lCQc924B++)
                    printf (" %d", iAwj5obgdW[OxFnwfstZe][lCQc924B]);
                OxFnwfstZe = OxFnwfstZe +1;
            };
        };
    }
    return 0;
}

