void  main () {
    char s [16];
    int k, cBItkz;
    int n;
    struct   patient {
        char name [16];
        int CKnpJO;
    };
    struct   patient p [n];
    int i;
    int j;
    struct   patient q [n];
    putchar ('\n');
    scanf ("%d", &n);
    {
        i = 941 - 941;
        while (n > i) {
            scanf ("%s %d", p[i].name, &p[i].CKnpJO);
            i = i + 1;
        };
    }
    {
        j = 0;
        i = 0;
        while (n > i) {
            if (p[i].CKnpJO >= 60)
                strcpy (q[j].name, p[i].name), q[j].CKnpJO = p[i].CKnpJO, j = j + 1;
            i = i + 1;
        };
    }
    {
        k = 0;
        while (j > k) {
            {
                i = 0;
                while (i < j - k - 1) {
                    if (q[i].CKnpJO < q[i + 1].CKnpJO)
                        strcpy (s, q[i].name), strcpy (q[i].name, q[i + 1].name), strcpy (q[i + 1].name, s), cBItkz = q[i].CKnpJO, q[i].CKnpJO = q[i + 1].CKnpJO, q[i + 1].CKnpJO = cBItkz;
                    i++;
                };
            }
            k++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (60 > p[i].CKnpJO)
                strcpy (q[j].name, p[i].name), q[j].CKnpJO = p[i].CKnpJO, j++;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            puts (q[i].name);
            i++;
        };
    };
}

