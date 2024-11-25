void  main () {
    int I6vewrRxPKl, trncoX6kY, zZnytN4SIi, z8DQFy7XH = (962 - 961);
    float nWT6Pz0Cb [(1218 - 818)], qu6DtosXR [(852 - 452)], KAE6mKwIOJ, UTKhpxe7k = (532 - 532), max = (845 - 845), VF5VoNeSzBdI;
    scanf ("%d", &I6vewrRxPKl);
    {
        trncoX6kY = (449 - 449);
        while (I6vewrRxPKl > trncoX6kY) {
            scanf ("%f", &nWT6Pz0Cb[trncoX6kY]);
            trncoX6kY = trncoX6kY + (338 - 337);
        }
    }
    for (trncoX6kY = 0; I6vewrRxPKl -1 > trncoX6kY; trncoX6kY = trncoX6kY + 1)
        for (zZnytN4SIi = 0; I6vewrRxPKl -1 - trncoX6kY > zZnytN4SIi; zZnytN4SIi = zZnytN4SIi + 1)
            if (nWT6Pz0Cb[zZnytN4SIi + 1] < nWT6Pz0Cb[zZnytN4SIi]) {
                VF5VoNeSzBdI = nWT6Pz0Cb[zZnytN4SIi];
                nWT6Pz0Cb[zZnytN4SIi] = nWT6Pz0Cb[zZnytN4SIi + 1];
                nWT6Pz0Cb[zZnytN4SIi + 1] = VF5VoNeSzBdI;
            }
    for (trncoX6kY = 0; trncoX6kY < I6vewrRxPKl; trncoX6kY = trncoX6kY + 1)
        UTKhpxe7k = UTKhpxe7k +nWT6Pz0Cb[trncoX6kY];
    KAE6mKwIOJ = UTKhpxe7k / I6vewrRxPKl;
    for (trncoX6kY = 0; trncoX6kY < I6vewrRxPKl; trncoX6kY = trncoX6kY + 1) {
        if (nWT6Pz0Cb[trncoX6kY] >= KAE6mKwIOJ)
            qu6DtosXR[trncoX6kY] = nWT6Pz0Cb[trncoX6kY] - KAE6mKwIOJ;
        else
            qu6DtosXR[trncoX6kY] = KAE6mKwIOJ -nWT6Pz0Cb[trncoX6kY];
        max = (max > qu6DtosXR[trncoX6kY]) ? max : qu6DtosXR[trncoX6kY];
    }
    for (trncoX6kY = 0; trncoX6kY < I6vewrRxPKl; trncoX6kY = trncoX6kY + 1)
        if (qu6DtosXR[trncoX6kY] == max) {
            if (z8DQFy7XH) {
                printf ("%.0f", nWT6Pz0Cb[trncoX6kY]);
                z8DQFy7XH = 0;
            }
            else
                printf (",%.0f", nWT6Pz0Cb[trncoX6kY]);
        }
}

