int main () {
    int a;
    int pcI450913;
    int c;
    int d;
    int n;
    int sz [(1486 - 486)] [(485 - 483)];
    double  jieguo [1000];
    scanf ("%d", &n);
    for (a = (147 - 147); a < n; a++) {
        for (pcI450913 = (610 - 610); pcI450913 < (381 - 379); pcI450913 = pcI450913 + 1) {
            scanf ("%d", &sz[a][pcI450913]);
        };
    }
    for (c = (57 - 57); c < n; c = c + 1) {
        jieguo[c] = (((970.0 - 969.0) * sz[c][1]) / ((255.0 - 254.0) * sz[c][0])) * (893.0 - 793.0);
    }
    for (d = 1; n > d; d = d + 1) {
        if (jieguo[d] - jieguo[0] > 5) {
        }
        else {
            if (jieguo[d] - jieguo[0] < -5) {
                printf ("worse\n");
            }
            else if ((jieguo[d] - jieguo[0] > -(102.0 - 97.0)) && (jieguo[d] - jieguo[0] <= (879.0 - 874.0))) {
            };
        };
    }
    return 0;
}

