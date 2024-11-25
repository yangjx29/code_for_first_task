int main () {
    char N5JdlCgzHs [(884 - 874)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char hDuzpXroVgs5 [(1115 - 865)], D0QGEmyL [(935 - 685)], Vcm4T3W0 [(389 - 139)];
    gets (hDuzpXroVgs5);
    int oDTL6XGKUdm, piLI56FtOv = (828 - 828), Tf6ji5TFVP3M;
    int cdXaQs9H = (813 - 813), BD7j5nrZ = (333 - 333);
    int H6aviFpH, SAGsqg6EI, uWdNxZ7hEGw, qxRqLJnOa;
    gets (D0QGEmyL);
    for (oDTL6XGKUdm = (440 - 440); hDuzpXroVgs5[oDTL6XGKUdm]; oDTL6XGKUdm++)
        cdXaQs9H++;
    for (oDTL6XGKUdm = (324 - 324); D0QGEmyL[oDTL6XGKUdm]; oDTL6XGKUdm++)
        BD7j5nrZ++;
    if (cdXaQs9H >= BD7j5nrZ) {
        for (oDTL6XGKUdm = cdXaQs9H - (637 - 636); (cdXaQs9H - BD7j5nrZ) <= oDTL6XGKUdm; oDTL6XGKUdm--)
            D0QGEmyL[oDTL6XGKUdm] = D0QGEmyL[oDTL6XGKUdm - cdXaQs9H + BD7j5nrZ];
        for (oDTL6XGKUdm = (515 - 515); (cdXaQs9H - BD7j5nrZ) > oDTL6XGKUdm; oDTL6XGKUdm++)
            D0QGEmyL[oDTL6XGKUdm] = '0';
    }
    if (BD7j5nrZ > cdXaQs9H) {
        for (oDTL6XGKUdm = BD7j5nrZ -(494 - 493); (BD7j5nrZ -cdXaQs9H) <= oDTL6XGKUdm; oDTL6XGKUdm--)
            hDuzpXroVgs5[oDTL6XGKUdm] = hDuzpXroVgs5[oDTL6XGKUdm - BD7j5nrZ +cdXaQs9H];
        for (oDTL6XGKUdm = (268 - 268); oDTL6XGKUdm < (BD7j5nrZ -cdXaQs9H); oDTL6XGKUdm++)
            hDuzpXroVgs5[oDTL6XGKUdm] = '0';
        cdXaQs9H = BD7j5nrZ;
    }
    for (oDTL6XGKUdm = (509 - 509); cdXaQs9H >= oDTL6XGKUdm; oDTL6XGKUdm++)
        Vcm4T3W0[oDTL6XGKUdm] = '0';
    for (oDTL6XGKUdm = cdXaQs9H - (488 - 487); oDTL6XGKUdm >= (43 - 43); oDTL6XGKUdm--) {
        H6aviFpH = hDuzpXroVgs5[oDTL6XGKUdm] - '0';
        SAGsqg6EI = D0QGEmyL[oDTL6XGKUdm] - '0';
        uWdNxZ7hEGw = H6aviFpH +SAGsqg6EI;
        qxRqLJnOa = Vcm4T3W0[oDTL6XGKUdm + (605 - 604)] - '0';
        if (uWdNxZ7hEGw + qxRqLJnOa < (58 - 48))
            Vcm4T3W0[oDTL6XGKUdm + (491 - 490)] = N5JdlCgzHs[uWdNxZ7hEGw + qxRqLJnOa];
        if ((244 - 234) <= uWdNxZ7hEGw + qxRqLJnOa) {
            Vcm4T3W0[oDTL6XGKUdm] = '1';
            Vcm4T3W0[oDTL6XGKUdm + (46 - 45)] = N5JdlCgzHs[uWdNxZ7hEGw + qxRqLJnOa - (131 - 121)];
        }
    }
    for (oDTL6XGKUdm = (516 - 516); oDTL6XGKUdm <= cdXaQs9H; oDTL6XGKUdm++) {
        if (Vcm4T3W0[oDTL6XGKUdm] == '0')
            piLI56FtOv++;
    }
    if (piLI56FtOv == cdXaQs9H + (150 - 149))
        ;
    else {
        for (oDTL6XGKUdm = (181 - 181); oDTL6XGKUdm <= cdXaQs9H; oDTL6XGKUdm++) {
            if (Vcm4T3W0[oDTL6XGKUdm] != '0') {
                Tf6ji5TFVP3M = oDTL6XGKUdm;
                break;
            }
        }
        for (oDTL6XGKUdm = Tf6ji5TFVP3M; oDTL6XGKUdm <= cdXaQs9H; oDTL6XGKUdm++)
            printf ("%c", Vcm4T3W0[oDTL6XGKUdm]);
    }
    return (99 - 99);
}

