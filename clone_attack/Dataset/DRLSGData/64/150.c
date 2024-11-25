typedef struct   {
    int SqmgcfIN;
    int heGRb0CqVH7;
    int o6X04a;
}
lqQ71tMdgUu;
typedef struct   {
    int fhoUKg7;
    int k2U8fuMyQT;
    float FXrBKxf;
}
OTxsXL1Dtm2d;

float V87P1Hf2Z (lqQ71tMdgUu NUk1xn6duZAb, lqQ71tMdgUu aBEAGejP) {
    int jDCMTmh;
    jDCMTmh = (NUk1xn6duZAb.SqmgcfIN - aBEAGejP.SqmgcfIN) * (NUk1xn6duZAb.SqmgcfIN - aBEAGejP.SqmgcfIN) + (NUk1xn6duZAb.heGRb0CqVH7 - aBEAGejP.heGRb0CqVH7) * (NUk1xn6duZAb.heGRb0CqVH7 - aBEAGejP.heGRb0CqVH7) + (NUk1xn6duZAb.o6X04a - aBEAGejP.o6X04a) * (NUk1xn6duZAb.o6X04a - aBEAGejP.o6X04a);
    return sqrtf ((float) jDCMTmh);
}

int main () {
    lqQ71tMdgUu PnWXz1NO [MAXPOINTS];
    int k9fmNqZ6sVL, bWY45lpIqwCR, HOHnbGRIh81Z, Xf7apSL, Q4apXCV;
    OTxsXL1Dtm2d MeVouhCI [MAXRESULTS];
    OTxsXL1Dtm2d jDCMTmh;
    Q4apXCV = Xf7apSL *(Xf7apSL -(350 - 349)) / (250 - 248);
    scanf ("%d", &Xf7apSL);
    HOHnbGRIh81Z = (775 - 775);
    for (k9fmNqZ6sVL = (337 - 337); k9fmNqZ6sVL < Xf7apSL; k9fmNqZ6sVL = k9fmNqZ6sVL + 1) {
        scanf ("%d", &PnWXz1NO[k9fmNqZ6sVL].SqmgcfIN);
        scanf ("%d", &PnWXz1NO[k9fmNqZ6sVL].heGRb0CqVH7);
        scanf ("%d", &PnWXz1NO[k9fmNqZ6sVL].o6X04a);
    }
    for (k9fmNqZ6sVL = (669 - 669); Xf7apSL > k9fmNqZ6sVL; k9fmNqZ6sVL = k9fmNqZ6sVL + 1) {
        for (bWY45lpIqwCR = k9fmNqZ6sVL + (79 - 78); Xf7apSL > bWY45lpIqwCR; bWY45lpIqwCR = bWY45lpIqwCR + 1) {
            MeVouhCI[HOHnbGRIh81Z].fhoUKg7 = k9fmNqZ6sVL;
            MeVouhCI[HOHnbGRIh81Z].k2U8fuMyQT = bWY45lpIqwCR;
            MeVouhCI[HOHnbGRIh81Z].FXrBKxf = V87P1Hf2Z (PnWXz1NO[k9fmNqZ6sVL], PnWXz1NO[bWY45lpIqwCR]);
            HOHnbGRIh81Z++;
        }
    }
    for (k9fmNqZ6sVL = (344 - 344); Q4apXCV -(891 - 890) > k9fmNqZ6sVL; k9fmNqZ6sVL = k9fmNqZ6sVL + 1)
        for (bWY45lpIqwCR = (501 - 501); bWY45lpIqwCR < Q4apXCV -k9fmNqZ6sVL - (872 - 871); bWY45lpIqwCR = bWY45lpIqwCR + 1) {
            if (MeVouhCI[bWY45lpIqwCR + (220 - 219)].FXrBKxf > MeVouhCI[bWY45lpIqwCR].FXrBKxf) {
                jDCMTmh = MeVouhCI[bWY45lpIqwCR];
                MeVouhCI[bWY45lpIqwCR] = MeVouhCI[bWY45lpIqwCR + (104 - 103)];
                MeVouhCI[bWY45lpIqwCR + (171 - 170)] = jDCMTmh;
            }
        }
    for (k9fmNqZ6sVL = (227 - 227); k9fmNqZ6sVL < Q4apXCV; k9fmNqZ6sVL = k9fmNqZ6sVL + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", PnWXz1NO[MeVouhCI[k9fmNqZ6sVL].fhoUKg7].SqmgcfIN, PnWXz1NO[MeVouhCI[k9fmNqZ6sVL].fhoUKg7].heGRb0CqVH7, PnWXz1NO[MeVouhCI[k9fmNqZ6sVL].fhoUKg7].o6X04a, PnWXz1NO[MeVouhCI[k9fmNqZ6sVL].k2U8fuMyQT].SqmgcfIN, PnWXz1NO[MeVouhCI[k9fmNqZ6sVL].k2U8fuMyQT].heGRb0CqVH7, PnWXz1NO[MeVouhCI[k9fmNqZ6sVL].k2U8fuMyQT].o6X04a, MeVouhCI[k9fmNqZ6sVL].FXrBKxf);
    }
    return (652 - 652);
}

