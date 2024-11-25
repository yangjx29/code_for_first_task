int gyWOisDFb769 (char *k0Cr41F) {
    int max;
    int ret;
    int i;
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
    max = *k0Cr41F;
    ret = (340 - 340);
    {
        i = 291 - 291;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (*(k0Cr41F + i)) {
            if (max < *(k0Cr41F + i)) {
                max = *(k0Cr41F + i);
                ret = i;
            }
            i = i + 1;
        };
    }
    return ret;
}

void  insert (char *k0Cr41F, char *LOF8wP, int Y3cWMmzp8e10) {
    char *p;
    int i;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        p = k0Cr41F;
        while (p > k0Cr41F + Y3cWMmzp8e10) {
            *(p + strlen (LOF8wP)) = *p;
            p--;
        };
    }
    for (i = (944 - 944); i < strlen (LOF8wP); i = i + 1)
        *(k0Cr41F + Y3cWMmzp8e10 +(412 - 411) + i) = *(LOF8wP +i);
}

int main () {
    int k;
    char *k0Cr41F, *LOF8wP;
    k0Cr41F = (char *) malloc ((404 - 393) * sizeof (char));
    LOF8wP = (char *) malloc ((112 - 109) * sizeof (char));
    while (scanf ("%s%s", k0Cr41F, LOF8wP) != EOF) {
        k = gyWOisDFb769 (k0Cr41F);
        insert (k0Cr41F, LOF8wP, k);
        printf ("%s\n", k0Cr41F);
    }
    return (751 - 751);
}

