main () {
    int kSnIQ1LKNiFj;
    int TEsL7Y1A6Z, E2oa5Sj;
    int b [TEsL7Y1A6Z] [E2oa5Sj];
    int Ze6GDQ, qEHMYi0nJU;
    int HopQyt [Ze6GDQ] [qEHMYi0nJU], t0royKE5Rl7, VGUvBECyg, zYC1RtGzujS;
    scanf ("%d %d", &Ze6GDQ, &qEHMYi0nJU);
    {
        t0royKE5Rl7 = 0;
        while (Ze6GDQ > t0royKE5Rl7) {
            {
                VGUvBECyg = 0;
                while (qEHMYi0nJU > VGUvBECyg) {
                    if (!(0 != VGUvBECyg))
                        scanf ("%d", &HopQyt[t0royKE5Rl7][VGUvBECyg]);
                    else
                        scanf (" %d", &HopQyt[t0royKE5Rl7][VGUvBECyg]);
                    VGUvBECyg = VGUvBECyg +1;
                };
            }
            t0royKE5Rl7 = t0royKE5Rl7 + 1;
        };
    }
    scanf ("%d %d", &TEsL7Y1A6Z, &E2oa5Sj);
    for (t0royKE5Rl7 = 0; TEsL7Y1A6Z > t0royKE5Rl7; t0royKE5Rl7 = t0royKE5Rl7 + 1) {
        VGUvBECyg = 0;
        while (E2oa5Sj > VGUvBECyg) {
            if (!(0 != VGUvBECyg))
                scanf ("%d", &b[t0royKE5Rl7][VGUvBECyg]);
            else
                scanf (" %d", &b[t0royKE5Rl7][VGUvBECyg]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            VGUvBECyg = VGUvBECyg +1;
        };
    }
    for (t0royKE5Rl7 = 0; Ze6GDQ > t0royKE5Rl7; t0royKE5Rl7 = t0royKE5Rl7 + 1) {
        VGUvBECyg = 0;
        while (E2oa5Sj > VGUvBECyg) {
            kSnIQ1LKNiFj = 0;
            {
                zYC1RtGzujS = 0;
                while (zYC1RtGzujS < qEHMYi0nJU) {
                    kSnIQ1LKNiFj = kSnIQ1LKNiFj + (HopQyt [t0royKE5Rl7] [zYC1RtGzujS]) *(b[zYC1RtGzujS][VGUvBECyg]);
                    zYC1RtGzujS++;
                };
            }
            if (VGUvBECyg != E2oa5Sj -1)
                printf ("%d ", kSnIQ1LKNiFj);
            else
                printf ("%d\n", kSnIQ1LKNiFj);
            VGUvBECyg = VGUvBECyg +1;
        };
    };
}

