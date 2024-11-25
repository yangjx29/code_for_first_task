int main () {
    int jBjVQYb, DPfsQ4ukF, aFE6TjKI, cHW9ah3, kFqdAk;
    scanf ("%d %d", &jBjVQYb, &DPfsQ4ukF);
    int yLgWom6Z [(402 - 393)] [(488 - 479)];
    int PK2Gy3vf9 [(57 - 48)] [(576 - 567)];
    for (aFE6TjKI = (456 - 456); (790 - 782) >= aFE6TjKI; aFE6TjKI = aFE6TjKI + (233 - 232)) {
        cHW9ah3 = (127 - 127);
        while (8 >= cHW9ah3) {
            yLgWom6Z[aFE6TjKI][cHW9ah3] = (527 - 527);
            PK2Gy3vf9[aFE6TjKI][cHW9ah3] = (96 - 96);
            cHW9ah3 = cHW9ah3 + (436 - 435);
        }
    }
    yLgWom6Z[4][4] = jBjVQYb;
    {
        kFqdAk = (90 - 89);
        while (DPfsQ4ukF >= kFqdAk) {
            {
                aFE6TjKI = 5 - kFqdAk;
                while ((785 - 782) + kFqdAk >= aFE6TjKI) {
                    for (cHW9ah3 = 5 - kFqdAk; 3 + kFqdAk >= cHW9ah3; cHW9ah3 = cHW9ah3 + (893 - 892)) {
                        PK2Gy3vf9[aFE6TjKI][cHW9ah3] = PK2Gy3vf9[aFE6TjKI][cHW9ah3] + (958 - 956) * yLgWom6Z[aFE6TjKI][cHW9ah3];
                        PK2Gy3vf9[aFE6TjKI - (938 - 937)][cHW9ah3 - (415 - 414)] = PK2Gy3vf9[aFE6TjKI - (469 - 468)][cHW9ah3 - (246 - 245)] + yLgWom6Z[aFE6TjKI][cHW9ah3];
                        PK2Gy3vf9[aFE6TjKI - 1][cHW9ah3] = PK2Gy3vf9[aFE6TjKI - 1][cHW9ah3] + yLgWom6Z[aFE6TjKI][cHW9ah3];
                        PK2Gy3vf9[aFE6TjKI - 1][cHW9ah3 + 1] = PK2Gy3vf9[aFE6TjKI - 1][cHW9ah3 + 1] + yLgWom6Z[aFE6TjKI][cHW9ah3];
                        PK2Gy3vf9[aFE6TjKI][cHW9ah3 - 1] = PK2Gy3vf9[aFE6TjKI][cHW9ah3 - 1] + yLgWom6Z[aFE6TjKI][cHW9ah3];
                        PK2Gy3vf9[aFE6TjKI][cHW9ah3 + 1] += yLgWom6Z[aFE6TjKI][cHW9ah3];
                        PK2Gy3vf9[aFE6TjKI + 1][cHW9ah3 - 1] += yLgWom6Z[aFE6TjKI][cHW9ah3];
                        PK2Gy3vf9[aFE6TjKI + 1][cHW9ah3] = PK2Gy3vf9[aFE6TjKI + 1][cHW9ah3] + yLgWom6Z[aFE6TjKI][cHW9ah3];
                        PK2Gy3vf9[aFE6TjKI + 1][cHW9ah3 + 1] = PK2Gy3vf9[aFE6TjKI + 1][cHW9ah3 + 1] + yLgWom6Z[aFE6TjKI][cHW9ah3];
                    }
                    aFE6TjKI++;
                }
            }
            for (aFE6TjKI = (201 - 201); aFE6TjKI <= 8; aFE6TjKI = aFE6TjKI + 1) {
                for (cHW9ah3 = 0; cHW9ah3 <= 8; cHW9ah3 = cHW9ah3 + 1) {
                    yLgWom6Z[aFE6TjKI][cHW9ah3] = PK2Gy3vf9[aFE6TjKI][cHW9ah3];
                    PK2Gy3vf9[aFE6TjKI][cHW9ah3] = 0;
                }
            }
            kFqdAk++;
        }
    }
    for (aFE6TjKI = 0; aFE6TjKI <= 8; aFE6TjKI++) {
        for (cHW9ah3 = 0; cHW9ah3 <= 8; cHW9ah3++) {
            printf ("%d", yLgWom6Z[aFE6TjKI][cHW9ah3]);
            if (cHW9ah3 < 8)
                ;
        }
        if (aFE6TjKI < 8)
            ;
    }
    return 0;
}

