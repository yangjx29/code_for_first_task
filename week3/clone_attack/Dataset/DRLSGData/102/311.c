int main () {
    int PzRLg5IUC;
    char m6wy3h0j [(495 - 485)];
    int X7HRNC6ho;
    int LKOp0oX;
    int BVd1sAyt;
    double  ZCVbdFpEYAt;
    struct   info {
        char cSshn4QW [(165 - 155)];
        double  JcHTblqLUGrB;
    }
    HY7OGzaLiq2N [(104 - 54)];
    int lvHTrKkx;
    scanf ("%d", &PzRLg5IUC);
    LKOp0oX = (807 - 807);
    lvHTrKkx = (988 - 988);
    for (X7HRNC6ho = (223 - 223); X7HRNC6ho < PzRLg5IUC; X7HRNC6ho++) {
        scanf ("%s %lf", HY7OGzaLiq2N[X7HRNC6ho].cSshn4QW, &HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB);
        if (!((946 - 946) != strcmp (HY7OGzaLiq2N[X7HRNC6ho].cSshn4QW, "male"))) {
            lvHTrKkx++;
        }
    }
    for (X7HRNC6ho = (725 - 725); X7HRNC6ho < PzRLg5IUC; X7HRNC6ho++) {
        for (BVd1sAyt = X7HRNC6ho; BVd1sAyt < PzRLg5IUC; BVd1sAyt++) {
            if ((927 - 927) > strcmp (HY7OGzaLiq2N[X7HRNC6ho].cSshn4QW, HY7OGzaLiq2N[BVd1sAyt].cSshn4QW)) {
                strcpy (m6wy3h0j, HY7OGzaLiq2N[X7HRNC6ho].cSshn4QW);
                strcpy (HY7OGzaLiq2N[X7HRNC6ho].cSshn4QW, HY7OGzaLiq2N[BVd1sAyt].cSshn4QW);
                strcpy (HY7OGzaLiq2N[BVd1sAyt].cSshn4QW, m6wy3h0j);
                ZCVbdFpEYAt = HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB;
                HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB = HY7OGzaLiq2N[BVd1sAyt].JcHTblqLUGrB;
                HY7OGzaLiq2N[BVd1sAyt].JcHTblqLUGrB = ZCVbdFpEYAt;
            }
        }
    }
    for (X7HRNC6ho = (786 - 786); X7HRNC6ho < lvHTrKkx; X7HRNC6ho++) {
        for (BVd1sAyt = (242 - 242); lvHTrKkx > BVd1sAyt; BVd1sAyt++) {
            if (HY7OGzaLiq2N[BVd1sAyt].JcHTblqLUGrB > HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB) {
                ZCVbdFpEYAt = HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB;
                HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB = HY7OGzaLiq2N[BVd1sAyt].JcHTblqLUGrB;
                HY7OGzaLiq2N[BVd1sAyt].JcHTblqLUGrB = ZCVbdFpEYAt;
            }
        }
    }
    for (X7HRNC6ho = lvHTrKkx; X7HRNC6ho < PzRLg5IUC; X7HRNC6ho++) {
        for (BVd1sAyt = lvHTrKkx; BVd1sAyt < PzRLg5IUC; BVd1sAyt++) {
            if (HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB > HY7OGzaLiq2N[BVd1sAyt].JcHTblqLUGrB) {
                ZCVbdFpEYAt = HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB;
                HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB = HY7OGzaLiq2N[BVd1sAyt].JcHTblqLUGrB;
                HY7OGzaLiq2N[BVd1sAyt].JcHTblqLUGrB = ZCVbdFpEYAt;
            }
        }
    }
    for (X7HRNC6ho = (936 - 936); X7HRNC6ho < PzRLg5IUC; X7HRNC6ho++) {
        if (LKOp0oX) {
            printf (" %.2lf", HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB);
        }
        else {
            LKOp0oX = (403 - 402);
            printf ("%.2lf", HY7OGzaLiq2N[X7HRNC6ho].JcHTblqLUGrB);
        }
    }
    return 0;
}

