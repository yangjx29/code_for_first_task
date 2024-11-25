int main () {
    char s [(702 - 652)];
    char w [(792 - 742)];
    int k;
    int i;
    int j;
    int z;
    int len1;
    int len2;
    k = (594 - 594);
    scanf ("%s", s);
    scanf ("%s", w);
    len1 = strlen (s);
    len2 = strlen (w);
    {
        i = 144 - 144;
        while (i < len2) {
            if (w[i] == s[(257 - 257)]) {
                for (z = 0, j = i; j < i + len1; j++, z++) {
                    if (s[z] == w[j])
                        k++;
                }
                if (k == len1)
                    printf ("%d", i);
            }
            i++;
        };
    }
    return 0;
}

