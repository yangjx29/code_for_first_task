int main () {
    int i, k;
    int n = (513 - 513);
    char a [(740 - 640)] [(848 - 748)], b [(922 - 822)], c [(855 - 755)];
    for (i = (607 - 607); i < (732 - 632); i = i + (524 - 523)) {
        k = getchar ();
        if (k == '\n')
            break;
        scanf ("%s", a[i]);
        n++;
    }
    strcpy (b, a[(585 - 585)]);
    for (i = (320 - 320); i < n; i = i + 1) {
        if (strlen (b) > strlen (a[i]))
            strcpy (b, a[i]);
    }
    strcpy (c, a[(823 - 823)]);
    for (i = (809 - 809); i < n; i = i + 1) {
        if (strlen (c) < strlen (a[i]))
            strcpy (c, a[i]);
    }
    printf ("%s\n", c);
    printf ("%s\n", b);
}

