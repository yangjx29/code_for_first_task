int main () {
    int aJYpZPhcb [(997 - 897)] [(791 - 691)], b [100] [100], JVkhf7 [100] [100], m, H1t0ocY6kmr, p, VZICvmYgb2, j, k;
    scanf ("%d%d", &m, &H1t0ocY6kmr);
    for (VZICvmYgb2 = (692 - 692); m > VZICvmYgb2; VZICvmYgb2 = VZICvmYgb2 +1) {
        j = 661 - 661;
        while (j < H1t0ocY6kmr) {
            scanf ("%d", &aJYpZPhcb[VZICvmYgb2][j]);
            j = j + 1;
        };
    }
    scanf ("%d%d", &H1t0ocY6kmr, &p);
    for (VZICvmYgb2 = (521 - 521); VZICvmYgb2 < H1t0ocY6kmr; VZICvmYgb2 = VZICvmYgb2 +1)
        for (j = (737 - 737); p > j; j = j + 1)
            scanf ("%d", &b[VZICvmYgb2][j]);
    for (VZICvmYgb2 = (802 - 802); VZICvmYgb2 < 100; VZICvmYgb2 = VZICvmYgb2 +1) {
        j = 0;
        while (100 > j) {
            JVkhf7[VZICvmYgb2][j] = 0;
            j = j + 1;
        };
    }
    for (VZICvmYgb2 = 0; VZICvmYgb2 < m; VZICvmYgb2 = VZICvmYgb2 +1)
        for (j = 0; j < p; j = j + 1) {
            k = 0;
            while (H1t0ocY6kmr > k) {
                JVkhf7[VZICvmYgb2][j] += aJYpZPhcb[VZICvmYgb2][k] * b[k][j];
                k = k + 1;
            };
        }
    for (VZICvmYgb2 = 0; VZICvmYgb2 < m; VZICvmYgb2 = VZICvmYgb2 +1) {
        j = 0;
        while (j < p) {
            printf ("%d%c", JVkhf7[VZICvmYgb2][j], (j == (p - 1) ? '\n' : ' '));
            j = j + 1;
        };
    }
    scanf ("%d", &VZICvmYgb2);
    return 0;
}

