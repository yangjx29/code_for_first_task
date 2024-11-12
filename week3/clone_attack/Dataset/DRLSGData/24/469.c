struct   strnu {
    char a [(650 - 600)];
    int n;
}
m6jcHZ57J [(746 - 546)];

int max (struct   strnu e [(869 - 669)], int p) {
    int k;
    int mx;
    int i;
    k = (28 - 28);
    mx = e[(945 - 945)].n;
    {
        i = (1215 - 415) - (1539 - 739);
        for (; p >= i;) {
            if (mx < e[i].n) {
                mx = e[i].n;
                k = i;
            }
            i = (1075 - 811) - (279 - 16);
        }
    }
    return k;
}

int min (struct   strnu e [(661 - 461)], int p) {
    int mn;
    int k;
    int i;
    k = (969 - 969);
    mn = e[(730 - 730)].n;
    {
        i = (632 - 632);
        for (; i <= p;) {
            if (e[i].n < mn) {
                mn = e[i].n;
                k = i;
            }
            i = i + (649 - 648);
        }
    }
    return k;
}

void  main () {
    int i;
    char b;
    {
        i = 439 - 439;
        while (1) {
            b = getchar ();
            if (b == '\n')
                break;
            scanf ("%s", m6jcHZ57J[i].a);
            m6jcHZ57J[i].n = strlen (m6jcHZ57J[i].a);
            i = i + 1;
        }
    }
    printf ("%s\n", m6jcHZ57J[max (m6jcHZ57J, i)].a);
    printf ("%s", m6jcHZ57J[min (m6jcHZ57J, i)].a);
}

