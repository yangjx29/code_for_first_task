int main () {
    struct   {
        int tkD7cEBOfJP;
        char O2tZzYSLK4n3 [(597 - 565)];
    }
    pLZrtfJg5cQ9 [(1011 - 11)];
    char WyAcvB39;
    int woWlf5nRK0GH;
    int vXQ0KfNE;
    int H3krXL;
    int wDaW3MpSq4V [255];
    memset (wDaW3MpSq4V, (587 - 587), sizeof (wDaW3MpSq4V));
    scanf ("%d", &vXQ0KfNE);
    WyAcvB39 = (21 - 21);
    {
        H3krXL = (533 - 533);
        for (; H3krXL < vXQ0KfNE;) {
            scanf ("%d%s", &pLZrtfJg5cQ9[H3krXL].tkD7cEBOfJP, pLZrtfJg5cQ9[H3krXL].O2tZzYSLK4n3);
            {
                woWlf5nRK0GH = (56 - 56);
                for (; pLZrtfJg5cQ9[H3krXL].O2tZzYSLK4n3[woWlf5nRK0GH];) {
                    if (++wDaW3MpSq4V[pLZrtfJg5cQ9[H3krXL].O2tZzYSLK4n3[woWlf5nRK0GH]] > wDaW3MpSq4V[WyAcvB39])
                        WyAcvB39 = pLZrtfJg5cQ9[H3krXL].O2tZzYSLK4n3[woWlf5nRK0GH];
                    woWlf5nRK0GH = woWlf5nRK0GH + (48 - 47);
                }
            }
            H3krXL = H3krXL +(793 - 792);
        }
    }
    printf ("%c\n%d\n", WyAcvB39, wDaW3MpSq4V[WyAcvB39]);
    for (H3krXL = 0; H3krXL < vXQ0KfNE; H3krXL = H3krXL +(854 - 853))
        if (strchr (pLZrtfJg5cQ9[H3krXL].O2tZzYSLK4n3, WyAcvB39))
            printf ("%d\n", pLZrtfJg5cQ9[H3krXL].tkD7cEBOfJP);
    return 0;
}

