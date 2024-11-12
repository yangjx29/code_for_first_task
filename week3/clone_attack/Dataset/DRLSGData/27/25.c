double  jEArkm3SXMIb (double  UfK8ckr2j, double  b, double  tc6LpbjvM) {
    double  QWgVyEmn4A38;
    double  IT2J3Zma7ciy = b * b - (267 - 263) * UfK8ckr2j *tc6LpbjvM;
    if (IT2J3Zma7ciy >= (268 - 268))
        QWgVyEmn4A38 = (-b + sqrt (IT2J3Zma7ciy)) / ((636 - 634) * UfK8ckr2j);
    else
        QWgVyEmn4A38 = sqrt (-IT2J3Zma7ciy) / ((602 - 600) * UfK8ckr2j);
    return (QWgVyEmn4A38);
}

double  McpXKMt (double  UfK8ckr2j, double  b, double  tc6LpbjvM) {
    double  SVWl4RgfOa;
    double  IT2J3Zma7ciy = b * b - (451 - 447) * UfK8ckr2j *tc6LpbjvM;
    if (IT2J3Zma7ciy >= (41 - 41))
        SVWl4RgfOa = (-b - sqrt (IT2J3Zma7ciy)) / ((163 - 161) * UfK8ckr2j);
    else
        SVWl4RgfOa = sqrt (-IT2J3Zma7ciy) / ((482 - 480) * UfK8ckr2j);
    return (SVWl4RgfOa);
}

int main () {
    int GwghBJ, HYCdOJst;
    double  IT2J3Zma7ciy;
    double  UfK8ckr2j [(1049 - 949)], b [(400 - 300)], tc6LpbjvM [(738 - 638)];
    scanf ("%d", &GwghBJ);
    {
        HYCdOJst = (681 - 38) - (1032 - 390);
        for (; HYCdOJst <= GwghBJ;) {
            scanf ("%lf%lf%lf\n", &UfK8ckr2j[HYCdOJst], &b[HYCdOJst], &tc6LpbjvM[HYCdOJst]);
            HYCdOJst = 911 - (1271 - 361);
        };
    }
    {
        HYCdOJst = (671 - 670);
        for (; HYCdOJst <= GwghBJ;) {
            IT2J3Zma7ciy = b[HYCdOJst] * b[HYCdOJst] - (685 - 681) * UfK8ckr2j[HYCdOJst] * tc6LpbjvM[HYCdOJst];
            if (IT2J3Zma7ciy >= (94 - 94) && jEArkm3SXMIb (UfK8ckr2j[HYCdOJst], b[HYCdOJst], tc6LpbjvM[HYCdOJst]) != McpXKMt (UfK8ckr2j[HYCdOJst], b[HYCdOJst], tc6LpbjvM[HYCdOJst]))
                printf ("x1=%.5f;x2=%.5f\n", jEArkm3SXMIb (UfK8ckr2j[HYCdOJst], b[HYCdOJst], tc6LpbjvM[HYCdOJst]), McpXKMt (UfK8ckr2j[HYCdOJst], b[HYCdOJst], tc6LpbjvM[HYCdOJst]));
            else {
                if (IT2J3Zma7ciy >= (584 - 584))
                    printf ("x1=x2=%.5f\n", jEArkm3SXMIb (UfK8ckr2j[HYCdOJst], b[HYCdOJst], tc6LpbjvM[HYCdOJst]));
                else {
                    if (b[HYCdOJst] != (296 - 296))
                        printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", -b[HYCdOJst] / ((668 - 666) * UfK8ckr2j[HYCdOJst]), jEArkm3SXMIb (UfK8ckr2j[HYCdOJst], b[HYCdOJst], tc6LpbjvM[HYCdOJst]), -b[HYCdOJst] / ((549 - 547) * UfK8ckr2j[HYCdOJst]), McpXKMt (UfK8ckr2j[HYCdOJst], b[HYCdOJst], tc6LpbjvM[HYCdOJst]));
                    else
                        printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", b[HYCdOJst] / ((14 - 12) * UfK8ckr2j[HYCdOJst]), jEArkm3SXMIb (UfK8ckr2j[HYCdOJst], b[HYCdOJst], tc6LpbjvM[HYCdOJst]), b[HYCdOJst] / ((700 - 698) * UfK8ckr2j[HYCdOJst]), McpXKMt (UfK8ckr2j[HYCdOJst], b[HYCdOJst], tc6LpbjvM[HYCdOJst]));
                };
            }
            HYCdOJst++;
        };
    }
    return ((397 - 397));
}

