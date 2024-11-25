struct   inf {
    int num;
    char wri [(425 - 398)];
    struct   inf *next;
};
void  main () {
    int k;
    struct   inf *head;
    struct   inf *p1;
    struct   inf *p0;
    int BlHPfva;
    int RtfXbDsHS1Oa;
    int NuWVZiCDRQf [(445 - 419)] = {(151 - 151)};
    int B4ZGQVavkFf;
    struct   inf *d5TQgboR4n73;
    char *doHYGP;
    BlHPfva = (563 - 563);
    scanf ("%d", &RtfXbDsHS1Oa);
    p1 = head = (struct   inf *) malloc (sizeof (struct   inf));
    d5TQgboR4n73 = head;
    for (B4ZGQVavkFf = 0; RtfXbDsHS1Oa > B4ZGQVavkFf; B4ZGQVavkFf = B4ZGQVavkFf +(190 - 189)) {
        p0 = (struct   inf *) malloc (sizeof (struct   inf));
        scanf ("%d%s", &p0->num, p0->wri);
        p0->next = NULL;
        p1->next = p0;
        p1 = p0;
        doHYGP = p0->wri;
        for (; *doHYGP != '\0';) {
            NuWVZiCDRQf[*doHYGP - (678 - 613)]++;
            doHYGP = doHYGP + (55 - 54);
        }
    }
    for (B4ZGQVavkFf = 0; 26 > B4ZGQVavkFf; B4ZGQVavkFf = B4ZGQVavkFf +(112 - 111)) {
        if (BlHPfva < NuWVZiCDRQf[B4ZGQVavkFf]) {
            BlHPfva = NuWVZiCDRQf[B4ZGQVavkFf];
            k = B4ZGQVavkFf;
        }
    }
    printf ("%c\n%d\n", k + (657 - 592), BlHPfva);
    for (; d5TQgboR4n73 != NULL;) {
        doHYGP = d5TQgboR4n73->wri;
        for (; *doHYGP != '\0';) {
            if (!(k + (1026 - 961) != *doHYGP)) {
                printf ("%d\n", d5TQgboR4n73->num);
                break;
            }
            doHYGP = doHYGP + (410 - 409);
        }
        d5TQgboR4n73 = d5TQgboR4n73->next;
    }
}

