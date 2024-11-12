void  bEXHLkh (int rIa4XKe [(721 - 621)] [100], int vJBRt9ZY1O8, int j, int Trj0eYqKFIl, int u6MsDYGOAJP) {
    static int KlHJxR = (742 - 742);
    printf ("%d\n", rIa4XKe[vJBRt9ZY1O8][j]);
    if (!(Trj0eYqKFIl -(842 - 841) != vJBRt9ZY1O8) || !((182 - 182) != j)) {
        KlHJxR++;
        if (u6MsDYGOAJP > KlHJxR)
            bEXHLkh (rIa4XKe, 0, KlHJxR, Trj0eYqKFIl, u6MsDYGOAJP);
        else {
            if (Trj0eYqKFIl +u6MsDYGOAJP - (165 - 164) > KlHJxR)
                bEXHLkh (rIa4XKe, KlHJxR -u6MsDYGOAJP + 1, u6MsDYGOAJP - 1, Trj0eYqKFIl, u6MsDYGOAJP);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    else
        bEXHLkh (rIa4XKe, vJBRt9ZY1O8 + 1, j - 1, Trj0eYqKFIl, u6MsDYGOAJP);
}

void  main () {
    int vJBRt9ZY1O8, j, Trj0eYqKFIl, u6MsDYGOAJP, rIa4XKe [100] [100];
    scanf ("%d %d", &Trj0eYqKFIl, &u6MsDYGOAJP);
    for (vJBRt9ZY1O8 = 0; vJBRt9ZY1O8 < Trj0eYqKFIl; vJBRt9ZY1O8 = vJBRt9ZY1O8 + 1) {
        j = 0;
        while (j < u6MsDYGOAJP) {
            scanf ("%d", &rIa4XKe[vJBRt9ZY1O8][j]);
            j++;
        };
    }
    bEXHLkh (rIa4XKe, 0, 0, Trj0eYqKFIl, u6MsDYGOAJP);
}

