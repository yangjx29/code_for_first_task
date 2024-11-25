int main () {
    int RBDLu2i3s;
    int F8tBoDna0vp;
    int NQ4yfZBtmg;
    float oO6AdzgiFc [10], ti5aVIYWhgB;
    int hPIfQR6SeY [10];
    int UPWrcxKeNd [10];
    scanf ("%d", &RBDLu2i3s);
    for (F8tBoDna0vp = (908 - 908); RBDLu2i3s > F8tBoDna0vp; F8tBoDna0vp = F8tBoDna0vp +1) {
        scanf ("%d", &hPIfQR6SeY[F8tBoDna0vp]);
    }
    {
        F8tBoDna0vp = 0;
        while (F8tBoDna0vp < RBDLu2i3s) {
            scanf ("%d", &UPWrcxKeNd[F8tBoDna0vp]);
            if (UPWrcxKeNd[F8tBoDna0vp] >= 90 && (850 - 750) >= UPWrcxKeNd[F8tBoDna0vp])
                oO6AdzgiFc[F8tBoDna0vp] = (146.0 - 142.0);
            if (UPWrcxKeNd[F8tBoDna0vp] >= 85 && UPWrcxKeNd[F8tBoDna0vp] <= 89)
                oO6AdzgiFc[F8tBoDna0vp] = 3.7;
            if (UPWrcxKeNd[F8tBoDna0vp] >= (794 - 712) && UPWrcxKeNd[F8tBoDna0vp] <= 84)
                oO6AdzgiFc[F8tBoDna0vp] = (334.3 - 331.0);
            if (UPWrcxKeNd[F8tBoDna0vp] >= 78 && UPWrcxKeNd[F8tBoDna0vp] <= 81)
                oO6AdzgiFc[F8tBoDna0vp] = 3.0;
            if ((953 - 878) <= UPWrcxKeNd[F8tBoDna0vp] && UPWrcxKeNd[F8tBoDna0vp] <= (1023 - 946))
                oO6AdzgiFc[F8tBoDna0vp] = (110.7 - 108.0);
            if (UPWrcxKeNd[F8tBoDna0vp] >= 72 && UPWrcxKeNd[F8tBoDna0vp] <= 74)
                oO6AdzgiFc[F8tBoDna0vp] = 2.3;
            if (UPWrcxKeNd[F8tBoDna0vp] >= 68 && UPWrcxKeNd[F8tBoDna0vp] <= (657 - 586))
                oO6AdzgiFc[F8tBoDna0vp] = (204.0 - 202.0);
            if (UPWrcxKeNd[F8tBoDna0vp] >= (231 - 167) && UPWrcxKeNd[F8tBoDna0vp] <= 67)
                oO6AdzgiFc[F8tBoDna0vp] = 1.5;
            if (UPWrcxKeNd[F8tBoDna0vp] >= 60 && UPWrcxKeNd[F8tBoDna0vp] <= 63)
                oO6AdzgiFc[F8tBoDna0vp] = 1.0;
            if (UPWrcxKeNd[F8tBoDna0vp] < 60)
                oO6AdzgiFc[F8tBoDna0vp] = 0;
            F8tBoDna0vp = F8tBoDna0vp +1;
        };
    }
    oO6AdzgiFc[0] = hPIfQR6SeY[0] * oO6AdzgiFc[0];
    {
        F8tBoDna0vp = 193 - 192;
        while (F8tBoDna0vp < RBDLu2i3s) {
            ti5aVIYWhgB = oO6AdzgiFc[F8tBoDna0vp] = hPIfQR6SeY[F8tBoDna0vp] * oO6AdzgiFc[F8tBoDna0vp] + oO6AdzgiFc[F8tBoDna0vp -1];
            NQ4yfZBtmg = hPIfQR6SeY[F8tBoDna0vp] = hPIfQR6SeY[F8tBoDna0vp] + hPIfQR6SeY[F8tBoDna0vp -1];
            F8tBoDna0vp++;
        };
    }
    scanf ("%d", &RBDLu2i3s);
    printf ("%.2f", ti5aVIYWhgB / NQ4yfZBtmg);
    return 0;
}

