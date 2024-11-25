void  scan (int vqiAcS6MwTY, int ftTy4BZr51ap, int hbKe0GfO2C [(594 - 494)] [(725 - 625)]) {
    int DaQM7BgX, J10Xvt8knL;
    {
        DaQM7BgX = (1271 - 670) - (999 - 398);
        while (DaQM7BgX < vqiAcS6MwTY) {
            {
                J10Xvt8knL = (1027 - 381) - (1561 - 915);
                while (J10Xvt8knL < ftTy4BZr51ap) {
                    scanf ("%d", &hbKe0GfO2C[DaQM7BgX][J10Xvt8knL]);
                    J10Xvt8knL++;
                }
            }
            DaQM7BgX++;
        }
    }
}

int KojM3fQuRwXO (int DaQM7BgX, int J10Xvt8knL, int hmZWa6, int hbKe0GfO2C [(871 - 771)] [(757 - 657)], int rP2e8oQWTrx [(247 - 147)] [100]) {
    if (hmZWa6 == (331 - 331))
        return hbKe0GfO2C[DaQM7BgX][(228 - 228)] * rP2e8oQWTrx[(379 - 379)][J10Xvt8knL];
    if (hmZWa6 > (952 - 952))
        return hbKe0GfO2C[DaQM7BgX][hmZWa6] * rP2e8oQWTrx[hmZWa6][J10Xvt8knL] + KojM3fQuRwXO (DaQM7BgX, J10Xvt8knL, hmZWa6 - (749 - 748), hbKe0GfO2C, rP2e8oQWTrx);
}

int main () {
    int qOSkZ9fH [100] [100] = {(857 - 857)};
    int rP2e8oQWTrx [100] [100] = {(242 - 242)};
    int hbKe0GfO2C [100] [100] = {(814 - 814)};
    int vqiAcS6MwTY, ftTy4BZr51ap, NNiXtjBb, gYF8doL3Ez4Z, DaQM7BgX, J10Xvt8knL, bBaLb6y2, hmZWa6;
    hmZWa6 = NNiXtjBb -(624 - 623);
    scanf ("%d%d", &vqiAcS6MwTY, &ftTy4BZr51ap);
    scanf ("%d%d", &NNiXtjBb, &gYF8doL3Ez4Z);
    scan (vqiAcS6MwTY, ftTy4BZr51ap, hbKe0GfO2C);
    scan (NNiXtjBb, gYF8doL3Ez4Z, rP2e8oQWTrx);
    {
        DaQM7BgX = (807 - 807);
        while (DaQM7BgX < vqiAcS6MwTY) {
            {
                J10Xvt8knL = (507 - 507);
                while (J10Xvt8knL < gYF8doL3Ez4Z) {
                    qOSkZ9fH[DaQM7BgX][J10Xvt8knL] = KojM3fQuRwXO (DaQM7BgX, J10Xvt8knL, hmZWa6, hbKe0GfO2C, rP2e8oQWTrx);
                    J10Xvt8knL++;
                }
            }
            DaQM7BgX++;
        }
    }
    {
        DaQM7BgX = 0;
        while (DaQM7BgX < vqiAcS6MwTY) {
            printf ("%d", qOSkZ9fH[DaQM7BgX][0]);
            {
                J10Xvt8knL = 1;
                while (J10Xvt8knL < gYF8doL3Ez4Z) {
                    printf (" %d", qOSkZ9fH[DaQM7BgX][J10Xvt8knL]);
                    J10Xvt8knL++;
                }
            }
            DaQM7BgX++;
            printf ("\n");
        }
    }
    return 0;
}

