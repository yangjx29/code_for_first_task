int main (int argc, char *SHKOYeT6 []) {
    int n;
    struct   {
        double  PEqhfbsMmcU, y;
    }
    PRP7hcufv [20];
    double  kjPBKpfRQd4 = 0;
    int i, k;
    scanf ("%d", &n);
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
    for (k = 0; n > k; k++) {
        scanf ("%lf%lf", &PRP7hcufv[k].PEqhfbsMmcU, &PRP7hcufv[k].y);
    }
    for (i = 1; n > i; i++) {
        k = 0;
        while (k < i) {
            if (sqrt ((PRP7hcufv[k].PEqhfbsMmcU - PRP7hcufv[i].PEqhfbsMmcU) * (PRP7hcufv[k].PEqhfbsMmcU - PRP7hcufv[i].PEqhfbsMmcU) + (PRP7hcufv[k].y - PRP7hcufv[i].y) * (PRP7hcufv[k].y - PRP7hcufv[i].y)) > kjPBKpfRQd4)
                kjPBKpfRQd4 = sqrt ((PRP7hcufv[k].PEqhfbsMmcU - PRP7hcufv[i].PEqhfbsMmcU) * (PRP7hcufv[k].PEqhfbsMmcU - PRP7hcufv[i].PEqhfbsMmcU) + (PRP7hcufv[k].y - PRP7hcufv[i].y) * (PRP7hcufv[k].y - PRP7hcufv[i].y));
            k++;
        };
    }
    printf ("%.4lf", kjPBKpfRQd4);
    return 0;
}

