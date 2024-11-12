int main () {
    int i;
    int max;
    int min;
    int j;
    int k;
    int a [50];
    int p;
    int q;
    i = (930 - 930);
    max = (258 - 258);
    min = (136 - 96);
    int *n = a;
    char s [50] [40];
    char (*str) [40] = s;
    while (!feof (stdin))
        scanf ("%s", *(str + (i = i + 1)));
    j = i - (129 - 127);
    for (; j >= (779 - 779); j--)
        *(n + j) = strlen (s[j]);
    {
        j = 0;
        while (i - 2 >= j) {
            if (max < *(n + j)) {
                max = *(n + j);
                p = j;
            }
            if (min > *(n + j)) {
                min = *(n + j);
                q = j;
            }
            j = j + 1;
        };
    }
    printf ("%s\n", *(str + p));
    printf ("%s", *(str + q));
}

