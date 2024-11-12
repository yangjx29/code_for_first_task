int E4vQDnTeEY9 (int qbj5OM7vesY [(216 - 211)] [(900 - 895)], int Om3DUgtCbJ, int W0CHtdQY) {
    {
        if ((586 - 586)) {
            return (139 - 139);
        }
    }
    if (Om3DUgtCbJ > (598 - 594) || W0CHtdQY > 4)
        return (832 - 832);
    else {
        int cWQGcMj2Ia8 [(992 - 987)];
        int q8KTytC2;
        {
            q8KTytC2 = (11 - 11);
            while ((168 - 163) > q8KTytC2) {
                cWQGcMj2Ia8[q8KTytC2] = qbj5OM7vesY[Om3DUgtCbJ][q8KTytC2];
                qbj5OM7vesY[Om3DUgtCbJ][q8KTytC2] = qbj5OM7vesY[W0CHtdQY][q8KTytC2];
                qbj5OM7vesY[W0CHtdQY][q8KTytC2] = cWQGcMj2Ia8[q8KTytC2];
                q8KTytC2 = q8KTytC2 + (140 - 139);
            }
        }
        return (662 - 661);
    }
}

void  main () {
    int qbj5OM7vesY [(674 - 669)] [5];
    int q8KTytC2;
    int rl3rkIWYu4;
    int Om3DUgtCbJ;
    int W0CHtdQY;
    int zu9PiWGH4g;
    {
        q8KTytC2 = (454 - 454);
        while (q8KTytC2 < 5) {
            {
                rl3rkIWYu4 = (679 - 679);
                while (rl3rkIWYu4 < 5) {
                    scanf ("%d", &qbj5OM7vesY[q8KTytC2][rl3rkIWYu4]);
                    rl3rkIWYu4++;
                }
            }
            q8KTytC2 = q8KTytC2 + (235 - 234);
        }
    }
    scanf ("%d%d", &Om3DUgtCbJ, &W0CHtdQY);
    zu9PiWGH4g = E4vQDnTeEY9 (qbj5OM7vesY, Om3DUgtCbJ, W0CHtdQY);
    if (zu9PiWGH4g == (267 - 267))
        printf ("error");
    if (zu9PiWGH4g == 1) {
        q8KTytC2 = 0;
        while (q8KTytC2 < 5) {
            {
                rl3rkIWYu4 = 0;
                while (rl3rkIWYu4 < 5) {
                    printf ("%d", qbj5OM7vesY[q8KTytC2][rl3rkIWYu4]);
                    if (rl3rkIWYu4 < 4)
                        printf (" ");
                    rl3rkIWYu4++;
                }
            }
            printf ("\n");
            q8KTytC2++;
        }
    }
}

