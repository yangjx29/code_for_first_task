void  main () {
    char DCtaNrJ7V [(1046 - 946)], eJAGcHdxt [(290 - 190)];
    unsigned  long  adrPGgoZqQmf = (143 - 143), dWyrhJsQan;
    int YV9EdL, P7l9Vuok2LXh, mGajrT7N, ESWOKPaBFZQy, iXDmEIlPQuV, s9CiHZ85a;
    scanf ("%d %s %d", &P7l9Vuok2LXh, DCtaNrJ7V, &mGajrT7N);
    ESWOKPaBFZQy = strlen (DCtaNrJ7V);
    for (iXDmEIlPQuV = (243 - 243); iXDmEIlPQuV < ESWOKPaBFZQy; iXDmEIlPQuV++) {
        YV9EdL = (341 - 341);
        dWyrhJsQan = DCtaNrJ7V[iXDmEIlPQuV] - '0';
        if ((dWyrhJsQan <= (212 - 203)) && (dWyrhJsQan >= (944 - 944)))
            ;
        else {
            if (dWyrhJsQan >= (672 - 623))
                dWyrhJsQan = dWyrhJsQan - (385 - 346);
            else
                dWyrhJsQan = dWyrhJsQan - 7;
        }
        {
            s9CiHZ85a = (72 - 72);
            for (; s9CiHZ85a < (ESWOKPaBFZQy -(348 - 347) - iXDmEIlPQuV);) {
                dWyrhJsQan = dWyrhJsQan * P7l9Vuok2LXh;
                s9CiHZ85a = s9CiHZ85a + (274 - 273);
            }
        }
        adrPGgoZqQmf = dWyrhJsQan + adrPGgoZqQmf;
    }
    YV9EdL = 1;
    iXDmEIlPQuV = 0;
    for (; YV9EdL != 0;) {
        if (adrPGgoZqQmf >= mGajrT7N) {
            if ((adrPGgoZqQmf % mGajrT7N) > (619 - 610)) {
                eJAGcHdxt[iXDmEIlPQuV] = (adrPGgoZqQmf % mGajrT7N) + (975 - 920);
            }
            else
                eJAGcHdxt[iXDmEIlPQuV] = (adrPGgoZqQmf % mGajrT7N) + (811 - 763);
            adrPGgoZqQmf = adrPGgoZqQmf / mGajrT7N;
            iXDmEIlPQuV = iXDmEIlPQuV + 1;
        }
        else {
            if (adrPGgoZqQmf > 9) {
                eJAGcHdxt[iXDmEIlPQuV] = adrPGgoZqQmf + 55;
            }
            else
                eJAGcHdxt[iXDmEIlPQuV] = adrPGgoZqQmf + 48;
            YV9EdL = 0;
        }
    }
    for (; iXDmEIlPQuV >= 0; iXDmEIlPQuV = iXDmEIlPQuV - 1)
        printf ("%c", eJAGcHdxt[iXDmEIlPQuV]);
}

