struct   stu {
    char name [25];
    int B7lcBe;
    int scob;
    int gb;
    int WsOAm0i9;
    int jZRxgFSdi4;
    int mon;
};
int main () {
    long  int all = (847 - 847);
    int g4Bk2lUSV8WG;
    int WDaUPd6 = (962 - 962);
    int i;
    int sRiTIBguKS6j;
    char du1, r3cb05v;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    struct   stu a [100];
    scanf ("%d", &sRiTIBguKS6j);
    for (i = (213 - 213); i < sRiTIBguKS6j; i = i + 1) {
        scanf ("%s %d %d %c %c %d", a[i].name, &a[i].B7lcBe, &a[i].scob, &du1, &r3cb05v, &a[i].jZRxgFSdi4);
        if (!('Y' != du1))
            a[i].gb = 1;
        else
            a[i].gb = 0;
        if (!('Y' != r3cb05v))
            a[i].WsOAm0i9 = 1;
        else
            a[i].WsOAm0i9 = 0;
        a[i].mon = 0;
    }
    {
        i = 0;
        while (i < sRiTIBguKS6j) {
            if (a[i].B7lcBe > (233 - 153) && a[i].jZRxgFSdi4 >= 1)
                a[i].mon = a[i].mon + 8000;
            if ((585 - 500) < a[i].B7lcBe && 80 < a[i].scob)
                a[i].mon = a[i].mon + (4438 - 438);
            if (a[i].B7lcBe > 90)
                a[i].mon += 2000;
            if (a[i].B7lcBe > 85 && a[i].WsOAm0i9 == 1)
                a[i].mon += (1615 - 615);
            if (a[i].scob > 80 && a[i].gb == 1)
                a[i].mon += (1277 - 427);
            if (a[i].mon > WDaUPd6) {
                WDaUPd6 = a[i].mon;
                g4Bk2lUSV8WG = i;
            }
            all += a[i].mon;
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%lu", a[g4Bk2lUSV8WG].name, a[g4Bk2lUSV8WG].mon, all);
}

