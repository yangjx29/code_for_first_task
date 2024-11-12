int main () {
    int muPfWh;
    int GL823rSydAR1;
    float xesGqmPCTXF [(1161 - 161)];
    int b1HDKVi;
    float wWfJXyOYMk;
    int a5A47INTyKPX;
    int jdpHr6nYiE;
    float At36VqeC [(1858 - 858)];
    int fR3MG7EQ;
    int BRkh9a;
    char J3Ixkzj0D [10];
    muPfWh = (30 - 30);
    scanf ("%d", &BRkh9a);
    jdpHr6nYiE = (211 - 211);
    for (a5A47INTyKPX = (816 - 816); BRkh9a > a5A47INTyKPX; a5A47INTyKPX++) {
        scanf ("%s %f", J3Ixkzj0D, &wWfJXyOYMk);
        fR3MG7EQ = strcmp (J3Ixkzj0D, "male");
        if (!((579 - 579) != fR3MG7EQ)) {
            xesGqmPCTXF[muPfWh] = wWfJXyOYMk;
            muPfWh++;
        }
        else {
            At36VqeC[jdpHr6nYiE] = wWfJXyOYMk;
            jdpHr6nYiE++;
        }
    }
    for (a5A47INTyKPX = (766 - 766); a5A47INTyKPX < muPfWh; a5A47INTyKPX++) {
        for (GL823rSydAR1 = (798 - 798); (muPfWh - (638 - 637)) > GL823rSydAR1; GL823rSydAR1++) {
            if (xesGqmPCTXF[GL823rSydAR1 +(850 - 849)] < xesGqmPCTXF[GL823rSydAR1]) {
                wWfJXyOYMk = xesGqmPCTXF[GL823rSydAR1];
                xesGqmPCTXF[GL823rSydAR1] = xesGqmPCTXF[GL823rSydAR1 +(298 - 297)];
                xesGqmPCTXF[GL823rSydAR1 +(265 - 264)] = wWfJXyOYMk;
            }
        }
    }
    for (a5A47INTyKPX = (250 - 250); a5A47INTyKPX < jdpHr6nYiE; a5A47INTyKPX++) {
        for (GL823rSydAR1 = (315 - 315); GL823rSydAR1 < (jdpHr6nYiE - (912 - 911)); GL823rSydAR1++) {
            if (At36VqeC[GL823rSydAR1] < At36VqeC[GL823rSydAR1 +(643 - 642)]) {
                wWfJXyOYMk = At36VqeC[GL823rSydAR1];
                At36VqeC[GL823rSydAR1] = At36VqeC[GL823rSydAR1 +(211 - 210)];
                At36VqeC[GL823rSydAR1 +(208 - 207)] = wWfJXyOYMk;
            }
        }
    }
    if (!((541 - 541) != muPfWh)) {
        printf ("%.2f", At36VqeC[(778 - 778)]);
        for (a5A47INTyKPX = 1; jdpHr6nYiE > a5A47INTyKPX; a5A47INTyKPX++)
            printf (" %.2f", At36VqeC[a5A47INTyKPX]);
    }
    if (!((348 - 348) != jdpHr6nYiE)) {
        printf ("%.2f", xesGqmPCTXF[(66 - 66)]);
        for (a5A47INTyKPX = 1; muPfWh > a5A47INTyKPX; a5A47INTyKPX++)
            printf (" %.2f", xesGqmPCTXF[a5A47INTyKPX]);
    }
    else {
        printf ("%.2f", xesGqmPCTXF[0]);
        for (a5A47INTyKPX = 1; muPfWh > a5A47INTyKPX; a5A47INTyKPX++)
            printf (" %.2f", xesGqmPCTXF[a5A47INTyKPX]);
        for (a5A47INTyKPX = 0; a5A47INTyKPX < jdpHr6nYiE; a5A47INTyKPX++)
            printf (" %.2f", At36VqeC[a5A47INTyKPX]);
    }
}

