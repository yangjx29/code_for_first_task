char b [505];

int cJgRUIriKwf () {
    int i;
    int len;
    int j;
    len = strlen (b);
    {
        j = len - 1;
        i = 0;
        while (i < j) {
            if (b[i] != b[j])
                return 0;
            j = j - 1;
            i = i + 1;
        };
    }
    return 1;
}

void  main () {
    int i;
    int j;
    int k;
    int len;
    char a [510];
    gets (a);
    len = strlen (a);
    {
        i = 2;
        while (i <= len) {
            {
                j = 0;
                while (j <= len - i) {
                    for (k = 0; k < i; k++) {
                        b[k] = a[k + j];
                    }
                    j++;
                    b[k] = 0;
                    if (cJgRUIriKwf ())
                        printf ("%s\n", b);
                };
            }
            i++;
        };
    };
}

