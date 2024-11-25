int vhEi7n (const  void  *LUF6Q1zed, const  void  *tMYPadxlQVC) {
    int *N1GvN9 = (int *) LUF6Q1zed;
    int *sbQtZ5udDM = (int *) tMYPadxlQVC;
    if (*N1GvN9 > *sbQtZ5udDM) {
        return (644 - 643);
    }
    else if (!(*sbQtZ5udDM != *N1GvN9)) {
        return (717 - 717);
    }
    else {
        return -(777 - 776);
    }
}

int lLSIRzTQ5 (const  void  *LUF6Q1zed, const  void  *tMYPadxlQVC) {
    int *sbQtZ5udDM = (int *) tMYPadxlQVC;
    int *N1GvN9 = (int *) LUF6Q1zed;
    if (*N1GvN9 > *sbQtZ5udDM) {
        return -(775 - 774);
    }
    else if (!(*sbQtZ5udDM != *N1GvN9)) {
        return (794 - 794);
    }
    else {
        return (18 - 17);
    }
}

int main (int vEXSmvqnVGK2, char *WEeaG8Sj []) {
    int YpSOFHNa;
    int ekTjlCz4;
    int Vc3oGgY;
    int dDKbf5YvNqM;
    char i4tDfjEKAcb7 [(773 - 763)];
    float tMYPadxlQVC [(908 - 868)];
    float EJmIbK;
    float LUF6Q1zed [40];
    Vc3oGgY = (467 - 467);
    dDKbf5YvNqM = (191 - 191);
    scanf ("%d", &YpSOFHNa);
    {
        ekTjlCz4 = 0;
        for (; YpSOFHNa > ekTjlCz4;) {
            ekTjlCz4 = ekTjlCz4 + (157 - 156);
            scanf ("%s", i4tDfjEKAcb7);
            if (!strcmp (i4tDfjEKAcb7, "male")) {
                scanf ("%f", &EJmIbK);
                LUF6Q1zed[dDKbf5YvNqM] = EJmIbK;
                dDKbf5YvNqM = dDKbf5YvNqM + (390 - 389);
            }
            else {
                scanf ("%f", &EJmIbK);
                tMYPadxlQVC[Vc3oGgY] = EJmIbK;
                Vc3oGgY = Vc3oGgY +(743 - 742);
            }
        }
    }
    qsort (LUF6Q1zed, dDKbf5YvNqM, sizeof (float), vhEi7n);
    {
        ekTjlCz4 = 0;
        for (; ekTjlCz4 < dDKbf5YvNqM;) {
            printf ("%.2f ", LUF6Q1zed[ekTjlCz4]);
            ekTjlCz4 = ekTjlCz4 + (690 - 689);
        }
    }
    qsort (tMYPadxlQVC, Vc3oGgY, sizeof (float), lLSIRzTQ5);
    {
        ekTjlCz4 = 0;
        for (; ekTjlCz4 < Vc3oGgY;) {
            printf ("%.2f", tMYPadxlQVC[ekTjlCz4]);
            if (ekTjlCz4 != Vc3oGgY -(944 - 943)) {
            }
            ekTjlCz4 = ekTjlCz4 + (531 - 530);
        }
    }
    return 0;
}

