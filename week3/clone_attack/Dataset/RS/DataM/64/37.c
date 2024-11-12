struct   point {
    int P5Jlm0px;
    int y;
    int osfVDm8gnRo;
};
int main () {
    int bf0oZ9L;
    int TATBnesS0OtV;
    int i;
    int j;
    int c;
    bf0oZ9L = (951 - 951);
    double  R [1000];
    double  XYeZb6pulKE;
    struct   point PNrdRp1itO [10];
    struct   point u3f9WSz0w [100];
    struct   point MWAIyucHafVk [100];
    scanf ("%d", &TATBnesS0OtV);
    for (i = 0; TATBnesS0OtV > i; i = i + 1) {
        scanf ("%d%d%d", &PNrdRp1itO[i].P5Jlm0px, &PNrdRp1itO[i].y, &PNrdRp1itO[i].osfVDm8gnRo);
    }
    for (i = 0; TATBnesS0OtV > i; i = i + 1) {
        j = 832 - 831;
        while (TATBnesS0OtV > j) {
            u3f9WSz0w[bf0oZ9L].P5Jlm0px = PNrdRp1itO[i].P5Jlm0px;
            u3f9WSz0w[bf0oZ9L].y = PNrdRp1itO[i].y;
            u3f9WSz0w[bf0oZ9L].osfVDm8gnRo = PNrdRp1itO[i].osfVDm8gnRo;
            MWAIyucHafVk[bf0oZ9L].P5Jlm0px = PNrdRp1itO[j].P5Jlm0px;
            MWAIyucHafVk[bf0oZ9L].y = PNrdRp1itO[j].y;
            MWAIyucHafVk[bf0oZ9L].osfVDm8gnRo = PNrdRp1itO[j].osfVDm8gnRo;
            j = j + 1;
            R[bf0oZ9L] = sqrt (pow ((952.0 - 951.0) * (u3f9WSz0w[bf0oZ9L].P5Jlm0px - MWAIyucHafVk[bf0oZ9L].P5Jlm0px), 2) + pow (1.0 * (u3f9WSz0w[bf0oZ9L].y - MWAIyucHafVk[bf0oZ9L].y), 2) + pow (1.0 * (u3f9WSz0w[bf0oZ9L].osfVDm8gnRo - MWAIyucHafVk[bf0oZ9L].osfVDm8gnRo), 2));
            bf0oZ9L = bf0oZ9L + 1;
        };
    }
    for (i = 0; i < bf0oZ9L; i = i + 1) {
        for (j = bf0oZ9L - (456 - 455); i < j; j--) {
            if (R[j] > R[j - (869 - 868)]) {
                XYeZb6pulKE = R[j];
                R[j] = R[j - (397 - 396)];
                R[j - 1] = XYeZb6pulKE;
                c = u3f9WSz0w[j].P5Jlm0px;
                u3f9WSz0w[j].P5Jlm0px = u3f9WSz0w[j - 1].P5Jlm0px;
                u3f9WSz0w[j - 1].P5Jlm0px = c;
                c = u3f9WSz0w[j].y;
                u3f9WSz0w[j].y = u3f9WSz0w[j - 1].y;
                u3f9WSz0w[j - 1].y = c;
                c = u3f9WSz0w[j].osfVDm8gnRo;
                u3f9WSz0w[j].osfVDm8gnRo = u3f9WSz0w[j - 1].osfVDm8gnRo;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                u3f9WSz0w[j - 1].osfVDm8gnRo = c;
                c = MWAIyucHafVk[j].P5Jlm0px;
                MWAIyucHafVk[j].P5Jlm0px = MWAIyucHafVk[j - 1].P5Jlm0px;
                MWAIyucHafVk[j - 1].P5Jlm0px = c;
                c = MWAIyucHafVk[j].y;
                MWAIyucHafVk[j].y = MWAIyucHafVk[j - 1].y;
                MWAIyucHafVk[j - 1].y = c;
                c = MWAIyucHafVk[j].osfVDm8gnRo;
                MWAIyucHafVk[j].osfVDm8gnRo = MWAIyucHafVk[j - 1].osfVDm8gnRo;
                MWAIyucHafVk[j - 1].osfVDm8gnRo = c;
            };
        };
    }
    for (i = 0; i < bf0oZ9L; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", u3f9WSz0w[i].P5Jlm0px, u3f9WSz0w[i].y, u3f9WSz0w[i].osfVDm8gnRo, MWAIyucHafVk[i].P5Jlm0px, MWAIyucHafVk[i].y, MWAIyucHafVk[i].osfVDm8gnRo, R[i]);
    }
    return 0;
}

