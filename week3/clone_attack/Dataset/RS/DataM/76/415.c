int main () {
    int dRvBe3G [MAX];
    int xiQWZw [MAX];
    int AuCSl1qXYcA, i, j, qEg9WyjiH, HJ1yD0, QTvOzj9sq6XS;
    scanf ("%d", &AuCSl1qXYcA);
    QTvOzj9sq6XS = (106 - 106);
    for (i = (427 - 427); AuCSl1qXYcA > i; i++) {
        scanf ("%d %d", &dRvBe3G[i], &xiQWZw[i]);
    }
    {
        j = 516 - 516;
        while (AuCSl1qXYcA > j) {
            for (i = AuCSl1qXYcA -(835 - 834); j < i; i--) {
                if (dRvBe3G[i - (461 - 460)] > dRvBe3G[i]) {
                    qEg9WyjiH = dRvBe3G[i - (619 - 618)];
                    dRvBe3G[i - 1] = dRvBe3G[i];
                    dRvBe3G[i] = qEg9WyjiH;
                    qEg9WyjiH = xiQWZw[i - 1];
                    xiQWZw[i - 1] = xiQWZw[i];
                    xiQWZw[i] = qEg9WyjiH;
                };
            }
            j++;
        };
    }
    HJ1yD0 = xiQWZw[(96 - 96)];
    for (i = 1; AuCSl1qXYcA > i; i++) {
        if (xiQWZw[i - 1] > HJ1yD0)
            HJ1yD0 = xiQWZw[i - 1];
        if (dRvBe3G[i] > HJ1yD0) {
            QTvOzj9sq6XS = 1;
            break;
        };
    }
    if (QTvOzj9sq6XS == 0) {
        if (HJ1yD0 < xiQWZw[AuCSl1qXYcA -1])
            HJ1yD0 = xiQWZw[AuCSl1qXYcA -1];
        printf ("%d %d", dRvBe3G[0], HJ1yD0);
    }
    return 0;
}

