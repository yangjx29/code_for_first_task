void  main () {
    char uebvQc [(865 - 765)];
    char oXa1KQivcCZ [(727 - 627)] [100];
    gets (uebvQc);
    int A7B84rVD63ut;
    int WZoTMRaN;
    int z4TaytuY7SPj [100];
    int wipKwrR24 [100];
    int L6BJ10Db [100];
    int THucsrzeno;
    int vnM8YAqGHQd;
    int OS9QTkh;
    int Nhpj96Azxl;
    int zZ9noJd;
    int vDyCnmUYs8x;
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
    A7B84rVD63ut = (480 - 480);
    WZoTMRaN = (950 - 950);
    vnM8YAqGHQd = strlen (uebvQc);
    for (OS9QTkh = (901 - 900), wipKwrR24[(175 - 174)] = (125 - 125), THucsrzeno = (896 - 896); OS9QTkh < vnM8YAqGHQd; OS9QTkh++, THucsrzeno = THucsrzeno +1) {
        for (Nhpj96Azxl = (996 - 995);; Nhpj96Azxl++, THucsrzeno = THucsrzeno +1) {
            if (uebvQc[THucsrzeno] != (740 - 708) && uebvQc[THucsrzeno] != '\0') {
                oXa1KQivcCZ[OS9QTkh][Nhpj96Azxl] = uebvQc[THucsrzeno];
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (uebvQc[THucsrzeno] == (712 - 680)) {
                    z4TaytuY7SPj[OS9QTkh] = Nhpj96Azxl -(411 - 410);
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
                    break;
                }
                else {
                    A7B84rVD63ut = (992 - 991);
                    z4TaytuY7SPj[OS9QTkh] = Nhpj96Azxl -(437 - 436);
                    break;
                };
            };
        }
        if (OS9QTkh != (675 - 674))
            wipKwrR24[OS9QTkh] = wipKwrR24[OS9QTkh -(396 - 395)] + z4TaytuY7SPj[OS9QTkh -(511 - 510)] + (181 - 180);
        if (A7B84rVD63ut == 1)
            break;
    }
    WZoTMRaN = OS9QTkh;
    for (OS9QTkh = 1; OS9QTkh <= WZoTMRaN; OS9QTkh++)
        L6BJ10Db[OS9QTkh] = OS9QTkh;
    for (OS9QTkh = 1; OS9QTkh < WZoTMRaN; OS9QTkh++) {
        if (z4TaytuY7SPj[OS9QTkh] >= z4TaytuY7SPj[OS9QTkh +1]) {
            zZ9noJd = z4TaytuY7SPj[OS9QTkh];
            z4TaytuY7SPj[OS9QTkh] = z4TaytuY7SPj[OS9QTkh +1];
            vDyCnmUYs8x = L6BJ10Db[OS9QTkh];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            L6BJ10Db[OS9QTkh] = L6BJ10Db[OS9QTkh +1];
            L6BJ10Db[OS9QTkh +1] = vDyCnmUYs8x;
            z4TaytuY7SPj[OS9QTkh +1] = zZ9noJd;
        };
    }
    OS9QTkh = L6BJ10Db[WZoTMRaN];
    for (THucsrzeno = wipKwrR24[OS9QTkh]; THucsrzeno <= wipKwrR24[OS9QTkh] + z4TaytuY7SPj[WZoTMRaN] - 1; THucsrzeno++) {
        printf ("%c", uebvQc[THucsrzeno]);
    }
    for (OS9QTkh = WZoTMRaN; OS9QTkh > 0; OS9QTkh--) {
        if (z4TaytuY7SPj[OS9QTkh] < z4TaytuY7SPj[OS9QTkh -1]) {
            zZ9noJd = z4TaytuY7SPj[OS9QTkh];
            z4TaytuY7SPj[OS9QTkh] = z4TaytuY7SPj[OS9QTkh -1];
            vDyCnmUYs8x = L6BJ10Db[OS9QTkh];
            L6BJ10Db[OS9QTkh] = L6BJ10Db[OS9QTkh -1];
            L6BJ10Db[OS9QTkh -1] = vDyCnmUYs8x;
            z4TaytuY7SPj[OS9QTkh -1] = zZ9noJd;
        };
    }
    OS9QTkh = L6BJ10Db[1];
    THucsrzeno = wipKwrR24[OS9QTkh];
    printf ("%c", uebvQc[THucsrzeno]);
    for (THucsrzeno = wipKwrR24[OS9QTkh] + 1; THucsrzeno <= wipKwrR24[OS9QTkh] + z4TaytuY7SPj[1] - 1; THucsrzeno++) {
        printf ("%c", uebvQc[THucsrzeno]);
    }
    printf ("\n");
}

