void  main () {
    int Y6J7vRrZ2;
    int rSAVyDnU;
    char PViv2h1Y [(950 - 750)] = {(640 - 640)};
    gets (PViv2h1Y);
    int H6FtIOT;
    char s9Kci1 [(1046 - 946)] [100] = {(64 - 64)};
    int C5dvbp37nuIk;
    int QNn1bJaXdqrU;
    H6FtIOT = strlen (PViv2h1Y);
    C5dvbp37nuIk = (480 - 480);
    rSAVyDnU = 0;
    for (Y6J7vRrZ2 = 0; Y6J7vRrZ2 < H6FtIOT; Y6J7vRrZ2++) {
        if (Y6J7vRrZ2 == H6FtIOT -(541 - 540)) {
            for (QNn1bJaXdqrU = Y6J7vRrZ2 -C5dvbp37nuIk; QNn1bJaXdqrU <= Y6J7vRrZ2; QNn1bJaXdqrU++)
                s9Kci1[rSAVyDnU][QNn1bJaXdqrU +C5dvbp37nuIk-Y6J7vRrZ2] = PViv2h1Y[QNn1bJaXdqrU];
            C5dvbp37nuIk = 0;
            rSAVyDnU = rSAVyDnU + (202 - 201);
        }
        else {
            if (PViv2h1Y[Y6J7vRrZ2] != 32) {
                C5dvbp37nuIk = C5dvbp37nuIk +1;
            }
            else {
                for (QNn1bJaXdqrU = Y6J7vRrZ2 -C5dvbp37nuIk; QNn1bJaXdqrU < Y6J7vRrZ2; QNn1bJaXdqrU++)
                    s9Kci1[rSAVyDnU][QNn1bJaXdqrU +C5dvbp37nuIk-Y6J7vRrZ2] = PViv2h1Y[QNn1bJaXdqrU];
                rSAVyDnU = rSAVyDnU + 1;
                C5dvbp37nuIk = 0;
            }
        }
    }
    printf ("%s", s9Kci1[rSAVyDnU - 1]);
    for (Y6J7vRrZ2 = rSAVyDnU - 2; Y6J7vRrZ2 >= 0; Y6J7vRrZ2--)
        printf (" %s", s9Kci1[Y6J7vRrZ2]);
}

