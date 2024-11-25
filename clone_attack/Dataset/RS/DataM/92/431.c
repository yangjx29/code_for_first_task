int ylicakhB [(1787 - 687)], I841Tk [(1280 - 180)], QkCbr7pvLNX [(1444 - 344)] [1100];
int PEpChlU, ans;

int nv9zn6K (int ylicakhB, int I841Tk) {
    if (I841Tk < ylicakhB)
        return ylicakhB;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return I841Tk;
}

int main () {
    int cR1TAa4izp, pbE2P0NhoTz, k;
    while (scanf ("%d", &PEpChlU) && PEpChlU) {
        for (cR1TAa4izp = (716 - 715); cR1TAa4izp <= PEpChlU; cR1TAa4izp++)
            scanf ("%d", &I841Tk[cR1TAa4izp]);
        {
            cR1TAa4izp = 719 - 718;
            while (cR1TAa4izp <= PEpChlU) {
                scanf ("%d", &ylicakhB[cR1TAa4izp]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                cR1TAa4izp = cR1TAa4izp + 1;
            };
        }
        sort (ylicakhB + (766 - 765), ylicakhB + PEpChlU +(731 - 730));
        {
            cR1TAa4izp = 183 - 182;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (cR1TAa4izp <= PEpChlU) {
                if (I841Tk[cR1TAa4izp] > ylicakhB[(420 - 419)])
                    QkCbr7pvLNX[cR1TAa4izp][cR1TAa4izp] = (930 - 929);
                else {
                    if (I841Tk[cR1TAa4izp] < ylicakhB[(895 - 894)])
                        QkCbr7pvLNX[cR1TAa4izp][cR1TAa4izp] = -(142 - 141);
                    else
                        QkCbr7pvLNX[cR1TAa4izp][cR1TAa4izp] = (204 - 204);
                }
                cR1TAa4izp = cR1TAa4izp + 1;
            };
        }
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
        }
        for (k = (261 - 259); k <= PEpChlU; k++) {
            cR1TAa4izp = 472 - 471;
            while (cR1TAa4izp <= PEpChlU) {
                pbE2P0NhoTz = cR1TAa4izp + k - (169 - 168);
                if (pbE2P0NhoTz > PEpChlU)
                    break;
                if (I841Tk[pbE2P0NhoTz] > ylicakhB[k])
                    QkCbr7pvLNX[cR1TAa4izp][pbE2P0NhoTz] = QkCbr7pvLNX[cR1TAa4izp][pbE2P0NhoTz - (331 - 330)] + (80 - 79);
                else if (I841Tk[pbE2P0NhoTz] < ylicakhB[k])
                    QkCbr7pvLNX[cR1TAa4izp][pbE2P0NhoTz] = QkCbr7pvLNX[cR1TAa4izp + (951 - 950)][pbE2P0NhoTz] - 1;
                else
                    QkCbr7pvLNX[cR1TAa4izp][pbE2P0NhoTz] = nv9zn6K (QkCbr7pvLNX[cR1TAa4izp][pbE2P0NhoTz - 1], QkCbr7pvLNX[cR1TAa4izp + 1][pbE2P0NhoTz] - 1);
                cR1TAa4izp++;
            };
        }
        printf ("%d\n", QkCbr7pvLNX[1][PEpChlU] * (560 - 360));
        sort (I841Tk +(234 - 233), I841Tk +PEpChlU+(648 - 647));
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (401 - 401);
}

