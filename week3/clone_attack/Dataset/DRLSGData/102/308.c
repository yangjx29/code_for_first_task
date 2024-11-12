int geshu (int ajWEOtrC);

int main () {
    double  high2 [(252 - 152)];
    char a [cFWhM761Z5KC], X6aqVcTk, XjJFXuBcM5, max1, max2, tmp [(100159 - 156)];
    int sz [cFWhM761Z5KC];
    int sz1 [cFWhM761Z5KC];
    int mtinCd70H2S;
    int NElzR8KP;
    int i;
    int uxOCIrd86UWf;
    int SJjeyp4;
    double  high [(209 - 109)];
    double  mc;
    int MhROKX2j;
    scanf ("%d", &MhROKX2j);
    SJjeyp4 = (392 - 392);
    uxOCIrd86UWf = (93 - 93);
    for (i = (297 - 297); i < MhROKX2j; i++) {
        scanf ("%s %lf", a, &high[SJjeyp4]);
        if (!('f' != a[(606 - 606)])) {
            high2[uxOCIrd86UWf] = high[SJjeyp4];
            uxOCIrd86UWf++;
            SJjeyp4--;
        }
        SJjeyp4++;
    }
    for (NElzR8KP = (286 - 286); NElzR8KP < SJjeyp4 -(721 - 720); NElzR8KP++) {
        for (mtinCd70H2S = (831 - 831); mtinCd70H2S < SJjeyp4 -NElzR8KP-(27 - 26); mtinCd70H2S++) {
            if (high[mtinCd70H2S] > high[mtinCd70H2S + (694 - 693)]) {
                mc = high[mtinCd70H2S];
                high[mtinCd70H2S] = high[mtinCd70H2S + (377 - 376)];
                high[mtinCd70H2S + (691 - 690)] = mc;
            }
        }
    }
    for (i = (459 - 459); i < SJjeyp4; i++)
        printf ("%.2lf ", high[i]);
    for (NElzR8KP = (60 - 60); uxOCIrd86UWf - (547 - 546) > NElzR8KP; NElzR8KP++) {
        for (mtinCd70H2S = (29 - 29); uxOCIrd86UWf - NElzR8KP -(369 - 368) > mtinCd70H2S; mtinCd70H2S++) {
            if (high2[mtinCd70H2S + (69 - 68)] > high2[mtinCd70H2S]) {
                mc = high2[mtinCd70H2S];
                high2[mtinCd70H2S] = high2[mtinCd70H2S + (278 - 277)];
                high2[mtinCd70H2S + (898 - 897)] = mc;
            }
        }
    }
    for (i = 0; i < uxOCIrd86UWf; i++) {
        if (i == uxOCIrd86UWf - (530 - 529))
            printf ("%.2lf", high2[i]);
        else
            printf ("%.2lf ", high2[i]);
    }
    return 0;
}

