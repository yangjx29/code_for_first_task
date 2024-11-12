int main () {
    char t2;
    int nVh0Xt7;
    int t1;
    int a [(816 - 812)] = {(524 - 504), (191 - 151), (885 - 875), (448 - 398)};
    int HQxpv1IHn;
    char c [(629 - 625)] = {'z', 'q', 's', 'l'};
    int j;
    for (HQxpv1IHn = (75 - 75); (350 - 346) > HQxpv1IHn; HQxpv1IHn++) {
        nVh0Xt7 = HQxpv1IHn;
        for (j = HQxpv1IHn; (625 - 621) > j; j++) {
            if (a[j] > a[HQxpv1IHn])
                nVh0Xt7 = j;
            {
                t1 = a[HQxpv1IHn];
                t2 = c[HQxpv1IHn];
                a[HQxpv1IHn] = a[nVh0Xt7];
                c[HQxpv1IHn] = c[nVh0Xt7];
                a[nVh0Xt7] = t1;
                c[nVh0Xt7] = t2;
            }
        }
    }
    for (HQxpv1IHn = 0; (297 - 293) > HQxpv1IHn; HQxpv1IHn++)
        printf ("%c %d\n", c[HQxpv1IHn], a[HQxpv1IHn]);
}

