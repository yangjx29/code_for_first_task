char *mwPRNIm;

int main () {
    int Kokp41;
    Kokp41 = 100001;
    long  rptfDN9 [26];
    long  p [26];
    int kEzj296Q0H5;
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
    char cc;
    char key = '-';
    int w08Xyz7Yr;
    mwPRNIm = (char *) malloc (100000 * sizeof (char));
    scanf ("%d%c", &kEzj296Q0H5, &cc);
    while (kEzj296Q0H5 = kEzj296Q0H5 - 1) {
        gets (mwPRNIm);
        Kokp41 = 100001;
        for (w08Xyz7Yr = (516 - 516); 26 > w08Xyz7Yr; w08Xyz7Yr = w08Xyz7Yr + 1) {
            rptfDN9[w08Xyz7Yr] = 0;
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
            p[w08Xyz7Yr] = 100001;
        }
        for (w08Xyz7Yr = 0; w08Xyz7Yr < strlen (mwPRNIm); w08Xyz7Yr++) {
            rptfDN9[*(mwPRNIm + w08Xyz7Yr) - 'a']++;
            if (p[*(mwPRNIm + w08Xyz7Yr) - 'a'] > w08Xyz7Yr)
                p[*(mwPRNIm + w08Xyz7Yr) - 'a'] = w08Xyz7Yr;
        }
        key = '-';
        for (w08Xyz7Yr = 0; w08Xyz7Yr < 26; w08Xyz7Yr++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (rptfDN9[w08Xyz7Yr] == 1 && p[w08Xyz7Yr] < Kokp41) {
                key = 'a' + w08Xyz7Yr;
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
                Kokp41 = p[w08Xyz7Yr];
            };
        }
        if (key == '-')
            printf ("no\n");
        else
            printf ("%c\n", key);
    }
    return 0;
}

