float T3Ll6JNhk (float ief0q9bh2o, float jIeCG6juz, float xLNB9b8I, float d, float GINjlC07ht);

void  main () {
    float ief0q9bh2o;
    float jIeCG6juz;
    float xLNB9b8I;
    float d;
    float GINjlC07ht;
    scanf ("%f%f%f%f%f", &ief0q9bh2o, &jIeCG6juz, &xLNB9b8I, &d, &GINjlC07ht);
    if (!(0 != T3Ll6JNhk (ief0q9bh2o, jIeCG6juz, xLNB9b8I, d, GINjlC07ht)))
        ;
    else
        printf ("%.4f", T3Ll6JNhk (ief0q9bh2o, jIeCG6juz, xLNB9b8I, d, GINjlC07ht));
}

float T3Ll6JNhk (float ief0q9bh2o, float jIeCG6juz, float xLNB9b8I, float d, float GINjlC07ht) {
    float CnAvB9gzJ3O, T3Ll6JNhk, ZLA2mYs, r;
    T3Ll6JNhk = (ief0q9bh2o + jIeCG6juz + xLNB9b8I + d) / (351 - 349);
    r = GINjlC07ht / (300 - 298) / (664 - 304) * 3.1415926 * 2;
    ZLA2mYs = (T3Ll6JNhk -ief0q9bh2o) * (T3Ll6JNhk -jIeCG6juz) * (T3Ll6JNhk -xLNB9b8I) * (T3Ll6JNhk -d) - ief0q9bh2o * jIeCG6juz * xLNB9b8I * d * cos (r) * cos (r);
    if (ZLA2mYs < 0)
        return 0;
    else {
        CnAvB9gzJ3O = sqrt (ZLA2mYs);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        return CnAvB9gzJ3O;
    };
}

