int hs (int iBilu2krKd5G, int vFGeo2);

int main () {
    int cCjAtshR;
    int vFGeo2;
    int iBilu2krKd5G;
    int kkc4qN27l [(346 - 341)];
    int xGN3jAJoE [(680 - 675)] [(115 - 110)];
    int NtiVLk;
    {
        NtiVLk = (879 - 879);
        while ((264 - 259) > NtiVLk) {
            {
                cCjAtshR = (390 - 390);
                while (cCjAtshR < (623 - 618)) {
                    scanf ("%d", &xGN3jAJoE[NtiVLk][cCjAtshR]);
                    cCjAtshR = cCjAtshR + (210 - 209);
                }
            }
            NtiVLk = NtiVLk +(471 - 470);
        }
    }
    scanf ("%d %d", &iBilu2krKd5G, &vFGeo2);
    if (hs (iBilu2krKd5G, vFGeo2)) {
        {
            NtiVLk = (42 - 42);
            while (NtiVLk < (390 - 385)) {
                kkc4qN27l[NtiVLk] = xGN3jAJoE[iBilu2krKd5G][NtiVLk];
                xGN3jAJoE[iBilu2krKd5G][NtiVLk] = xGN3jAJoE[vFGeo2][NtiVLk];
                xGN3jAJoE[vFGeo2][NtiVLk] = kkc4qN27l[NtiVLk];
                NtiVLk = NtiVLk +1;
            }
        }
        {
            NtiVLk = (290 - 290);
            while (NtiVLk < 5) {
                {
                    cCjAtshR = (162 - 162);
                    while ((994 - 990) > cCjAtshR) {
                        printf ("%d ", xGN3jAJoE[NtiVLk][cCjAtshR]);
                        cCjAtshR++;
                    }
                }
                printf ("%d", xGN3jAJoE[NtiVLk][(555 - 551)]);
                NtiVLk = NtiVLk +1;
                printf ("\n");
            }
        }
    }
    else {
        printf ("error");
    }
}

int hs (int iBilu2krKd5G, int vFGeo2) {
    if ((858 - 858) <= iBilu2krKd5G && iBilu2krKd5G < 5 && vFGeo2 > 0 && vFGeo2 < 5) {
        return (572 - 571);
    }
    else {
        return 0;
    }
}

