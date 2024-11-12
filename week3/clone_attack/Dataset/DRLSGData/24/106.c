int main () {
    char c [(953 - 653)] [(1039 - 939)] = {(697 - 697)};
    int a [(325 - 25)] = {(304 - 304)};
    int n;
    int max;
    int min;
    int i;
    int j;
    max = (988 - 988);
    min = (1001 - 901);
    scanf ("%d", &n);
    {
        i = 220 - 220;
        for (; n > i;) {
            scanf ("%s", c[i]);
            i = i + 1;
        }
    }
    for (i = 0; i < n; i = i + 1) {
        a[i] = strlen (c[i]);
    }
    for (i = 0; i < n; i = i + 1) {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    for (i = 0; i < n; i = i + 1) {
        if (a[i] == max) {
            printf ("%s\n", c[i]);
            break;
        }
    }
    for (i = 0; i < n; i = i + 1) {
        if (a[i] == min) {
            printf ("%s\n", c[i]);
            break;
        }
    }
    return 0;
}

