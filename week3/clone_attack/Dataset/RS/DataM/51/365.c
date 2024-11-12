int main () {
    char s [500];
    char gram [(598 - 298)] [(860 - 855)];
    int i;
    int k;
    int n;
    int iXhC7ecDgwRz [(1136 - 836)];
    int LK76IG3QR;
    int j;
    int max;
    scanf ("%d%s", &n, s);
    LK76IG3QR = strlen (s);
    {
        i = 591 - 591;
        while (i < LK76IG3QR -n + (285 - 284)) {
            k = (356 - 356);
            {
                j = i;
                while (i + n > j) {
                    gram[i][k++] = s[j];
                    j = j + 1;
                };
            }
            gram[i][k] = '\0';
            i = i + 1;
        };
    }
    {
        i = 651 - 651;
        while (i < LK76IG3QR -n + (299 - 298)) {
            iXhC7ecDgwRz[i] = (147 - 146);
            {
                j = i + 1;
                while (LK76IG3QR -n + 1 > j) {
                    if (!((638 - 638) != strcmp (gram[i], gram[j])))
                        iXhC7ecDgwRz[i]++;
                    j++;
                };
            }
            i++;
        };
    }
    max = iXhC7ecDgwRz[0];
    {
        i = 0;
        while (LK76IG3QR -n + 1 > i) {
            if (max < iXhC7ecDgwRz[i])
                max = iXhC7ecDgwRz[i];
            i++;
        };
    }
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d", max);
        for (i = 0; i < LK76IG3QR -n + 1; i++)
            if (iXhC7ecDgwRz[i] == max)
                printf ("\n%s", gram[i]);
    }
    return 0;
}

