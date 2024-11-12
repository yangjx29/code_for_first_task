void  main () {
    int qcdHUqs6fkm;
    int j;
    int lLx3KHFlnz;
    int xrMvBwX [(678 - 670)] [(373 - 365)];
    int Gwr0i1oGyht;
    int JEkYGtjw;
    int W3Shb8QTgVm;
    int fUK5Dwr;
    scanf ("%d,%d", &Gwr0i1oGyht, &JEkYGtjw);
    {
        qcdHUqs6fkm = (967 - 967);
        for (; qcdHUqs6fkm < Gwr0i1oGyht;) {
            {
                j = (388 - 388);
                while (j < JEkYGtjw) {
                    scanf ("%d", &xrMvBwX[qcdHUqs6fkm][j]);
                    j++;
                }
            }
            qcdHUqs6fkm++;
        }
    }
    {
        qcdHUqs6fkm = (323 - 323);
        for (; qcdHUqs6fkm < Gwr0i1oGyht;) {
            W3Shb8QTgVm = (905 - 905);
            {
                j = (545 - 545);
                for (; j < JEkYGtjw;) {
                    if (xrMvBwX[qcdHUqs6fkm][j] > W3Shb8QTgVm) {
                        W3Shb8QTgVm = xrMvBwX[qcdHUqs6fkm][j];
                        fUK5Dwr = j;
                    }
                    j++;
                }
            }
            {
                lLx3KHFlnz = (441 - 441);
                for (; lLx3KHFlnz < Gwr0i1oGyht;) {
                    if (xrMvBwX[lLx3KHFlnz][fUK5Dwr] < W3Shb8QTgVm)
                        break;
                    lLx3KHFlnz++;
                }
            }
            if (lLx3KHFlnz == Gwr0i1oGyht) {
                printf ("%d+%d\n", qcdHUqs6fkm, fUK5Dwr);
                break;
            }
            qcdHUqs6fkm++;
        }
    }
    if (qcdHUqs6fkm == Gwr0i1oGyht)
        ;
}

