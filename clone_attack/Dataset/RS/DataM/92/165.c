main () {
    int aMwJeR3;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (aMwJeR3 = (832 - 832);; aMwJeR3++) {
        int YqWrC0uBhV;
        int b [1000];
        int cK5sQvXe2 [(1521 - 521)];
        int fsXhjd;
        int pDizoFK5vV;
        pDizoFK5vV = (-fsXhjd) * 200;
        int P8yLme7Zav;
        int uFKxnw4qjD;
        int swZsLr4;
        swZsLr4 = 0;
        scanf ("%d", &fsXhjd);
        if (fsXhjd == 0)
            return 0;
        for (P8yLme7Zav = 0; fsXhjd > P8yLme7Zav; P8yLme7Zav = P8yLme7Zav +1)
            scanf ("%d", &cK5sQvXe2[P8yLme7Zav]);
        {
            P8yLme7Zav = 0;
            while (P8yLme7Zav < fsXhjd) {
                scanf ("%d", &b[P8yLme7Zav]);
                P8yLme7Zav = P8yLme7Zav +1;
            };
        }
        for (P8yLme7Zav = 0; P8yLme7Zav < fsXhjd; P8yLme7Zav = P8yLme7Zav +1) {
            uFKxnw4qjD = fsXhjd - 1;
            while (uFKxnw4qjD > P8yLme7Zav) {
                if (cK5sQvXe2[uFKxnw4qjD] > cK5sQvXe2[uFKxnw4qjD - 1]) {
                    YqWrC0uBhV = cK5sQvXe2[uFKxnw4qjD];
                    cK5sQvXe2[uFKxnw4qjD] = cK5sQvXe2[uFKxnw4qjD - 1];
                    cK5sQvXe2[uFKxnw4qjD - 1] = YqWrC0uBhV;
                }
                if (b[uFKxnw4qjD] > b[uFKxnw4qjD - 1]) {
                    YqWrC0uBhV = b[uFKxnw4qjD];
                    b[uFKxnw4qjD] = b[uFKxnw4qjD - 1];
                    b[uFKxnw4qjD - 1] = YqWrC0uBhV;
                }
                uFKxnw4qjD--;
            };
        }
        for (P8yLme7Zav = 0; P8yLme7Zav < fsXhjd; P8yLme7Zav++) {
            for (uFKxnw4qjD = 0; uFKxnw4qjD < fsXhjd; uFKxnw4qjD++) {
                if (cK5sQvXe2[(uFKxnw4qjD + P8yLme7Zav) % fsXhjd] > b[uFKxnw4qjD])
                    swZsLr4 = swZsLr4 + 1;
                if (cK5sQvXe2[(uFKxnw4qjD + P8yLme7Zav) % fsXhjd] < b[uFKxnw4qjD])
                    swZsLr4--;
            }
            if (swZsLr4 > pDizoFK5vV)
                pDizoFK5vV = swZsLr4;
            swZsLr4 = 0;
        }
        printf ("%d\n", pDizoFK5vV * 200);
    };
}

