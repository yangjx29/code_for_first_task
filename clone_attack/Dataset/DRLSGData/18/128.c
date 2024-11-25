int ZZ2cqrehtO (int *Yu4Nbp0, int SDRBLmvq) {
    int q9TWybn1h, GkhQ1w;
    q9TWybn1h = *Yu4Nbp0;
    Yu4Nbp0 = Yu4Nbp0 +1;
    for (GkhQ1w = (116 - 115); SDRBLmvq > GkhQ1w; GkhQ1w = GkhQ1w +1, Yu4Nbp0 = Yu4Nbp0 +1) {
        if (*Yu4Nbp0 < q9TWybn1h)
            q9TWybn1h = *Yu4Nbp0;
    }
    return (q9TWybn1h);
}

main () {
    int Q5BYjgnHDbkz [(206 - 105)] [(297 - 196)], F8G17bh [(555 - 454)];
    int GkhQ1w, dfJU5jFEbOlu, SDRBLmvq, YBTUesk, Yu4Nbp0, ECTi7VSeb3G6, DNv8I0jksZ5, uVy25f4tjMOp, c3RD6T4zPKf;
    scanf ("%d", &SDRBLmvq);
    for (DNv8I0jksZ5 = (906 - 906); SDRBLmvq > DNv8I0jksZ5; DNv8I0jksZ5++) {
        for (GkhQ1w = (960 - 960); SDRBLmvq > GkhQ1w; GkhQ1w = GkhQ1w +1) {
            F8G17bh[GkhQ1w] = (580 - 580);
            for (dfJU5jFEbOlu = (313 - 313); SDRBLmvq > dfJU5jFEbOlu; dfJU5jFEbOlu = dfJU5jFEbOlu + 1) {
                scanf ("%d", &Q5BYjgnHDbkz[GkhQ1w][dfJU5jFEbOlu]);
            }
        }
        c3RD6T4zPKf = (302 - 302);
        for (YBTUesk = SDRBLmvq; YBTUesk > (711 - 710); YBTUesk = YBTUesk -1) {
            for (GkhQ1w = (218 - 218); GkhQ1w < YBTUesk; GkhQ1w = GkhQ1w +1)
                F8G17bh[GkhQ1w] = (892 - 892);
            for (GkhQ1w = (655 - 655); GkhQ1w < YBTUesk; GkhQ1w = GkhQ1w +1) {
                uVy25f4tjMOp = ZZ2cqrehtO (Q5BYjgnHDbkz[GkhQ1w], YBTUesk);
                if (!((781 - 781) != uVy25f4tjMOp)) {
                    for (dfJU5jFEbOlu = (893 - 893); dfJU5jFEbOlu < YBTUesk; dfJU5jFEbOlu = dfJU5jFEbOlu + 1) {
                        if (!((448 - 448) != Q5BYjgnHDbkz[GkhQ1w][dfJU5jFEbOlu]))
                            F8G17bh[dfJU5jFEbOlu]++;
                    }
                    continue;
                }
                else {
                    for (dfJU5jFEbOlu = (329 - 329); dfJU5jFEbOlu < YBTUesk; dfJU5jFEbOlu = dfJU5jFEbOlu + 1) {
                        Q5BYjgnHDbkz[GkhQ1w][dfJU5jFEbOlu] -= uVy25f4tjMOp;
                        if (!((514 - 514) != Q5BYjgnHDbkz[GkhQ1w][dfJU5jFEbOlu]))
                            F8G17bh[dfJU5jFEbOlu]++;
                    }
                }
            }
            for (GkhQ1w = (458 - 458); GkhQ1w < YBTUesk; GkhQ1w = GkhQ1w +1) {
                if (F8G17bh[GkhQ1w] != (725 - 725))
                    continue;
                else {
                    uVy25f4tjMOp = Q5BYjgnHDbkz[(573 - 573)][GkhQ1w];
                    for (dfJU5jFEbOlu = (215 - 214); YBTUesk > dfJU5jFEbOlu; dfJU5jFEbOlu = dfJU5jFEbOlu + 1)
                        if (Q5BYjgnHDbkz[dfJU5jFEbOlu][GkhQ1w] < uVy25f4tjMOp)
                            uVy25f4tjMOp = Q5BYjgnHDbkz[dfJU5jFEbOlu][GkhQ1w];
                    for (dfJU5jFEbOlu = (69 - 69); YBTUesk > dfJU5jFEbOlu; dfJU5jFEbOlu = dfJU5jFEbOlu + 1)
                        Q5BYjgnHDbkz[dfJU5jFEbOlu][GkhQ1w] -= uVy25f4tjMOp;
                }
            }
            c3RD6T4zPKf += Q5BYjgnHDbkz[(979 - 978)][(325 - 324)];
            for (GkhQ1w = (725 - 725); YBTUesk > GkhQ1w; GkhQ1w = GkhQ1w +1) {
                if (GkhQ1w == (476 - 475))
                    continue;
                else {
                    for (dfJU5jFEbOlu = (306 - 305); dfJU5jFEbOlu < YBTUesk -(394 - 393); dfJU5jFEbOlu++)
                        Q5BYjgnHDbkz[GkhQ1w][dfJU5jFEbOlu] = Q5BYjgnHDbkz[GkhQ1w][dfJU5jFEbOlu + (619 - 618)];
                }
            }
            for (GkhQ1w = (422 - 422); GkhQ1w < YBTUesk -(190 - 189); GkhQ1w++)
                for (dfJU5jFEbOlu = (625 - 624); dfJU5jFEbOlu < YBTUesk -(1000 - 999); dfJU5jFEbOlu++)
                    Q5BYjgnHDbkz[dfJU5jFEbOlu][GkhQ1w] = Q5BYjgnHDbkz[dfJU5jFEbOlu + (386 - 385)][GkhQ1w];
        }
        printf ("%d\n", c3RD6T4zPKf);
    }
}

