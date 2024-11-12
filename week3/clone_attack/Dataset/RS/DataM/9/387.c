typedef struct   {
    char id [20];
    int age;
}
patient;

int main () {
    int mxWhSf;
    int wBKrZHNwc;
    int qEOxbguvA;
    int i;
    int jA7ZsC;
    mxWhSf = (278 - 278);
    wBKrZHNwc = 0;
    patient a [100], iQ6DiTRwP [100], c [100], MZFAab6Y4B;
    scanf ("%d", &qEOxbguvA);
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
        while (qEOxbguvA > i) {
            scanf ("%s %d", a[i].id, &a[i].age);
            if (60 <= a[i].age) {
                {
                    jA7ZsC = 0;
                    while (jA7ZsC < 20) {
                        iQ6DiTRwP[mxWhSf].id[jA7ZsC] = a[i].id[jA7ZsC];
                        jA7ZsC = jA7ZsC + 1;
                        iQ6DiTRwP[mxWhSf].age = a[i].age;
                    };
                }
                mxWhSf = mxWhSf + 1;
            }
            else {
                {
                    jA7ZsC = 0;
                    while (jA7ZsC < 20) {
                        c[wBKrZHNwc].id[jA7ZsC] = a[i].id[jA7ZsC];
                        jA7ZsC = jA7ZsC + 1;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                wBKrZHNwc = wBKrZHNwc + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 289 - 288;
        while (i > 0) {
            {
                jA7ZsC = 0;
                while (jA7ZsC < i) {
                    if (iQ6DiTRwP[jA7ZsC].age < iQ6DiTRwP[jA7ZsC + 1].age) {
                        MZFAab6Y4B = iQ6DiTRwP[jA7ZsC];
                        iQ6DiTRwP[jA7ZsC] = iQ6DiTRwP[jA7ZsC + 1];
                        iQ6DiTRwP[jA7ZsC + 1] = MZFAab6Y4B;
                    }
                    jA7ZsC = jA7ZsC + 1;
                };
            }
            i = i - 1;
        };
    }
    {
        i = 0;
        while (i < mxWhSf) {
            printf ("%s\n", iQ6DiTRwP[i].id);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < wBKrZHNwc) {
            printf ("%s\n", c[i].id);
            i = i + 1;
        };
    };
}

