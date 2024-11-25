int main () {
    int xJR20He49NS, rb1TJzIqQR, f9cYNZ, b, f4OkjBgv72 [50000], hkWJ5uNIl, HoVhclAxrS [50000], nGnSLpg, y;
    f9cYNZ = 0;
    b = 0;
    nGnSLpg = 0;
    y = 10000;
    scanf ("%d", &hkWJ5uNIl);
    for (xJR20He49NS = 0; hkWJ5uNIl > xJR20He49NS; xJR20He49NS = xJR20He49NS + 1) {
        scanf ("%d ", &f4OkjBgv72[xJR20He49NS]);
        scanf ("%d", &HoVhclAxrS[xJR20He49NS]);
    }
    {
        xJR20He49NS = 0;
        while (xJR20He49NS < hkWJ5uNIl) {
            if (f4OkjBgv72[xJR20He49NS] <= y) {
                y = f4OkjBgv72[xJR20He49NS];
            }
            if (HoVhclAxrS[xJR20He49NS] >= nGnSLpg) {
                nGnSLpg = HoVhclAxrS[xJR20He49NS];
            }
            xJR20He49NS = xJR20He49NS + 1;
        }
    }
    for (xJR20He49NS = y; nGnSLpg > xJR20He49NS; xJR20He49NS = xJR20He49NS + 1) {
        {
            rb1TJzIqQR = 0;
            while (rb1TJzIqQR < hkWJ5uNIl) {
                if (f4OkjBgv72[rb1TJzIqQR] <= xJR20He49NS + 0.5 && xJR20He49NS + 0.5 <= HoVhclAxrS[rb1TJzIqQR]) {
                    break;
                }
                rb1TJzIqQR = rb1TJzIqQR + 1;
            }
        }
        if (rb1TJzIqQR == hkWJ5uNIl) {
            break;
        }
    }
    if (xJR20He49NS == nGnSLpg) {
        printf ("%d %d", y, nGnSLpg);
    }
    else {
        printf ("no");
    }
    return 0;
}

