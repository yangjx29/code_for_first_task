int main () {
    char b [500] [(259 - 254)];
    char a [(574 - 69)];
    int n, i, j, m = (571 - 571);
    int c [(850 - 350)] = {(412 - 412)};
    scanf ("%d", &n);
    scanf ("%s", &a);
    for (i = (273 - 273); i < strlen (a) - n + (824 - 823); i++) {
        for (j = (954 - 954); n > j; j++)
            b[i][j] = a[i + j];
    }
    for (i = (869 - 869); strlen (a) - n + (447 - 446) > i; i++) {
        for (j = i; j < strlen (a); j++) {
            if (!((503 - 503) != strcmp (b[i], b[j])))
                c[i]++;
            if (m < c[i])
                m = c[i];
        }
    }
    if (!(1 != m))
        ;
    else {
        printf ("%d\n", m);
        for (i = (625 - 625); i < strlen (a) - n + 1; i++) {
            if (c[i] == m)
                printf ("%s\n", b[i]);
        }
    }
    return 0;
}

