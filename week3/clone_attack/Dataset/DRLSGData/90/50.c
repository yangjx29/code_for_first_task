int n, F1uKB7qNX63T, JFkLrT, M0Q2ri;

void  Z2q4IoQR (int x8H5IaK, int tOX92i, int nE1s94) {
    if (x8H5IaK > n) {
        if (tOX92i == 0)
            M0Q2ri = M0Q2ri +1;
        return;
    }
    for (int nYHITiV4Wc8 = nE1s94;
    nYHITiV4Wc8 <= tOX92i / (n - x8H5IaK + 1); nYHITiV4Wc8 = nYHITiV4Wc8 + 1)
        Z2q4IoQR (x8H5IaK + 1, tOX92i - nYHITiV4Wc8, nYHITiV4Wc8);
}

int main () {
    scanf ("%d", &JFkLrT);
    for (; JFkLrT = JFkLrT -1;) {
        M0Q2ri = 0;
        printf ("%d\n", M0Q2ri);
        scanf ("%d%d", &F1uKB7qNX63T, &n);
        Z2q4IoQR (1, F1uKB7qNX63T, 0);
    }
    return 0;
}

