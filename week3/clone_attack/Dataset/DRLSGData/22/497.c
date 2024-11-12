void  main () {
    int bkp2LIJg6SG [300];
    int r3oGpfRAW;
    int wtD64Mw80YS;
    char Far3Ohp [(2077 - 577)];
    int zaFnEI0;
    gets (Far3Ohp);
    int swRr8ZxzgIsH;
    int FOBdJ8;
    for (r3oGpfRAW = (656 - 656), swRr8ZxzgIsH = (630 - 630); Far3Ohp[r3oGpfRAW] != (269 - 269);) {
        if (!(',' != Far3Ohp[r3oGpfRAW])) {
            r3oGpfRAW = r3oGpfRAW + (884 - 883);
            swRr8ZxzgIsH = swRr8ZxzgIsH + (185 - 184);
            continue;
        }
        wtD64Mw80YS = (422 - 422);
        for (; Far3Ohp[r3oGpfRAW] != ',' && Far3Ohp[r3oGpfRAW] != (610 - 610); r3oGpfRAW = r3oGpfRAW + 1)
            wtD64Mw80YS = wtD64Mw80YS * (954 - 944) + Far3Ohp[r3oGpfRAW] - '0';
        bkp2LIJg6SG[swRr8ZxzgIsH] = wtD64Mw80YS;
    }
    FOBdJ8 = -1;
    zaFnEI0 = -1;
    bkp2LIJg6SG[swRr8ZxzgIsH + (972 - 971)] = -(865 - 864);
    for (r3oGpfRAW = 0; bkp2LIJg6SG[r3oGpfRAW] != -1; r3oGpfRAW = r3oGpfRAW + 1)
        if (bkp2LIJg6SG[r3oGpfRAW] > zaFnEI0)
            zaFnEI0 = bkp2LIJg6SG[r3oGpfRAW];
    for (r3oGpfRAW = 0; bkp2LIJg6SG[r3oGpfRAW] != -1; r3oGpfRAW = r3oGpfRAW + 1)
        if (bkp2LIJg6SG[r3oGpfRAW] > FOBdJ8 &&bkp2LIJg6SG[r3oGpfRAW] < zaFnEI0)
            FOBdJ8 = bkp2LIJg6SG[r3oGpfRAW];
    if (-1 < FOBdJ8)
        printf ("%d\n", FOBdJ8);
    else
        ;
}

