int main () {
    int rvYEIoDBAe;
    int t;
    int i;
    int n;
    int VkjYIiW [(452 - 352)];
    int y [100];
    int z [100];
    rvYEIoDBAe = (626 - 626);
    t = (271 - 271);
    scanf ("%d", &n);
    {
        i = 580 - 579;
        while (i <= n) {
            scanf ("%d %d", &VkjYIiW[i], &y[i]);
            if (VkjYIiW[i] <= 140 && VkjYIiW[i] >= 90 && y[i] <= 90 && y[i] >= 60) {
                z[i] = (855 - 854);
            }
            else {
                z[i] = 0;
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= n) {
            if (z[i] == 1) {
                rvYEIoDBAe = rvYEIoDBAe + 1;
            }
            if (z[i] == 0 || i == n) {
                if (rvYEIoDBAe > t) {
                    t = rvYEIoDBAe;
                }
                rvYEIoDBAe = 0;
            }
            i++;
        };
    }
    printf ("%d", t);
    return 0;
}

