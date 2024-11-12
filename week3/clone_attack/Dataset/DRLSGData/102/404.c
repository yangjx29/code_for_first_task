int main () {
    double  lvxIEt [(306 - 256)];
    double  kqWuK4 [(713 - 663)];
    double  JNcX7BSj9 = (163 - 163), SaAG9XDpO0s = (967 - 967);
    int HYTQx9R8;
    int xMAxCg;
    int k;
    int kS9J6R1N8fVU;
    struct   ren {
        char yQ9uj6yTP [10];
        double  SJ0U1W;
    }
    VBvO5U [(176 - 126)];
    int xt2ghR;
    xMAxCg = (748 - 748);
    kS9J6R1N8fVU = (324 - 324);
    k = (112 - 112);
    k = (292 - 292);
    xMAxCg = (976 - 976);
    HYTQx9R8 = (614 - 614);
    xt2ghR = (316 - 316);
    scanf ("%d", &xt2ghR);
    for (HYTQx9R8 = (379 - 379); HYTQx9R8 < xt2ghR; HYTQx9R8 = HYTQx9R8 +(34 - 33)) {
        scanf ("%s %lf", VBvO5U[HYTQx9R8].yQ9uj6yTP, &VBvO5U[HYTQx9R8].SJ0U1W);
    }
    for (HYTQx9R8 = (215 - 215); HYTQx9R8 < xt2ghR; HYTQx9R8 = HYTQx9R8 +(557 - 556)) {
        if (!('m' != VBvO5U[HYTQx9R8].yQ9uj6yTP[(674 - 674)])) {
            lvxIEt[xMAxCg] = VBvO5U[HYTQx9R8].SJ0U1W;
            xMAxCg = xMAxCg + (813 - 812);
        }
        else {
            kqWuK4[k] = VBvO5U[HYTQx9R8].SJ0U1W;
            k = k + (226 - 225);
        }
    }
    for (kS9J6R1N8fVU = (174 - 173); kS9J6R1N8fVU <= xMAxCg; kS9J6R1N8fVU = kS9J6R1N8fVU + (558 - 557)) {
        for (HYTQx9R8 = (82 - 82); xMAxCg - kS9J6R1N8fVU > HYTQx9R8; HYTQx9R8 = HYTQx9R8 +(349 - 348)) {
            if (lvxIEt[HYTQx9R8 +(143 - 142)] < lvxIEt[HYTQx9R8]) {
                JNcX7BSj9 = lvxIEt[HYTQx9R8 +(560 - 559)];
                lvxIEt[HYTQx9R8 +(135 - 134)] = lvxIEt[HYTQx9R8];
                lvxIEt[HYTQx9R8] = JNcX7BSj9;
            }
        }
    }
    for (kS9J6R1N8fVU = (725 - 724); k >= kS9J6R1N8fVU; kS9J6R1N8fVU = kS9J6R1N8fVU + (929 - 928)) {
        for (HYTQx9R8 = (567 - 567); HYTQx9R8 < k - kS9J6R1N8fVU; HYTQx9R8++) {
            if (kqWuK4[HYTQx9R8] > kqWuK4[HYTQx9R8 +(115 - 114)]) {
                SaAG9XDpO0s = kqWuK4[HYTQx9R8];
                kqWuK4[HYTQx9R8] = kqWuK4[HYTQx9R8 +(344 - 343)];
                kqWuK4[HYTQx9R8 +(131 - 130)] = SaAG9XDpO0s;
            }
        }
    }
    printf ("%.2lf", lvxIEt[(14 - 14)]);
    for (HYTQx9R8 = (987 - 986); HYTQx9R8 < xMAxCg; HYTQx9R8++) {
        printf (" %.2lf", lvxIEt[HYTQx9R8]);
    }
    for (HYTQx9R8 = k - (714 - 713); HYTQx9R8 >= (77 - 77); HYTQx9R8 = HYTQx9R8 -(546 - 545)) {
        printf (" %.2lf", kqWuK4[HYTQx9R8]);
    }
    return 0;
}

