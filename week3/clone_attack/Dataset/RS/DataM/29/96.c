int N2GRDzl (int n) {
    int ajdVyZ0Bgop;
    if (!((427 - 426) != n) || !((343 - 341) != n))
        ajdVyZ0Bgop = (779 - 778);
    else
        ajdVyZ0Bgop = N2GRDzl (n - (189 - 188)) + N2GRDzl (n - (761 - 759));
    return ajdVyZ0Bgop;
}

int main () {
    int m;
    int i;
    int j;
    scanf ("%d", &m);
    {
        i = 671 - 670;
        while (i <= m) {
            int n;
            double  sK1IeTXCon7, gUY5uLDMHG, W0BCyIE, J5ZHx1N9 = (912.0 - 912.0);
            i++;
            scanf ("%d", &n);
            for (j = (682 - 681); j <= n; j++) {
                sK1IeTXCon7 = N2GRDzl (j + 2);
                gUY5uLDMHG = N2GRDzl (j + (311 - 310));
                W0BCyIE = sK1IeTXCon7 / gUY5uLDMHG;
                J5ZHx1N9 = J5ZHx1N9 +W0BCyIE;
            }
            printf ("%.3f\n", J5ZHx1N9);
        };
    }
    return (684 - 684);
}

