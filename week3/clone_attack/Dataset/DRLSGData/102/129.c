int main () {
    float k5rXRfF [40];
    int tQDV1a;
    float KOQgxz;
    float plgO3zrn0 [(136 - 96)];
    int w1Cx7c;
    int wbulBsf80XH4;
    int F6SqZX1Y;
    char M6UcqS5 [(19 - 12)];
    int xGWpyVh2Kg;
    int it6GFHPR;
    F6SqZX1Y = (750 - 750);
    tQDV1a = (246 - 246);
    scanf ("%d", &xGWpyVh2Kg);
    {
        it6GFHPR = (918 - 918);
        for (; xGWpyVh2Kg > it6GFHPR;) {
            it6GFHPR = it6GFHPR + (836 - 835);
            scanf ("%s %f", M6UcqS5, &KOQgxz);
            if (!(0 != strcmp ("female", M6UcqS5))) {
                plgO3zrn0[F6SqZX1Y] = KOQgxz;
                F6SqZX1Y = F6SqZX1Y +(719 - 718);
            }
            else {
                k5rXRfF[tQDV1a] = KOQgxz;
                tQDV1a = tQDV1a + 1;
            }
        }
    }
    {
        it6GFHPR = 0;
        for (; tQDV1a > it6GFHPR;) {
            w1Cx7c = it6GFHPR;
            {
                wbulBsf80XH4 = it6GFHPR;
                for (; tQDV1a > wbulBsf80XH4;) {
                    if (k5rXRfF[w1Cx7c] > k5rXRfF[wbulBsf80XH4]) {
                        w1Cx7c = wbulBsf80XH4;
                    }
                    wbulBsf80XH4 = wbulBsf80XH4 + (852 - 851);
                }
            }
            KOQgxz = k5rXRfF[w1Cx7c];
            k5rXRfF[w1Cx7c] = k5rXRfF[it6GFHPR];
            k5rXRfF[it6GFHPR] = KOQgxz;
            printf ("%.2f ", k5rXRfF[it6GFHPR]);
            it6GFHPR = it6GFHPR + 1;
        }
    }
    {
        it6GFHPR = 0;
        for (; F6SqZX1Y > it6GFHPR;) {
            w1Cx7c = it6GFHPR;
            for (wbulBsf80XH4 = it6GFHPR; F6SqZX1Y > wbulBsf80XH4; wbulBsf80XH4 = wbulBsf80XH4 + 1) {
                if (plgO3zrn0[wbulBsf80XH4] > plgO3zrn0[w1Cx7c]) {
                    w1Cx7c = wbulBsf80XH4;
                }
            }
            KOQgxz = plgO3zrn0[w1Cx7c];
            plgO3zrn0[w1Cx7c] = plgO3zrn0[it6GFHPR];
            plgO3zrn0[it6GFHPR] = KOQgxz;
            printf ("%.2f", plgO3zrn0[it6GFHPR]);
            if (it6GFHPR != F6SqZX1Y -1) {
            }
            it6GFHPR++;
        }
    }
    return 0;
}

