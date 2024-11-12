struct   book {
    int number;
    char name [(659 - 633)];
    int num [(481 - 455)];
};
void  mostbook (struct   book *p) {
    int i;
    int j;
    int k;
    k = strlen (p->name);
    for (j = (560 - 560); 26 > j; j = j + 1) {
        p->num[j] = (937 - 937);
    }
    for (i = (477 - 477); k > i; i++)
        (p->num[(p->name[i] - 'A')])++;
}

void  main () {
    struct   book *p;
    int maxi;
    maxi = 0;
    int i;
    int j;
    int m;
    int max;
    max = 0;
    int s [26] = {0};
    scanf ("%d", &m);
    p = (struct   book *) malloc (m * sizeof (struct   book));
    for (i = 0; m > i; i++) {
        scanf ("%d", &(p + i)->number);
        scanf ("%s", &(p + i)->name);
        mostbook (p + i);
        for (j = 0; 26 > j; j = j + 1)
            s[j] = s[j] + ((p + i)->num[j]);
    }
    {
        i = 0;
        while (i < 26) {
            if (max <= s[i]) {
                max = s[i];
                maxi = i;
            }
            i++;
        };
    }
    printf ("%c\n", (maxi + 'A'));
    printf ("%d\n", max);
    for (i = 0; m > i; i++) {
        int k;
        int j;
        k = strlen ((p + i)->name);
        for (j = 0; k > j; j++) {
            if ((p + i)->name[j] == (maxi + 'A')) {
                printf ("%d\n", (p + i)->number);
                continue;
            };
        };
    };
}

