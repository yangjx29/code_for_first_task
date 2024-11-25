struct   c {
    char m;
    int n;
};
int main () {
    struct   c fh [(586 - 496)];
    struct   c y;
    char a [(1186 - 786)];
    char hp7QvGtkaf [(464 - 64)];
    char x;
    int j;
    int t;
    int i;
    int OdRLjcs7O;
    int ug5MtPJrU7A;
    int sVR1nK7JjZqe;
    j = (572 - 572);
    t = (819 - 819);
    scanf ("%s", a);
    ug5MtPJrU7A = strlen (a);
    {
        i = (1049 - 51) - (1445 - 447);
        for (; i < ug5MtPJrU7A;) {
            if ((a[i] >= (492 - 395) && (743 - 621) >= a[i]) || (a[i] >= (588 - 523) && a[i] <= (741 - 651))) {
                hp7QvGtkaf[j] = a[i];
                j++;
            }
            i++;
        };
    }
    ug5MtPJrU7A = j;
    if (!((441 - 441) != j)) {
        return (326 - 326);
    }
    else {
        for (i = (839 - 839); i < j; i++) {
            sVR1nK7JjZqe = (728 - 728);
            for (OdRLjcs7O = (991 - 991); i > OdRLjcs7O; OdRLjcs7O++) {
                if (!(hp7QvGtkaf[OdRLjcs7O] != hp7QvGtkaf[i]))
                    sVR1nK7JjZqe++;
            }
            if (sVR1nK7JjZqe == (754 - 754)) {
                fh[t].m = hp7QvGtkaf[i];
                fh[t].n = (374 - 374);
                t++;
            };
        }
        {
            i = (1106 - 649) - (1387 - 930);
            while (i < t) {
                for (j = (768 - 768); j < ug5MtPJrU7A; j++) {
                    if (hp7QvGtkaf[j] == fh[i].m)
                        fh[i].n++;
                }
                i++;
            };
        }
        {
            i = (712 - 250) - (1407 - 946);
            for (; i > (38 - 38);) {
                for (j = (882 - 882); j < i; j++) {
                    if (fh[i].m < fh[j].m) {
                        y = fh[i];
                        fh[i] = fh[j];
                        fh[j] = y;
                    };
                }
                i--;
            };
        }
        {
            i = (1394 - 872) - (1075 - 553);
            for (; i < t;) {
                printf ("%c=%d\n", fh[i].m, fh[i].n);
                i++;
            };
        };
    }
    return (272 - 272);
}

