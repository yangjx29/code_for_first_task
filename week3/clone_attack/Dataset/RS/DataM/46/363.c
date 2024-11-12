int main () {
    int i, j, lvH2SNa, NJhZPMmRXY;
    int hE1vgmX [100] [100];
    int row, DIJs0Mo;
    scanf ("%d%d", &row, &DIJs0Mo);
    for (i = 0; i < row; i++) {
        for (j = 0; j < DIJs0Mo; j = j + 1) {
            scanf ("%d", &hE1vgmX[i][j]);
        };
    }
    lvH2SNa = 0;
    for (NJhZPMmRXY = 0;; NJhZPMmRXY++) {
        {
            i = NJhZPMmRXY;
            while (i < DIJs0Mo -NJhZPMmRXY) {
                lvH2SNa = lvH2SNa + 1;
                printf ("%d\n", hE1vgmX[NJhZPMmRXY][i]);
                i = i + 1;
            };
        }
        for (j = NJhZPMmRXY +1; j < row - NJhZPMmRXY; j = j + 1) {
            lvH2SNa++;
            printf ("%d\n", hE1vgmX[j][DIJs0Mo -NJhZPMmRXY-1]);
        }
        if (lvH2SNa == row * DIJs0Mo)
            break;
        for (i = DIJs0Mo -2 - NJhZPMmRXY; i >= NJhZPMmRXY; i--) {
            printf ("%d\n", hE1vgmX[row - NJhZPMmRXY -1][i]);
            lvH2SNa++;
        }
        for (j = row - 2 - NJhZPMmRXY; j > NJhZPMmRXY; j--) {
            lvH2SNa++;
            printf ("%d\n", hE1vgmX[j][NJhZPMmRXY]);
        };
    }
    return 0;
}

