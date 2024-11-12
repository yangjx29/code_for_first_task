int main () {
    int *OhUEJcs, k, j, R4WtBcKI3, KEcnKfxsvRJ [100000], n, HhPMnFLOo = 0;
    OhUEJcs = KEcnKfxsvRJ;
    scanf ("%d", &n);
    for (R4WtBcKI3 = 0; R4WtBcKI3 < n; R4WtBcKI3++)
        scanf ("%d", &KEcnKfxsvRJ[R4WtBcKI3]);
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
    scanf ("%d", &k);
    {
        R4WtBcKI3 = 0;
        while (R4WtBcKI3 < n) {
            if (*(OhUEJcs +R4WtBcKI3) == k) {
                while (*(OhUEJcs +R4WtBcKI3) == k) {
                    for (j = R4WtBcKI3; j < n - HhPMnFLOo; j++)
                        KEcnKfxsvRJ[j] = KEcnKfxsvRJ[j + 1];
                    HhPMnFLOo = HhPMnFLOo +1;
                };
            }
            R4WtBcKI3++;
        };
    }
    {
        R4WtBcKI3 = 0;
        while (R4WtBcKI3 < n - HhPMnFLOo -1) {
            R4WtBcKI3++;
            printf ("%d ", *OhUEJcs);
            OhUEJcs++;
        };
    }
    printf ("%d", *OhUEJcs);
}

