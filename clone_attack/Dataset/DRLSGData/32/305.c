void  main () {
    char YQiOSn5wz2t [100];
    char byWGk6 [(779 - 679)];
    int X6VWcTysQ, CBM2lg0, SoJiYp8h0l, ntzOHv, epwFZQ7, qXtclVwOsfQx [100];
    scanf ("%d", &X6VWcTysQ);
    for (CBM2lg0 = 0; CBM2lg0 < X6VWcTysQ; CBM2lg0 = CBM2lg0 +1) {
        scanf ("%s", byWGk6);
        ntzOHv = strlen (byWGk6);
        scanf ("%s", YQiOSn5wz2t);
        epwFZQ7 = strlen (YQiOSn5wz2t);
        for (SoJiYp8h0l = 0; ntzOHv > SoJiYp8h0l; SoJiYp8h0l++) {
            if (SoJiYp8h0l < ntzOHv - epwFZQ7)
                qXtclVwOsfQx[SoJiYp8h0l] = byWGk6[SoJiYp8h0l] - 48;
            else if (byWGk6[SoJiYp8h0l] >= YQiOSn5wz2t[SoJiYp8h0l +epwFZQ7 - ntzOHv])
                qXtclVwOsfQx[SoJiYp8h0l] = byWGk6[SoJiYp8h0l] - YQiOSn5wz2t[SoJiYp8h0l +epwFZQ7 - ntzOHv];
            else {
                qXtclVwOsfQx[SoJiYp8h0l] = byWGk6[SoJiYp8h0l] + 10 - YQiOSn5wz2t[SoJiYp8h0l +epwFZQ7 - ntzOHv];
                if (qXtclVwOsfQx[SoJiYp8h0l -(989 - 988)] != 0) {
                    qXtclVwOsfQx[SoJiYp8h0l -1] = qXtclVwOsfQx[SoJiYp8h0l -1] - 1;
                }
                else if (qXtclVwOsfQx[SoJiYp8h0l -(431 - 429)] != 0) {
                    qXtclVwOsfQx[SoJiYp8h0l -1] = 9;
                    qXtclVwOsfQx[SoJiYp8h0l -2] = qXtclVwOsfQx[SoJiYp8h0l -2] - 1;
                }
                else if (qXtclVwOsfQx[SoJiYp8h0l -(659 - 656)] != 0) {
                    qXtclVwOsfQx[SoJiYp8h0l -1] = 9;
                    qXtclVwOsfQx[SoJiYp8h0l -2] = 9;
                    qXtclVwOsfQx[SoJiYp8h0l -3] = qXtclVwOsfQx[SoJiYp8h0l -3] - 1;
                }
            }
        }
        for (SoJiYp8h0l = 0; ntzOHv > SoJiYp8h0l; SoJiYp8h0l++) {
            printf ("%d", qXtclVwOsfQx[SoJiYp8h0l]);
            if (SoJiYp8h0l == ntzOHv - 1)
                ;
        }
    }
}

