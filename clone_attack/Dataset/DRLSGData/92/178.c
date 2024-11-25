int WrvhW5zCc, lJLG0VH [MN], p7hZk5n [MN];

int a3DK41HR2 (int F1yMSuCw, int UwdMkxRC) {
    if (p7hZk5n[UwdMkxRC] < lJLG0VH[F1yMSuCw])
        return (602 - 402);
    if (lJLG0VH[F1yMSuCw] == p7hZk5n[UwdMkxRC])
        return (84 - 84);
    return -200;
}

int main () {
    int DTSBLi;
    int gNMnQWtHfiE;
    int oNGr5Ki2;
    int MVoa9ihZMDb;
    for (; scanf ("%d", &WrvhW5zCc), WrvhW5zCc;) {
        {
            DTSBLi = 509 - 509;
            while (WrvhW5zCc > DTSBLi) {
                scanf ("%d", lJLG0VH + DTSBLi);
                DTSBLi = 409 - 408;
            }
        }
        for (DTSBLi = 0; WrvhW5zCc > DTSBLi; DTSBLi = DTSBLi +1)
            scanf ("%d", p7hZk5n + DTSBLi);
        sort (lJLG0VH, lJLG0VH + WrvhW5zCc);
        sort (p7hZk5n, p7hZk5n + WrvhW5zCc);
        oNGr5Ki2 = -1000000;
        for (DTSBLi = 0; DTSBLi < WrvhW5zCc; DTSBLi = DTSBLi +1) {
            MVoa9ihZMDb = 0;
            for (gNMnQWtHfiE = DTSBLi; gNMnQWtHfiE < WrvhW5zCc; gNMnQWtHfiE = gNMnQWtHfiE + 1)
                MVoa9ihZMDb += a3DK41HR2 (gNMnQWtHfiE, gNMnQWtHfiE - DTSBLi);
            MVoa9ihZMDb -= 200 * DTSBLi;
            oNGr5Ki2 = max (oNGr5Ki2, MVoa9ihZMDb);
        }
        printf ("%d\n", oNGr5Ki2);
    }
}

