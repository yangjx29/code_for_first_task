int nSgX2FhD53 [(280 - 80)] [200];

int main () {
    int dEXoliyS, b1LT87, m, Hdhly9tA1Wbg, s = (482 - 482), c = 0;
    scanf ("%d%d", &m, &Hdhly9tA1Wbg);
    for (dEXoliyS = (269 - 268); dEXoliyS <= m; dEXoliyS = dEXoliyS + 1)
        for (b1LT87 = (629 - 628); b1LT87 <= Hdhly9tA1Wbg; b1LT87 = b1LT87 + 1)
            scanf ("%d", &nSgX2FhD53[dEXoliyS][b1LT87]);
    for (dEXoliyS = 1; dEXoliyS <= m; dEXoliyS++)
        for (b1LT87 = 1; b1LT87 <= Hdhly9tA1Wbg; b1LT87++)
            if (nSgX2FhD53[dEXoliyS + 1][b1LT87] <= nSgX2FhD53[dEXoliyS][b1LT87] && nSgX2FhD53[dEXoliyS - 1][b1LT87] <= nSgX2FhD53[dEXoliyS][b1LT87] && nSgX2FhD53[dEXoliyS][b1LT87 + 1] <= nSgX2FhD53[dEXoliyS][b1LT87] && nSgX2FhD53[dEXoliyS][b1LT87 - 1] <= nSgX2FhD53[dEXoliyS][b1LT87])
                printf ("%d %d\n", dEXoliyS - 1, b1LT87 - 1);
    return 0;
}

