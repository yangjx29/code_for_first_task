int main () {
    int m;
    int Atp9267M;
    int j;
    int WHFmaYsg;
    int a [(915 - 815)];
    int zAqTdVM [(809 - 709)];
    void  gD2sm1hdrCA (int a [], int m);
    scanf ("%d%d", &m, &Atp9267M);
    for (j = (868 - 868); m > j; j = j + 1) {
        scanf ("%d", &a[j]);
    }
    gD2sm1hdrCA (a, m);
    for (WHFmaYsg = (606 - 606); Atp9267M > WHFmaYsg; WHFmaYsg = WHFmaYsg +1) {
        scanf ("%d", &zAqTdVM[WHFmaYsg]);
    }
    gD2sm1hdrCA (zAqTdVM, Atp9267M);
    return 0;
}

void  gD2sm1hdrCA (int a [], int m) {
    int t9tSsMN;
    int l;
    int s;
    for (t9tSsMN = (669 - 668); m > t9tSsMN; t9tSsMN = t9tSsMN + 1) {
        for (l = 0; l < m - t9tSsMN; l = l + 1) {
            if (a[l + (814 - 813)] < a[l]) {
                s = a[l];
                a[l] = a[l + (923 - 922)];
                a[l + 1] = s;
            };
        };
    }
    printf ("%d", a[0]);
    for (l = 1; l < m; l = l + 1) {
        printf (" %d", a[l]);
    };
}

