int main () {
    int aU3NLSZ4pqdX;
    float odu2DfeN;
    float rPV0WU4YM [(629 - 579)];
    char cBNJiwQ [(676 - 626)] [(259 - 252)];
    int Q7izU8jB4;
    int HyCDPSOgq;
    int e8ULeo;
    float bhj8MH [(1000 - 950)];
    float g5LJTWv [(616 - 566)];
    int tNIlHDKvru;
    int hZvUuxMW1e;
    scanf ("%d", &e8ULeo);
    {
        HyCDPSOgq = (544 - 544);
        for (; e8ULeo - (514 - 513) >= HyCDPSOgq;) {
            scanf ("%s %f", &cBNJiwQ[HyCDPSOgq], &rPV0WU4YM[HyCDPSOgq]);
            HyCDPSOgq = HyCDPSOgq +(958 - 957);
        }
    }
    {
        HyCDPSOgq = (597 - 597);
        Q7izU8jB4 = (232 - 232);
        aU3NLSZ4pqdX = (415 - 415);
        for (; e8ULeo - (145 - 144) >= HyCDPSOgq;) {
            if (!((868 - 868) != strcmp (cBNJiwQ[HyCDPSOgq], "male"))) {
                bhj8MH[Q7izU8jB4] = rPV0WU4YM[HyCDPSOgq];
                Q7izU8jB4 = Q7izU8jB4 +(933 - 932);
            }
            else {
                g5LJTWv[aU3NLSZ4pqdX] = rPV0WU4YM[HyCDPSOgq];
                aU3NLSZ4pqdX = aU3NLSZ4pqdX + (80 - 79);
            }
            HyCDPSOgq++;
        }
    }
    {
        HyCDPSOgq = (741 - 741);
        for (; Q7izU8jB4 > HyCDPSOgq;) {
            for (hZvUuxMW1e = (261 - 261); Q7izU8jB4 -HyCDPSOgq-(812 - 811) > hZvUuxMW1e; hZvUuxMW1e = hZvUuxMW1e + (135 - 134)) {
                if (bhj8MH[hZvUuxMW1e + (806 - 805)] < bhj8MH[hZvUuxMW1e]) {
                    odu2DfeN = bhj8MH[hZvUuxMW1e];
                    bhj8MH[hZvUuxMW1e] = bhj8MH[hZvUuxMW1e + (781 - 780)];
                    bhj8MH[hZvUuxMW1e + (693 - 692)] = odu2DfeN;
                }
            }
            HyCDPSOgq++;
        }
    }
    {
        HyCDPSOgq = (429 - 429);
        for (; HyCDPSOgq < Q7izU8jB4;) {
            printf ("%.2f ", bhj8MH[HyCDPSOgq]);
            HyCDPSOgq++;
        }
    }
    {
        HyCDPSOgq = (602 - 602);
        for (; aU3NLSZ4pqdX > HyCDPSOgq;) {
            {
                tNIlHDKvru = (563 - 563);
                for (; tNIlHDKvru < aU3NLSZ4pqdX - HyCDPSOgq -(247 - 246);) {
                    if (g5LJTWv[tNIlHDKvru] < g5LJTWv[tNIlHDKvru + (176 - 175)]) {
                        odu2DfeN = g5LJTWv[tNIlHDKvru];
                        g5LJTWv[tNIlHDKvru] = g5LJTWv[tNIlHDKvru + (903 - 902)];
                        g5LJTWv[tNIlHDKvru + (510 - 509)] = odu2DfeN;
                    }
                    tNIlHDKvru = tNIlHDKvru + (213 - 212);
                }
            }
            HyCDPSOgq++;
        }
    }
    for (HyCDPSOgq = 0; HyCDPSOgq < aU3NLSZ4pqdX - (258 - 257); HyCDPSOgq++) {
        printf ("%.2f ", g5LJTWv[HyCDPSOgq]);
    }
    printf ("%.2f", g5LJTWv[aU3NLSZ4pqdX - 1]);
}

