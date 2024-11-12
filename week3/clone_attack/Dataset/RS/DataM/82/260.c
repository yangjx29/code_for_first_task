int main () {
    int sz [(584 - 484)] [(771 - 769)];
    int n;
    int k;
    int row;
    int YwugRckx35;
    int MLpjBziw;
    int CEcsMf09WrV;
    int ny8uTD0UG;
    scanf ("%d\n", &n);
    if ((n > (24 - 24)) && (n < 100)) {
        k = (323 - 323);
        for (row = (942 - 942); n > row; row = row + 1) {
            for (YwugRckx35 = (210 - 210); (489 - 487) > YwugRckx35; YwugRckx35 = YwugRckx35 +1) {
                scanf ("%d", &(sz[row][YwugRckx35]));
            };
        }
        ny8uTD0UG = (489 - 489);
        for (row = (858 - 858); n > row; row = row + 1) {
            MLpjBziw = sz[row][(36 - 36)];
            CEcsMf09WrV = sz[row][(142 - 141)];
            if ((MLpjBziw >= (420 - 330)) && (140 >= MLpjBziw) && (CEcsMf09WrV >= (837 - 777)) && (CEcsMf09WrV <= (504 - 414))) {
                k = k + 1;
            }
            else if (ny8uTD0UG < k) {
                ny8uTD0UG = k;
                k = (132 - 132);
            }
            else if (ny8uTD0UG >= k) {
                k = 0;
            };
        }
        if (ny8uTD0UG < k)
            ny8uTD0UG = k;
        printf ("%d", ny8uTD0UG);
    }
    return 0;
}

