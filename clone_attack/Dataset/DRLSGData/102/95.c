int R9OHUqDkPJiS (const  void  *WrCfemjxwcs, const  void  *siE18oFrDt) {
    float *MDQcEBb8;
    float *UWP0xDUlGRS;
    MDQcEBb8 = (float *) siE18oFrDt;
    UWP0xDUlGRS = (float *) WrCfemjxwcs;
    if ((822 - 822) > *UWP0xDUlGRS-*MDQcEBb8)
        return -(954 - 953);
    else
        return (153 - 152);
}

int qwCv8g5UQ0F (const  void  *WrCfemjxwcs, const  void  *siE18oFrDt) {
    float *UWP0xDUlGRS;
    float *MDQcEBb8;
    UWP0xDUlGRS = (float *) WrCfemjxwcs;
    MDQcEBb8 = (float *) siE18oFrDt;
    if ((634 - 634) < *UWP0xDUlGRS-*MDQcEBb8)
        return -(432 - 431);
    else
        return (12 - 11);
}

int main () {
    int RUoRCVgT;
    int iKScMu3o5p;
    float xkdg3Sm [(748 - 708)];
    float pc2fz7jC;
    int FYK5XHV;
    int HlZIh7m9;
    char WRGnO4wt [(721 - 711)];
    float HR3u8JdeAO [40];
    RUoRCVgT = (976 - 976);
    scanf ("%d", &iKScMu3o5p);
    FYK5XHV = (828 - 828);
    for (HlZIh7m9 = (798 - 798); HlZIh7m9 < iKScMu3o5p; HlZIh7m9++) {
        scanf ("%s %f", WRGnO4wt, &pc2fz7jC);
        if (!('m' != WRGnO4wt[0]))
            xkdg3Sm[RUoRCVgT++] = pc2fz7jC;
        else
            HR3u8JdeAO[FYK5XHV++] = pc2fz7jC;
    }
    qsort (xkdg3Sm, RUoRCVgT, sizeof (float), R9OHUqDkPJiS);
    {
        HlZIh7m9 = 0;
        for (; RUoRCVgT > HlZIh7m9;) {
            printf ("%.2f ", xkdg3Sm[HlZIh7m9]);
            HlZIh7m9++;
        }
    }
    qsort (HR3u8JdeAO, FYK5XHV, sizeof (float), qwCv8g5UQ0F);
    for (HlZIh7m9 = 0; HlZIh7m9 < FYK5XHV -1; HlZIh7m9++)
        printf ("%.2f ", HR3u8JdeAO[HlZIh7m9]);
    printf ("%.2f", HR3u8JdeAO[HlZIh7m9]);
    return 0;
}

