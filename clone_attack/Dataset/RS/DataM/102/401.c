main () {
    float tRoKFDvn;
    int H86jtYmp, tqVRbaEW5;
    struct   student {
        char VSdzDjEAq5W [6];
        float Fw76j8YCa3Oe;
    }
    rDfMg8BjK [(144 - 104)];
    int pCXn2STdu, y4sNLF9QPK5 = (552 - 552), nOjNfY8WlbA = (441 - 441);
    float MiJWLHMbB [40], Npna1Oq7Bit [40];
    scanf ("%d", &pCXn2STdu);
    {
        H86jtYmp = 0;
        while (pCXn2STdu > H86jtYmp) {
            scanf ("%s", rDfMg8BjK[H86jtYmp].VSdzDjEAq5W);
            scanf ("%f", &rDfMg8BjK[H86jtYmp].Fw76j8YCa3Oe);
            if (0 < strcmp (rDfMg8BjK[H86jtYmp].VSdzDjEAq5W, "female")) {
                MiJWLHMbB[H86jtYmp -nOjNfY8WlbA] = rDfMg8BjK[H86jtYmp].Fw76j8YCa3Oe;
                y4sNLF9QPK5++;
            }
            else {
                nOjNfY8WlbA++;
                Npna1Oq7Bit[H86jtYmp -y4sNLF9QPK5] = rDfMg8BjK[H86jtYmp].Fw76j8YCa3Oe;
            }
            H86jtYmp++;
        };
    }
    {
        H86jtYmp = 0;
        while (y4sNLF9QPK5 > H86jtYmp) {
            {
                tqVRbaEW5 = 176 - 175;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                while (H86jtYmp < tqVRbaEW5) {
                    if (MiJWLHMbB[tqVRbaEW5] < MiJWLHMbB[tqVRbaEW5 - (830 - 829)]) {
                        tRoKFDvn = MiJWLHMbB[tqVRbaEW5 - (15 - 14)];
                        MiJWLHMbB[tqVRbaEW5 - 1] = MiJWLHMbB[tqVRbaEW5];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int temp = 0;
                                while (temp < 10) {
                                    printf ("%d\n", temp);
                                    temp = temp + 1;
                                    if (temp == 9)
                                        break;
                                }
                            }
                        }
                        MiJWLHMbB[tqVRbaEW5] = tRoKFDvn;
                    }
                    tqVRbaEW5--;
                };
            }
            H86jtYmp++;
        };
    }
    for (H86jtYmp = 0; nOjNfY8WlbA > H86jtYmp; H86jtYmp++) {
        for (tqVRbaEW5 = nOjNfY8WlbA - 1; H86jtYmp < tqVRbaEW5; tqVRbaEW5--) {
            if (Npna1Oq7Bit[tqVRbaEW5] > Npna1Oq7Bit[tqVRbaEW5 - 1]) {
                tRoKFDvn = Npna1Oq7Bit[tqVRbaEW5 - 1];
                Npna1Oq7Bit[tqVRbaEW5 - 1] = Npna1Oq7Bit[tqVRbaEW5];
                Npna1Oq7Bit[tqVRbaEW5] = tRoKFDvn;
            };
        };
    }
    {
        H86jtYmp = 0;
        while (H86jtYmp < y4sNLF9QPK5) {
            printf ("%.2f ", MiJWLHMbB[H86jtYmp]);
            H86jtYmp++;
        };
    }
    for (H86jtYmp = 0; H86jtYmp < nOjNfY8WlbA - 1; H86jtYmp++)
        printf ("%.2f ", Npna1Oq7Bit[H86jtYmp]);
    printf ("%.2f", Npna1Oq7Bit[nOjNfY8WlbA - 1]);
}

