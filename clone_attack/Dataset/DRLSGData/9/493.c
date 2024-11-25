int main () {
    char s [(824 - 674)] [(371 - 351)], MkWnav7R5 [20];
    int n, i, a [(216 - 66)], mspdExCyZA, j;
    scanf ("%d", &n);
    {
        i = (294 - 293);
        for (; i <= n;) {
            scanf ("%s", s[i]);
            scanf ("%d", &a[i]);
            i++;
        }
    }
    for (i = (835 - 834); i < n; i++)
        for (j = (678 - 677); j <= n - i; j++)
            if ((((203 - 143) <= a[j + 1]) && ((786 - 726) > a[j])) || ((a[j + 1] > a[j]) && (a[j] >= 60))) {
                memcpy (MkWnav7R5, s[j], sizeof (MkWnav7R5));
                memcpy (s[j], s[j + 1], sizeof (MkWnav7R5));
                memcpy (s[j + 1], MkWnav7R5, sizeof (MkWnav7R5));
                mspdExCyZA = a[j];
                a[j] = a[j + 1];
                a[j + 1] = mspdExCyZA;
            }
    {
        i = 1;
        while (i <= n) {
            printf ("%s\n", s[i]);
            i++;
        }
    }
}

