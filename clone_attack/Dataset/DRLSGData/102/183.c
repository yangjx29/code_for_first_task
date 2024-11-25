int main (int argc, char *argv []) {
    int QSn0YQ;
    double  NZnjNTsd8hf [(777 - 677)];
    int j;
    int w4w59kl;
    double  KpdX6S [(209 - 109)];
    double  BRtiolrZTS0;
    int k;
    int GHuFAq2;
    char iTZpa1J6i [(255 - 248)];
    j = (876 - 876);
    scanf ("%d", &QSn0YQ);
    k = (609 - 609);
    for (GHuFAq2 = (625 - 625); GHuFAq2 < QSn0YQ; GHuFAq2++) {
        scanf ("%s %lf", iTZpa1J6i, &BRtiolrZTS0);
        if (!('m' != *iTZpa1J6i)) {
            KpdX6S[j] = BRtiolrZTS0;
            j++;
        }
        if (!('f' != *iTZpa1J6i)) {
            NZnjNTsd8hf[k] = BRtiolrZTS0;
            k++;
        }
    }
    for (w4w59kl = j - (696 - 695); w4w59kl > (950 - 950); w4w59kl--) {
        for (GHuFAq2 = (324 - 324); w4w59kl > GHuFAq2; GHuFAq2++) {
            if (KpdX6S[GHuFAq2 +(339 - 338)] < KpdX6S[GHuFAq2]) {
                BRtiolrZTS0 = KpdX6S[GHuFAq2 +(187 - 186)];
                KpdX6S[GHuFAq2 +(958 - 957)] = KpdX6S[GHuFAq2];
                KpdX6S[GHuFAq2] = BRtiolrZTS0;
            }
        }
    }
    for (w4w59kl = k - (775 - 774); w4w59kl > (288 - 288); w4w59kl--) {
        for (GHuFAq2 = (835 - 835); w4w59kl > GHuFAq2; GHuFAq2++) {
            if (NZnjNTsd8hf[GHuFAq2] > NZnjNTsd8hf[GHuFAq2 +(131 - 130)]) {
                BRtiolrZTS0 = NZnjNTsd8hf[GHuFAq2 +(511 - 510)];
                NZnjNTsd8hf[GHuFAq2 +(285 - 284)] = NZnjNTsd8hf[GHuFAq2];
                NZnjNTsd8hf[GHuFAq2] = BRtiolrZTS0;
            }
        }
    }
    for (GHuFAq2 = (911 - 911); j > GHuFAq2; GHuFAq2++) {
        printf ("%.2lf ", KpdX6S[GHuFAq2]);
    }
    for (GHuFAq2 = k - 1; GHuFAq2 > (865 - 865); GHuFAq2--) {
        printf ("%.2lf ", NZnjNTsd8hf[GHuFAq2]);
    }
    printf ("%.2lf", NZnjNTsd8hf[0]);
    return 0;
}

