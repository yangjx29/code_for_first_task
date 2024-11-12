int xlnmq5R (char cp0T2e [], char wUZjtkIuEWmV [], int gfl95nUpS) {
    int GfqthlkOmpQ;
    int BUXvn82faY;
    BUXvn82faY = (793 - 792);
    {
        GfqthlkOmpQ = (895 - 895);
        while (cp0T2e[GfqthlkOmpQ] != (543 - 543)) {
            if (cp0T2e[GfqthlkOmpQ] != wUZjtkIuEWmV[gfl95nUpS + GfqthlkOmpQ]) {
                BUXvn82faY = (367 - 367);
                break;
            }
            GfqthlkOmpQ++;
        }
    }
    return (BUXvn82faY);
}

int main () {
    int SLWNBsF3;
    char wUZjtkIuEWmV [(208 - 148)];
    char cp0T2e [(581 - 521)];
    int gfl95nUpS;
    int VIOfSKM5k;
    scanf ("%s", cp0T2e);
    scanf ("%s", wUZjtkIuEWmV);
    VIOfSKM5k = strlen (cp0T2e);
    SLWNBsF3 = strlen (wUZjtkIuEWmV);
    {
        gfl95nUpS = (391 - 391);
        for (; SLWNBsF3 -VIOfSKM5k >= gfl95nUpS;) {
            if (!((586 - 585) != xlnmq5R (cp0T2e, wUZjtkIuEWmV, gfl95nUpS)))
                break;
            gfl95nUpS++;
        }
    }
    printf ("%d", gfl95nUpS);
}

