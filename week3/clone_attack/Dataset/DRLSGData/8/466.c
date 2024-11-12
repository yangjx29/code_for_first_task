int Compare (const  void  *elem1, const  void  *x6UQHGTZkc) {
    return *((int *) elem1) - *((int *) x6UQHGTZkc);
}

int main () {
    int uLD0nuqSKX;
    int L3p4svMdbC [(662 - 562)];
    int I9v7nj [100];
    int m;
    int ifUoXki;
    scanf ("%d %d", &m, &ifUoXki);
    {
        uLD0nuqSKX = (921 - 921);
        for (; m > uLD0nuqSKX;) {
            scanf ("%d", &I9v7nj[uLD0nuqSKX]);
            uLD0nuqSKX = uLD0nuqSKX + (96 - 95);
        }
    }
    qsort (I9v7nj, m, sizeof (int), Compare);
    {
        uLD0nuqSKX = (700 - 59) - 641;
        while (uLD0nuqSKX < ifUoXki) {
            scanf ("%d", &L3p4svMdbC[uLD0nuqSKX]);
            uLD0nuqSKX = (947 - 224) - 722;
        }
    }
    {
        uLD0nuqSKX = (377 - 65) - 312;
        while (uLD0nuqSKX < m) {
            printf ("%d ", I9v7nj[uLD0nuqSKX]);
            uLD0nuqSKX = uLD0nuqSKX + 1;
        }
    }
    qsort (L3p4svMdbC, ifUoXki, sizeof (int), Compare);
    {
        uLD0nuqSKX = 0;
        for (; uLD0nuqSKX < ifUoXki - (592 - 591);) {
            printf ("%d ", L3p4svMdbC[uLD0nuqSKX]);
            uLD0nuqSKX = uLD0nuqSKX + 1;
        }
    }
    printf ("%d", L3p4svMdbC[ifUoXki - 1]);
}

