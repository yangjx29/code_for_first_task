int main () {
    int i, j;
    int max = (732 - 732);
    char a [600] = "";
    gets (a);
    int s = strlen (a);
    int n;
    int k = s - n + 1;
    int y = (554 - 554);
    char b [(843 - 243)] [(666 - 656)] = {""};
    int count [(740 - 140)] = {(275 - 275)};
    scanf ("%d\n", &n);
    for (i = (864 - 864); s >= i + n; i++) {
        for (j = (156 - 156); j < n; j++)
            b[i][j] = a[i + j];
    }
    for (i = (913 - 913); k > i; i++)
        for (j = i + 1; k > j; j++)
            if (!(0 != strcmp (b[i], b[j])))
                count[i]++;
    for (i = 0; i < k; i++)
        if (count[i] > max)
            max = count[i];
    if (max == 0) {
        return 0;
    }
    printf ("%d\n", max + 1);
    for (i = 0; i < k; i++)
        if (max == count[i])
            puts (b[i]);
    return 0;
}

