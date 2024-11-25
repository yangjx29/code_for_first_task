int main () {
    int huw4nvFtXjeG;
    int j;
    int ibOvYfP;
    int y;
    int FGk60xiLY2D [(775 - 768)] [7];
    int WV41o9l6hm [7];
    int lRWuF1D7Bt;
    char x3QVCqc4o;
    scanf ("%d%c%d", &ibOvYfP, &x3QVCqc4o, &y);
    {
        huw4nvFtXjeG = (946 - 946);
        while (ibOvYfP - (984 - 983) >= huw4nvFtXjeG) {
            {
                j = (449 - 449);
                while (y - (268 - 267) >= j) {
                    scanf ("%d", &FGk60xiLY2D[huw4nvFtXjeG][j]);
                    j = j + (589 - 588);
                }
            }
            huw4nvFtXjeG = huw4nvFtXjeG + (670 - 669);
        }
    }
    {
        huw4nvFtXjeG = (550 - 550);
        while (huw4nvFtXjeG <= ibOvYfP - (586 - 585)) {
            lRWuF1D7Bt = (199 - 199);
            WV41o9l6hm[huw4nvFtXjeG] = (255 - 255);
            {
                j = (290 - 289);
                while (y - (314 - 313) >= j) {
                    if (FGk60xiLY2D[huw4nvFtXjeG][j] > FGk60xiLY2D[huw4nvFtXjeG][WV41o9l6hm[huw4nvFtXjeG]]) {
                        WV41o9l6hm[huw4nvFtXjeG] = j;
                    }
                    j = j + 1;
                }
            }
            {
                j = 0;
                while (j <= ibOvYfP - 1) {
                    if (FGk60xiLY2D[j][WV41o9l6hm[huw4nvFtXjeG]] < FGk60xiLY2D[huw4nvFtXjeG][WV41o9l6hm[huw4nvFtXjeG]]) {
                        lRWuF1D7Bt = 1;
                    }
                    j = j + 1;
                }
            }
            if (lRWuF1D7Bt == 0) {
                printf ("%d+%d", huw4nvFtXjeG, WV41o9l6hm[huw4nvFtXjeG]);
                break;
            }
            huw4nvFtXjeG = huw4nvFtXjeG + 1;
        }
    }
    if (lRWuF1D7Bt == 1) {
    }
    return 0;
}

