int gaBrmi01P (int XdBIlnVau1, int JOrQwhs4P) {
    int BESus1btg;
    if (XdBIlnVau1 > JOrQwhs4P)
        BESus1btg = JOrQwhs4P;
    else
        BESus1btg = XdBIlnVau1;
    return (BESus1btg);
}

int main () {
    int B3KjknY, tHnq5fsb, k, Ilr4esBd0c, WpLPes, cysehl0c1 [101] [101], dOs0WnhT28G [101], HBC8aErvVkR;
    cin >> B3KjknY;
    for (tHnq5fsb = 1; tHnq5fsb <= B3KjknY; tHnq5fsb = tHnq5fsb + 1) {
        for (Ilr4esBd0c = 1; Ilr4esBd0c <= B3KjknY; Ilr4esBd0c = Ilr4esBd0c +1) {
            for (WpLPes = 1; B3KjknY >= WpLPes; WpLPes = WpLPes +1) {
                cin >> cysehl0c1[Ilr4esBd0c][WpLPes];
            };
        }
        HBC8aErvVkR = 0;
        for (k = 1; B3KjknY -1 >= k; k++) {
            for (Ilr4esBd0c = 1; B3KjknY -k + 1 >= Ilr4esBd0c; Ilr4esBd0c++) {
                dOs0WnhT28G[Ilr4esBd0c] = cysehl0c1[Ilr4esBd0c][1];
                for (WpLPes = 1; B3KjknY -k + 1 >= WpLPes; WpLPes = WpLPes +1)
                    dOs0WnhT28G[Ilr4esBd0c] = gaBrmi01P (cysehl0c1[Ilr4esBd0c][WpLPes], dOs0WnhT28G[Ilr4esBd0c]);
            }
            for (Ilr4esBd0c = 1; B3KjknY -k + 1 >= Ilr4esBd0c; Ilr4esBd0c++) {
                for (WpLPes = 1; WpLPes <= B3KjknY -k + 1; WpLPes++)
                    cysehl0c1[Ilr4esBd0c][WpLPes] = cysehl0c1[Ilr4esBd0c][WpLPes] - dOs0WnhT28G[Ilr4esBd0c];
            }
            for (WpLPes = 1; WpLPes <= B3KjknY -k + 1; WpLPes++) {
                dOs0WnhT28G[WpLPes] = cysehl0c1[1][WpLPes];
                for (Ilr4esBd0c = 1; Ilr4esBd0c <= B3KjknY -k + 1; Ilr4esBd0c++)
                    dOs0WnhT28G[WpLPes] = gaBrmi01P (cysehl0c1[Ilr4esBd0c][WpLPes], dOs0WnhT28G[WpLPes]);
            }
            for (WpLPes = 1; WpLPes <= B3KjknY -k + 1; WpLPes++) {
                for (Ilr4esBd0c = 1; Ilr4esBd0c <= B3KjknY -k + 1; Ilr4esBd0c++)
                    cysehl0c1[Ilr4esBd0c][WpLPes] = cysehl0c1[Ilr4esBd0c][WpLPes] - dOs0WnhT28G[WpLPes];
            }
            HBC8aErvVkR = HBC8aErvVkR +cysehl0c1[2][2];
            for (Ilr4esBd0c = 1; Ilr4esBd0c <= B3KjknY -k + 1; Ilr4esBd0c++) {
                if ((B3KjknY -k + 1) >= 3)
                    for (WpLPes = 3; WpLPes <= B3KjknY -k + 1; WpLPes++)
                        cysehl0c1[Ilr4esBd0c][WpLPes -1] = cysehl0c1[Ilr4esBd0c][WpLPes];
                else
                    break;
            }
            {
                WpLPes = 1;
                while (WpLPes <= B3KjknY -k + 1) {
                    if ((B3KjknY -k + 1) >= 3)
                        for (Ilr4esBd0c = 3; Ilr4esBd0c <= B3KjknY -k + 1; Ilr4esBd0c++)
                            cysehl0c1[Ilr4esBd0c -1][WpLPes] = cysehl0c1[Ilr4esBd0c][WpLPes];
                    else
                        break;
                    WpLPes = WpLPes +1;
                };
            };
        }
        printf ("\n%d", HBC8aErvVkR);
    }
    return 0;
}

