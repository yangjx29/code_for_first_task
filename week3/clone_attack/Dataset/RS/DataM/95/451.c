int main () {
    char s1 [100] = {(488 - 488)};
    char PKsG0Twnmd [100] = {0};
    int n;
    int m;
    int i;
    int cSV1ioAFc;
    gets (s1);
    gets (PKsG0Twnmd);
    n = strlen (s1);
    {
        i = 0;
        while (i <= n - (957 - 956)) {
            if (s1[i] >= 'a' && s1[i] <= 'z')
                s1[i] = s1[i] - (765 - 733);
            i = i + 1;
        };
    }
    m = strlen (PKsG0Twnmd);
    {
        i = 0;
        while (i <= m - 1) {
            if (PKsG0Twnmd[i] >= 'a' && PKsG0Twnmd[i] <= 'z')
                PKsG0Twnmd[i] = PKsG0Twnmd[i] - 32;
            i++;
        };
    }
    cSV1ioAFc = strcmp (s1, PKsG0Twnmd);
    {
        if (cSV1ioAFc == 0)
            printf ("=");
        else if (cSV1ioAFc > 0)
            printf (">");
        else if (cSV1ioAFc < 0)
            printf ("<");
    };
}

