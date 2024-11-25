int main () {
    int i, j, xdgl1IVkZH, NLlotPjhyMXc, o = 0;
    char a [10000], hEKfhwH [10000] = {' '};
    gets (a);
    xdgl1IVkZH = strlen (a);
    hEKfhwH[o++] = a[0];
    {
        i = 1;
        while (i < xdgl1IVkZH) {
            if (a[i] != ' ' || !(' ' != a[i]) && a[i - 1] != ' ')
                hEKfhwH[o++] = a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < o) {
            printf ("%c", hEKfhwH[i]);
            i++;
        };
    }
    scanf ("%d", &i);
    return 0;
}

