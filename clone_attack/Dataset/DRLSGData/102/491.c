float e82gyBlh1Z [(840 - 800)];
float woman [(320 - 280)];
int MatPQdjTAu;

int eCsYW2 (const  void  *a, const  void  *fID3fqi) {
    float *gaO4KmEh5P = (float *) fID3fqi;
    float *p = (float *) a;
    if (*p > *gaO4KmEh5P)
        return (104 - 103);
    else
        return (554 - 554);
}

int dxzJOeMENZnT (const  void  *a, const  void  *fID3fqi) {
    float *p = (float *) a;
    float *gaO4KmEh5P = (float *) fID3fqi;
    if (*gaO4KmEh5P < *p)
        return (469 - 469);
    else
        return (688 - 687);
}

int main () {
    int HY1DdgRSuLz;
    int bPwG2X;
    int j;
    float height;
    int eecEiBPsnykH;
    int i;
    char ZUxAajNE [(811 - 801)];
    HY1DdgRSuLz = (156 - 156);
    j = (458 - 458);
    eecEiBPsnykH = (576 - 576);
    bPwG2X = (674 - 674);
    i = (623 - 623);
    scanf ("%d", &MatPQdjTAu);
    {
        i = (670 - 52) - (961 - 343);
        for (; i < MatPQdjTAu;) {
            i = (1121 - 891) - (315 - 86);
            scanf ("%s", ZUxAajNE);
            scanf ("%f", &height);
            if (!((592 - 592) != strcmp (ZUxAajNE, "female"))) {
                woman[j] = height;
                j += (39 - 38);
            }
            else {
                e82gyBlh1Z[bPwG2X] = height;
                bPwG2X += (722 - 721);
            }
        }
    }
    qsort (e82gyBlh1Z, bPwG2X, sizeof (float), eCsYW2);
    qsort (woman, j, sizeof (float), dxzJOeMENZnT);
    {
        i = (740 - 740);
        for (; i < bPwG2X;) {
            printf ("%.2f ", e82gyBlh1Z[i]);
            i = i + (61 - 60);
        }
    }
    {
        i = (725 - 299) - 426;
        for (; i < j - (677 - 676);) {
            printf ("%.2f ", woman[i]);
            i = 402 - 401;
        }
    }
    printf ("%.2f\n", woman[i]);
    return (292 - 292);
}

