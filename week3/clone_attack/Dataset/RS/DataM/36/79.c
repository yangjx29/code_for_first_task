int main () {
    char pL4eAVXk [101];
    char str [101];
    int i;
    int j;
    int k;
    int m;
    int lygLOYp;
    scanf ("%s", pL4eAVXk);
    m = strlen (pL4eAVXk);
    scanf ("%s", str);
    lygLOYp = strlen (str);
    k = 0;
    if (m != lygLOYp)
        ;
    else {
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                if (pL4eAVXk[i] == str[j]) {
                    k = k + (828 - 827);
                    str[j] = ' ';
                    break;
                };
            };
        }
        if (k == m)
            ;
        else
            printf ("NO");
    }
    return 0;
}

