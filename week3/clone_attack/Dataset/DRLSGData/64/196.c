int main () {
    int V6SmFN0qE1, gT2IC69GSjD0, aePjqDXQB, OgkJISwBM = (649 - 649);
    int FjrZ7O1640D [1000] [3];
    double  nT2C5tZiP [100] [100], SwoLZfQNC4X;
    int IfOxn79J, pqfTJmLW;
    scanf ("%d\n", &IfOxn79J);
    for (int zqVbuf = (640 - 640);
    zqVbuf < IfOxn79J; zqVbuf++) {
        scanf ("%d%d%d", &FjrZ7O1640D[zqVbuf][(984 - 984)], &FjrZ7O1640D[zqVbuf][(448 - 447)], &FjrZ7O1640D[zqVbuf][2]);
    }
    {
        int zqVbuf = 0;
        while (zqVbuf < IfOxn79J -(448 - 447)) {
            for (int gaNxqTM9 = zqVbuf + 1;
            IfOxn79J > gaNxqTM9; gaNxqTM9++) {
                nT2C5tZiP[zqVbuf][gaNxqTM9] = sqrt ((FjrZ7O1640D[zqVbuf][0] - FjrZ7O1640D[gaNxqTM9][0]) * (FjrZ7O1640D[zqVbuf][0] - FjrZ7O1640D[gaNxqTM9][0]) + (FjrZ7O1640D[zqVbuf][1] - FjrZ7O1640D[gaNxqTM9][1]) * (FjrZ7O1640D[zqVbuf][1] - FjrZ7O1640D[gaNxqTM9][1]) + (FjrZ7O1640D[zqVbuf][2] - FjrZ7O1640D[gaNxqTM9][2]) * (FjrZ7O1640D[zqVbuf][2] - FjrZ7O1640D[gaNxqTM9][2]));
            }
            zqVbuf++;
        }
    }
    V6SmFN0qE1 = IfOxn79J *(IfOxn79J -1) / 2;
    {
        int zqVbuf = 0;
        while (zqVbuf < (878 - 869)) {
            if (!(V6SmFN0qE1 != OgkJISwBM)) {
                break;
            }
            {
                int gaNxqTM9 = zqVbuf + 1;
                while ((825 - 815) > gaNxqTM9) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (nT2C5tZiP[zqVbuf][gaNxqTM9] > SwoLZfQNC4X) {
                        SwoLZfQNC4X = nT2C5tZiP[zqVbuf][gaNxqTM9];
                        aePjqDXQB = gaNxqTM9;
                        gT2IC69GSjD0 = zqVbuf;
                    }
                    if (zqVbuf == 8 && gaNxqTM9 == 9) {
                        zqVbuf = -1;
                        OgkJISwBM++;
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", FjrZ7O1640D[gT2IC69GSjD0][0], FjrZ7O1640D[gT2IC69GSjD0][1], FjrZ7O1640D[gT2IC69GSjD0][2], FjrZ7O1640D[aePjqDXQB][0], FjrZ7O1640D[aePjqDXQB][1], FjrZ7O1640D[aePjqDXQB][2], SwoLZfQNC4X);
                        SwoLZfQNC4X = 0;
                        nT2C5tZiP[gT2IC69GSjD0][aePjqDXQB] = 0;
                    }
                    gaNxqTM9++;
                }
            }
            zqVbuf++;
        }
    }
    return 0;
}

