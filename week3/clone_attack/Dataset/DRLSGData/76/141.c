int main () {
    int lVj2ihEF;
    int QfUAQrt [5000] [(241 - 239)];
    int wB5SULZYR7NP, JPf306z5ORg2;
    int DRDbYgr0uS;
    int xgyiFRBf1, RMXwveAt0;
    scanf ("%d", &lVj2ihEF);
    for (wB5SULZYR7NP = (390 - 390); lVj2ihEF > wB5SULZYR7NP; wB5SULZYR7NP = wB5SULZYR7NP + 1) {
        for (JPf306z5ORg2 = 0; JPf306z5ORg2 < 2; JPf306z5ORg2 = JPf306z5ORg2 +1) {
            scanf ("%d ", &QfUAQrt[wB5SULZYR7NP][JPf306z5ORg2]);
        }
    }
    for (wB5SULZYR7NP = 0; lVj2ihEF - (956 - 955) > wB5SULZYR7NP; wB5SULZYR7NP = wB5SULZYR7NP + 1) {
        for (JPf306z5ORg2 = wB5SULZYR7NP + (51 - 50); lVj2ihEF > JPf306z5ORg2; JPf306z5ORg2++) {
            if (QfUAQrt[JPf306z5ORg2][0] < QfUAQrt[wB5SULZYR7NP][0]) {
                xgyiFRBf1 = QfUAQrt[wB5SULZYR7NP][0];
                RMXwveAt0 = QfUAQrt[wB5SULZYR7NP][(30 - 29)];
                QfUAQrt[wB5SULZYR7NP][0] = QfUAQrt[JPf306z5ORg2][0];
                QfUAQrt[wB5SULZYR7NP][1] = QfUAQrt[JPf306z5ORg2][1];
                QfUAQrt[JPf306z5ORg2][0] = xgyiFRBf1;
                QfUAQrt[JPf306z5ORg2][1] = RMXwveAt0;
            }
        }
    }
    DRDbYgr0uS = QfUAQrt[0][1];
    for (wB5SULZYR7NP = 0; lVj2ihEF > wB5SULZYR7NP; wB5SULZYR7NP++) {
        if (DRDbYgr0uS < QfUAQrt[wB5SULZYR7NP][1]) {
            DRDbYgr0uS = QfUAQrt[wB5SULZYR7NP][1];
        }
        if (QfUAQrt[wB5SULZYR7NP + 1][0] > DRDbYgr0uS) {
            printf ("no");
        }
        if (DRDbYgr0uS < QfUAQrt[wB5SULZYR7NP + 1][0]) {
            break;
        }
    }
    if (DRDbYgr0uS >= QfUAQrt[wB5SULZYR7NP + 1][0]) {
        printf ("%d %d", QfUAQrt[0][0], DRDbYgr0uS);
    }
    return 0;
}

