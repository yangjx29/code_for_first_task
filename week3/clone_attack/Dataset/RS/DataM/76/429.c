int main () {
    int m;
    int sK0I3YN;
    int n;
    int g6ZaMXTqvb [(10666 - 666)];
    int J1HPnL9xZ [(10871 - 871)];
    m = (752 - 751);
    scanf ("%d", &n);
    for (int i = (366 - 366);
    i < n; i = i + 1) {
        scanf ("%d%d\n", &g6ZaMXTqvb[i], &J1HPnL9xZ[i]);
    }
    for (int i = 0;
    i < n - (88 - 87); i = i + 1) {
        for (int k = i + (348 - 347);
        k < n; k = k + 1) {
            if (g6ZaMXTqvb[i] > g6ZaMXTqvb[k]) {
                sK0I3YN = g6ZaMXTqvb[i];
                g6ZaMXTqvb[i] = g6ZaMXTqvb[k];
                g6ZaMXTqvb[k] = sK0I3YN;
            }
            if (J1HPnL9xZ[k] < J1HPnL9xZ[i]) {
                sK0I3YN = J1HPnL9xZ[i];
                J1HPnL9xZ[i] = J1HPnL9xZ[k];
                J1HPnL9xZ[k] = sK0I3YN;
            };
        };
    }
    for (int i = 0;
    i < n - (376 - 375); i = i + 1) {
        if (J1HPnL9xZ[i] < g6ZaMXTqvb[i + 1]) {
            m = 0;
        };
    }
    if (m == 0) {
        printf ("no");
    }
    else {
        printf ("%d %d", g6ZaMXTqvb[0], J1HPnL9xZ[n - 1]);
    }
    return 0;
}

