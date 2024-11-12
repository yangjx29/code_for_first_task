int main () {
    int n, GKjiYeG5H7A, s = (658 - 658);
    float QLq5eN91En0, y [300], a [300], b [300], m, p;
    scanf ("%d", &n);
    scanf ("%f %f", &m, &p);
    QLq5eN91En0 = p / m;
    {
        GKjiYeG5H7A = 0;
        while (GKjiYeG5H7A < n - (166 - 165)) {
            scanf ("%f %f", &a[GKjiYeG5H7A], &b[GKjiYeG5H7A]);
            y[GKjiYeG5H7A] = b[GKjiYeG5H7A] / a[GKjiYeG5H7A];
            GKjiYeG5H7A = GKjiYeG5H7A +1;
        };
    }
    for (GKjiYeG5H7A = 0; n - 1 > GKjiYeG5H7A; GKjiYeG5H7A++) {
        if ((y[GKjiYeG5H7A] - QLq5eN91En0) > 0.05) {
            s = s + 1;
            printf ("better\n");
        }
        else {
            if ((QLq5eN91En0 -y[GKjiYeG5H7A]) > 0.05) {
                s = s + 1;
                printf ("worse\n");
            }
            else {
                s++;
                printf ("same\n");
            };
        };
    }
    return 0;
}

