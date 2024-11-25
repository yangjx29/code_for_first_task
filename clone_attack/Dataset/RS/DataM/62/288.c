int main () {
    char a [201], b [201];
    gets (a);
    int m, n = (736 - 736), len;
    len = strlen (a);
    {
        m = 0;
        while (m < len) {
            if (a[m] == ' ' && a[m + 1] == ' ') {
            }
            else {
                b[n] = a[m];
                n = n + 1;
            }
            m = m + 1;
        };
    }
    b[n] = '\0';
    printf ("%s", b);
    return 0;
}

