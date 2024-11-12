int main () {
    int i, n;
    int JnPx47 [100], h5adKF, nyRmAHs2ZEpX = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &JnPx47[i]);
    }
    for (i = 0; i < n; i++) {
        if (JnPx47[nyRmAHs2ZEpX] <= JnPx47[i]) {
            nyRmAHs2ZEpX = i;
        }
    }
    if (nyRmAHs2ZEpX != 0) {
        h5adKF = JnPx47[nyRmAHs2ZEpX];
        JnPx47[nyRmAHs2ZEpX] = JnPx47[0];
        JnPx47[0] = h5adKF;
    }
    int wfJN3zXva = 1, t, TDQEY3UnON;
    {
        TDQEY3UnON = 1;
        while (TDQEY3UnON < n) {
            if (JnPx47[wfJN3zXva] <= JnPx47[TDQEY3UnON]) {
                wfJN3zXva = TDQEY3UnON;
            }
            TDQEY3UnON = TDQEY3UnON +1;
        }
    }
    if (wfJN3zXva != 1) {
        t = JnPx47[wfJN3zXva];
        JnPx47[wfJN3zXva] = JnPx47[1];
        JnPx47[1] = t;
    }
    printf ("%d\n", JnPx47[0]);
    printf ("%d\n", JnPx47[1]);
    return 0;
}

