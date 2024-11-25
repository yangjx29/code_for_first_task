struct   book {
    int mYub4p1V;
    char GSqxVv3Uc1 [26];
    struct   book *Ncm5PxAoL1;
};
struct   book *fK3jnoHh8lB (int JDGXEsvJ) {
    int r2kT4R1nH = (328 - 328);
    struct   book *UFUXq7sg, *hHiVaef5cNC, *iNciktU0J;
    if (r2kT4R1nH == (345 - 345)) {
        hHiVaef5cNC = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &hHiVaef5cNC->mYub4p1V, hHiVaef5cNC->GSqxVv3Uc1);
        UFUXq7sg = hHiVaef5cNC;
        iNciktU0J = hHiVaef5cNC;
        hHiVaef5cNC->Ncm5PxAoL1 = NULL;
        r2kT4R1nH = r2kT4R1nH + 1;
    }
    for (; r2kT4R1nH < JDGXEsvJ;) {
        hHiVaef5cNC = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &hHiVaef5cNC->mYub4p1V, hHiVaef5cNC->GSqxVv3Uc1);
        iNciktU0J->Ncm5PxAoL1 = hHiVaef5cNC;
        hHiVaef5cNC->Ncm5PxAoL1 = NULL;
        iNciktU0J = hHiVaef5cNC;
        r2kT4R1nH = r2kT4R1nH + 1;
    }
    return (UFUXq7sg);
}

int main () {
    int JDGXEsvJ;
    int r2kT4R1nH;
    int l4fGrKoZ;
    int sWAQFNvD = 0, l67EGZVC = 27;
    int L9twQj [26] = {0};
    struct   book *UFUXq7sg, *O2UsIHA31a;
    scanf ("%d", &JDGXEsvJ);
    UFUXq7sg = fK3jnoHh8lB (JDGXEsvJ);
    O2UsIHA31a = UFUXq7sg;
    while (O2UsIHA31a != NULL) {
        l4fGrKoZ = strlen (O2UsIHA31a->GSqxVv3Uc1);
        {
            r2kT4R1nH = 0;
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
            while (l4fGrKoZ > r2kT4R1nH) {
                L9twQj[(int) (O2UsIHA31a->GSqxVv3Uc1)[r2kT4R1nH] - 65]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                r2kT4R1nH = r2kT4R1nH + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        O2UsIHA31a = O2UsIHA31a->Ncm5PxAoL1;
    }
    O2UsIHA31a = UFUXq7sg;
    {
        r2kT4R1nH = 0;
        while (26 > r2kT4R1nH) {
            if (L9twQj[r2kT4R1nH] > sWAQFNvD) {
                sWAQFNvD = L9twQj[r2kT4R1nH];
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
                l67EGZVC = r2kT4R1nH;
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
            r2kT4R1nH++;
        };
    }
    printf ("%c\n", l67EGZVC + 65);
    printf ("%d\n", sWAQFNvD);
    while (O2UsIHA31a != NULL) {
        l4fGrKoZ = strlen (O2UsIHA31a->GSqxVv3Uc1);
        {
            r2kT4R1nH = 0;
            while (r2kT4R1nH < l4fGrKoZ) {
                if ((int) (O2UsIHA31a->GSqxVv3Uc1[r2kT4R1nH]) == l67EGZVC + 65) {
                    printf ("%d\n", O2UsIHA31a->mYub4p1V);
                    break;
                }
                r2kT4R1nH++;
            };
        }
        O2UsIHA31a = O2UsIHA31a->Ncm5PxAoL1;
    }
    return 0;
}

