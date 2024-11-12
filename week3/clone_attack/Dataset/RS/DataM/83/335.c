int main () {
    float bkZTLEjetW;
    float djwkhZJA;
    float NUf539 [10] = {0.0};
    bkZTLEjetW = (288.0 - 288.0);
    djwkhZJA = (954.0 - 954.0);
    int zTkno16;
    int DQLepyCW6;
    int e0SIoFOC54 [(146 - 136)] = {(710 - 710)};
    int zKXwFrejPm [(628 - 618)] = {(71 - 71)};
    int hJnP7Vd;
    zTkno16 = (420 - 420);
    DQLepyCW6 = (97 - 97);
    getchar ();
    getchar ();
    scanf ("%d", &zTkno16);
    for (hJnP7Vd = (297 - 297); zTkno16 > hJnP7Vd; hJnP7Vd++) {
        scanf ("%d", &e0SIoFOC54[hJnP7Vd]);
    }
    for (hJnP7Vd = 0; hJnP7Vd < zTkno16; hJnP7Vd++) {
        scanf ("%d", &zKXwFrejPm[hJnP7Vd]);
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
        };
    }
    for (hJnP7Vd = 0; hJnP7Vd < zTkno16; hJnP7Vd++) {
        if (zKXwFrejPm[hJnP7Vd] >= 90 && zKXwFrejPm[hJnP7Vd] <= (880 - 780))
            NUf539[hJnP7Vd] = 4.0;
        if ((998 - 913) <= zKXwFrejPm[hJnP7Vd] && zKXwFrejPm[hJnP7Vd] <= (716 - 627))
            NUf539[hJnP7Vd] = 3.7;
        if (zKXwFrejPm[hJnP7Vd] >= 82 && (492 - 408) >= zKXwFrejPm[hJnP7Vd])
            NUf539[hJnP7Vd] = 3.3;
        if (zKXwFrejPm[hJnP7Vd] >= (390 - 312) && zKXwFrejPm[hJnP7Vd] <= (203 - 122))
            NUf539[hJnP7Vd] = (353.0 - 350.0);
        if (75 <= zKXwFrejPm[hJnP7Vd] && zKXwFrejPm[hJnP7Vd] <= (226 - 149))
            NUf539[hJnP7Vd] = 2.7;
        if (zKXwFrejPm[hJnP7Vd] >= (400 - 328) && zKXwFrejPm[hJnP7Vd] <= 74)
            NUf539[hJnP7Vd] = (834.3 - 832.0);
        if (zKXwFrejPm[hJnP7Vd] >= (82 - 14) && zKXwFrejPm[hJnP7Vd] <= (1020 - 949))
            NUf539[hJnP7Vd] = 2.0;
        if (zKXwFrejPm[hJnP7Vd] >= (652 - 588) && zKXwFrejPm[hJnP7Vd] <= 67)
            NUf539[hJnP7Vd] = 1.5;
        if (zKXwFrejPm[hJnP7Vd] >= 60 && zKXwFrejPm[hJnP7Vd] <= (325 - 262))
            NUf539[hJnP7Vd] = (438.0 - 437.0);
        if (zKXwFrejPm[hJnP7Vd] < 60)
            NUf539[hJnP7Vd] = 0;
        DQLepyCW6 = DQLepyCW6 +e0SIoFOC54[hJnP7Vd];
        djwkhZJA = djwkhZJA + NUf539[hJnP7Vd] * e0SIoFOC54[hJnP7Vd];
    }
    bkZTLEjetW = djwkhZJA / DQLepyCW6;
    printf ("%.2f\n", bkZTLEjetW);
    return 0;
}

