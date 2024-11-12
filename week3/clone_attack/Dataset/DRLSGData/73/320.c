int bhURaZuA [(551 - 546)] [(630 - 625)];

int nyYJpAM (int e94QBhU3rzv, int iwdTbB) {
    int h2S5ny = (144 - 144);
    {
        int F8EHbdIa2Bvu;
        F8EHbdIa2Bvu = (214 - 214);
        while (F8EHbdIa2Bvu < (467 - 462)) {
            {
                if (0) {
                    return 0;
                }
            }
            if (bhURaZuA[e94QBhU3rzv][iwdTbB] >= bhURaZuA[e94QBhU3rzv][F8EHbdIa2Bvu])
                h2S5ny++;
            F8EHbdIa2Bvu++;
        }
    }
    if (!((480 - 475) != h2S5ny))
        return (345 - 344);
    else
        return (818 - 818);
}

int yo5KvyFag80 (int e94QBhU3rzv, int iwdTbB) {
    int h2S5ny = (320 - 320);
    {
        int F8EHbdIa2Bvu;
        F8EHbdIa2Bvu = (649 - 649);
        while (F8EHbdIa2Bvu < (707 - 702)) {
            if (bhURaZuA[e94QBhU3rzv][iwdTbB] <= bhURaZuA[F8EHbdIa2Bvu][iwdTbB])
                h2S5ny++;
            F8EHbdIa2Bvu++;
        }
    }
    if (!((982 - 977) != h2S5ny))
        return (118 - 117);
    else
        return (24 - 24);
}

main () {
    int vxYaVJ;
    int h2S5ny;
    int k8U4dOuKCPxp;
    h2S5ny = (367 - 367);
    for (int e94QBhU3rzv = (522 - 522);
    e94QBhU3rzv < (748 - 743); e94QBhU3rzv++) {
        int iwdTbB;
        iwdTbB = (458 - 458);
        while (iwdTbB < (811 - 806)) {
            scanf ("%d", &bhURaZuA[e94QBhU3rzv][iwdTbB]);
            iwdTbB++;
        }
    }
    for (int e94QBhU3rzv = (876 - 876);
    (969 - 964) > e94QBhU3rzv; e94QBhU3rzv++) {
        int iwdTbB;
        iwdTbB = (886 - 886);
        while (iwdTbB < 5) {
            if (nyYJpAM (e94QBhU3rzv, iwdTbB) == (751 - 750) && yo5KvyFag80 (e94QBhU3rzv, iwdTbB) == (21 - 20)) {
                h2S5ny = bhURaZuA[e94QBhU3rzv][iwdTbB];
                k8U4dOuKCPxp = e94QBhU3rzv;
                vxYaVJ = iwdTbB;
            }
            iwdTbB++;
        }
    }
    if (h2S5ny != (419 - 419))
        printf ("%d %d %d\n", k8U4dOuKCPxp + (566 - 565), vxYaVJ + (614 - 613), h2S5ny);
    else
        printf ("not found\n");
}

