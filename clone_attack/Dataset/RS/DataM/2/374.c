struct   book {
    char id [11];
    char name [30];
};
struct   au {
    int HIFtUwy7lP;
    char id [1000] [11];
};
void  main () {
    struct   book b;
    struct   au sf7Q9Cjn [26];
    int c4uxtHmLJC, i, PMEF4W0 = 0, k;
    char o2oJ1r;
    {
        i = 0;
        while (26 > i) {
            sf7Q9Cjn[i].HIFtUwy7lP = 0;
            i = i + 1;
        };
    }
    scanf ("%d", &c4uxtHmLJC);
    {
        i = 0;
        while (c4uxtHmLJC > i) {
            scanf ("%s%s", b.id, b.name);
            while (!('\0' == b.name[PMEF4W0])) {
                k = b.name[PMEF4W0] - 'A';
                PMEF4W0++;
                strcpy (sf7Q9Cjn[k].id[sf7Q9Cjn[k].HIFtUwy7lP], b.id);
                sf7Q9Cjn[k].HIFtUwy7lP++;
            }
            PMEF4W0 = 0;
            i++;
        };
    }
    PMEF4W0 = 0;
    k = 0;
    for (i = 0; 26 > i; i = i + 1) {
        PMEF4W0 = (k < sf7Q9Cjn[i].HIFtUwy7lP) ? i : PMEF4W0;
        k = (sf7Q9Cjn[i].HIFtUwy7lP > k) ? sf7Q9Cjn[i].HIFtUwy7lP : k;
    }
    printf ("%c\n", 'A' + PMEF4W0);
    printf ("%d\n", k);
    for (i = 0; i < k; i++)
        printf ("%s\n", sf7Q9Cjn[PMEF4W0].id[i]);
}

