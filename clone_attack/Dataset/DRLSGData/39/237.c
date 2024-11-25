void  main () {
    char xW1iegISZU [(224 - 74)] [(668 - 648)] = {'0'}, F9dunQc3WyrX [(344 - 194)] = {'0'}, ZBbQipI [(1134 - 984)] = {'0'};
    int J598XYh, MBzKT9PHcrmA = (463 - 463), drtnL0PO, A5WgsbXCRtl, iN6P8q0wUucj [150], w5clXbhOpTv2 [150], iOpsqY9Nzyjg [150], grhJBA83Z [150] = {(249 - 249)}, q6hDsAHx4 = (434 - 434);
    scanf ("%d", &A5WgsbXCRtl);
    for (J598XYh = (824 - 824); A5WgsbXCRtl > J598XYh; J598XYh = J598XYh +(268 - 267)) {
        scanf ("%s %d %d %s %s %d", xW1iegISZU[J598XYh], &iN6P8q0wUucj[J598XYh], &w5clXbhOpTv2[J598XYh], &F9dunQc3WyrX[J598XYh], &ZBbQipI[J598XYh], &iOpsqY9Nzyjg[J598XYh]);
    }
    for (J598XYh = 0; A5WgsbXCRtl > J598XYh; J598XYh = J598XYh +1) {
        if (iN6P8q0wUucj[J598XYh] > (811 - 731) && 1 <= iOpsqY9Nzyjg[J598XYh]) {
            grhJBA83Z[J598XYh] = grhJBA83Z[J598XYh] + (8582 - 582);
        }
        if (iN6P8q0wUucj[J598XYh] > (669 - 584) && w5clXbhOpTv2[J598XYh] > 80) {
            grhJBA83Z[J598XYh] = grhJBA83Z[J598XYh] + (4953 - 953);
        }
        if ((440 - 350) < iN6P8q0wUucj[J598XYh]) {
            grhJBA83Z[J598XYh] = grhJBA83Z[J598XYh] + 2000;
        }
        if (iN6P8q0wUucj[J598XYh] > 85 && (int) (ZBbQipI[J598XYh]) == 89) {
            grhJBA83Z[J598XYh] = grhJBA83Z[J598XYh] + (1849 - 849);
        }
        if (w5clXbhOpTv2[J598XYh] > 80 && (int) (F9dunQc3WyrX[J598XYh]) == 89) {
            grhJBA83Z[J598XYh] = grhJBA83Z[J598XYh] + 850;
        }
    }
    for (J598XYh = 0; J598XYh < A5WgsbXCRtl; J598XYh = J598XYh +1) {
        q6hDsAHx4 = q6hDsAHx4 + grhJBA83Z[J598XYh];
    }
    drtnL0PO = grhJBA83Z[0];
    for (J598XYh = 0; J598XYh < A5WgsbXCRtl; J598XYh++) {
        if (grhJBA83Z[J598XYh] > drtnL0PO) {
            drtnL0PO = grhJBA83Z[J598XYh];
            MBzKT9PHcrmA = J598XYh;
        }
    }
    printf ("%s\n%d\n", xW1iegISZU[MBzKT9PHcrmA], grhJBA83Z[MBzKT9PHcrmA]);
    printf ("%d\n", q6hDsAHx4);
}

