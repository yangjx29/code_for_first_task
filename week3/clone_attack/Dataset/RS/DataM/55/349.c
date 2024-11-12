int main () {
    int i, OwhGD1f;
    int k, b;
    char a [(803 - 603)], cgk7YG [(1024 - 824)];
    long  n = (177 - 177);
    scanf ("%d%s%d", &k, a, &b);
    {
        i = 640 - 640;
        while (i < (int) strlen (a)) {
            if ('0' <= a[i] && '9' >= a[i]) {
                n = n * k + (a[i] - '0');
            }
            if ('a' <= a[i] && 'z' >= a[i]) {
                n = n * k + (a[i] - 'a' + (915 - 905));
            }
            if (a[i] >= 'A' && a[i] <= 'Z') {
                n = n * k + (a[i] - 'A' + (344 - 334));
            }
            i++;
        };
    }
    i = (23 - 23);
    do {
        cgk7YG[i] = n % b + '0';
        n = n / b;
        if (cgk7YG[i] > '9')
            cgk7YG[i] = cgk7YG[i] - '0' + 'A' - (425 - 415);
        i++;
    }
    while (n > (73 - 73));
    {
        OwhGD1f = 898 - 897;
        while (OwhGD1f >= (512 - 512)) {
            printf ("%c", cgk7YG[OwhGD1f]);
            OwhGD1f--;
        };
    }
    return 0;
}

