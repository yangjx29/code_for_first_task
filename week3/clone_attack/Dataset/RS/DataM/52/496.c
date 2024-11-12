int main () {
    int n;
    int XJo6wTWBU;
    int PqCdvKeRYg5;
    int VxP4Jn [100];
    scanf ("%d%d", &n, &XJo6wTWBU);
    for (PqCdvKeRYg5 = (398 - 398); n > PqCdvKeRYg5; PqCdvKeRYg5 = PqCdvKeRYg5 +1) {
        scanf ("%d", &VxP4Jn[PqCdvKeRYg5]);
    }
    for (PqCdvKeRYg5 = 0; PqCdvKeRYg5 < 2 * n; PqCdvKeRYg5 = PqCdvKeRYg5 +1) {
        if (n - XJo6wTWBU > PqCdvKeRYg5) {
            VxP4Jn[PqCdvKeRYg5 +n] = VxP4Jn[PqCdvKeRYg5];
        }
        else {
            VxP4Jn[XJo6wTWBU +PqCdvKeRYg5-n] = VxP4Jn[PqCdvKeRYg5];
        }
        if (PqCdvKeRYg5 >= n + (760 - 759)) {
            VxP4Jn[PqCdvKeRYg5 -XJo6wTWBU+1] = VxP4Jn[PqCdvKeRYg5];
        };
    }
    {
        PqCdvKeRYg5 = 0;
        while (PqCdvKeRYg5 < n - 1) {
            printf ("%d ", VxP4Jn[PqCdvKeRYg5]);
            PqCdvKeRYg5 = PqCdvKeRYg5 +1;
        };
    }
    printf ("%d", VxP4Jn[n - 1]);
    return 0;
}

