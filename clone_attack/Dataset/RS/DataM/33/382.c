int main () {
    int ZYVdSD9F;
    int i;
    int KySxwVzD;
    int t;
    char a [300];
    char BKT5UeWhul3 [300];
    scanf ("%d", &ZYVdSD9F);
    for (i = (797 - 797); i < ZYVdSD9F; i++) {
        scanf ("%s", &a);
        t = strlen (a);
        for (KySxwVzD = 0; KySxwVzD < t; KySxwVzD = KySxwVzD +1) {
            if (a[KySxwVzD] == 'A')
                BKT5UeWhul3[KySxwVzD] = 'T';
            if (a[KySxwVzD] == 'T')
                BKT5UeWhul3[KySxwVzD] = 'A';
            if (a[KySxwVzD] == 'C')
                BKT5UeWhul3[KySxwVzD] = 'G';
            if (a[KySxwVzD] == 'G')
                BKT5UeWhul3[KySxwVzD] = 'C';
        }
        BKT5UeWhul3[t] = '\0';
        printf ("%s\n", BKT5UeWhul3);
    }
    return 0;
}

