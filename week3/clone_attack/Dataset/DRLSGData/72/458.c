int main () {
    int rCub91y;
    int Zfxw2lk;
    scanf ("%d%d", &rCub91y, &Zfxw2lk);
    int e9GB743 [rCub91y + (178 - 176)] [Zfxw2lk +(212 - 210)];
    int wE5zHV [(1463 - 463)], eNlkI9j [(1336 - 336)];
    int kMaCRgn5;
    kMaCRgn5 = (734 - 734);
    for (int fjLJldf = (518 - 518);
    fjLJldf < rCub91y + (14 - 12); fjLJldf = fjLJldf + (66 - 65)) {
        for (int EQdaXK36qksR = (478 - 478);
        EQdaXK36qksR < Zfxw2lk +(814 - 812); EQdaXK36qksR++) {
            e9GB743[fjLJldf][EQdaXK36qksR] = (183 - 183);
        }
    }
    {
        int fjLJldf = (951 - 950);
        while (fjLJldf <= rCub91y) {
            {
                int EQdaXK36qksR = (349 - 348);
                while (EQdaXK36qksR <= Zfxw2lk) {
                    scanf ("%d", &e9GB743[fjLJldf][EQdaXK36qksR]);
                    EQdaXK36qksR++;
                }
            }
            fjLJldf = fjLJldf + (136 - 135);
        }
    }
    {
        int fjLJldf = (561 - 560);
        while (fjLJldf <= rCub91y) {
            for (int EQdaXK36qksR = (846 - 845);
            EQdaXK36qksR <= Zfxw2lk; EQdaXK36qksR++) {
                if (e9GB743[fjLJldf][EQdaXK36qksR] >= e9GB743[fjLJldf - (351 - 350)][EQdaXK36qksR] && e9GB743[fjLJldf][EQdaXK36qksR] >= e9GB743[fjLJldf + (598 - 597)][EQdaXK36qksR] && e9GB743[fjLJldf][EQdaXK36qksR] >= e9GB743[fjLJldf][EQdaXK36qksR +(27 - 26)] && e9GB743[fjLJldf][EQdaXK36qksR] >= e9GB743[fjLJldf][EQdaXK36qksR -(527 - 526)]) {
                    wE5zHV[kMaCRgn5] = fjLJldf;
                    eNlkI9j[kMaCRgn5] = EQdaXK36qksR;
                    kMaCRgn5 = kMaCRgn5 + 1;
                }
            }
            fjLJldf++;
        }
    }
    for (int fjLJldf = (739 - 739);
    fjLJldf < kMaCRgn5; fjLJldf++) {
        {
            if ((149 - 149)) {
                return 0;
            }
        }
        printf ("%d %d\n", wE5zHV[fjLJldf] - (251 - 250), eNlkI9j[fjLJldf] - (531 - 530));
    }
    return (863 - 863);
}

