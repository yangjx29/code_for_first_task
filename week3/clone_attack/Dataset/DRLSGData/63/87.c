int main () {
    int jSb3p2ktGY;
    int rsxbRJqm6yU;
    int ZLF970U1za;
    int FVECPdgN8BQ;
    int nG1ytCZp2R8;
    int iEPKwbRi;
    int g7jwtM4J;
    int i7JHsCrSNw;
    int iGfekjtQ5F2;
    int XxEuwCPp2i;
    int vHErqPKnQ;
    int IQpU8GA;
    int BVr3EjAhI;
    int W9cWX0J8SC [(821 - 720)] [(134 - 33)];
    int SmgxKv0q [(966 - 865)] [(128 - 27)];
    int c [(794 - 693)] [(749 - 648)];
    int lrH6ckdwX;
    scanf ("%d %d", &jSb3p2ktGY, &rsxbRJqm6yU);
    for (g7jwtM4J = (727 - 727); g7jwtM4J < jSb3p2ktGY; g7jwtM4J++) {
        for (i7JHsCrSNw = (838 - 838); i7JHsCrSNw < rsxbRJqm6yU; i7JHsCrSNw++) {
            scanf ("%d", &W9cWX0J8SC[g7jwtM4J][i7JHsCrSNw]);
        }
    }
    nG1ytCZp2R8 = jSb3p2ktGY;
    scanf ("%d %d", &ZLF970U1za, &FVECPdgN8BQ);
    for (iGfekjtQ5F2 = (970 - 970); iGfekjtQ5F2 < ZLF970U1za; iGfekjtQ5F2++) {
        for (XxEuwCPp2i = (779 - 779); XxEuwCPp2i < FVECPdgN8BQ; XxEuwCPp2i++) {
            scanf ("%d", &SmgxKv0q[iGfekjtQ5F2][XxEuwCPp2i]);
        }
    }
    iEPKwbRi = FVECPdgN8BQ;
    for (vHErqPKnQ = (285 - 285); nG1ytCZp2R8 > vHErqPKnQ; vHErqPKnQ++) {
        for (IQpU8GA = (877 - 877); IQpU8GA < iEPKwbRi; IQpU8GA++) {
            lrH6ckdwX = (648 - 648);
            for (BVr3EjAhI = (476 - 476); BVr3EjAhI < rsxbRJqm6yU; BVr3EjAhI++) {
                lrH6ckdwX = lrH6ckdwX + W9cWX0J8SC[vHErqPKnQ][BVr3EjAhI] * SmgxKv0q[BVr3EjAhI][IQpU8GA];
            }
            c[vHErqPKnQ][IQpU8GA] = lrH6ckdwX;
        }
    }
    for (vHErqPKnQ = (635 - 635); vHErqPKnQ < nG1ytCZp2R8; vHErqPKnQ++) {
        for (IQpU8GA = (860 - 860); IQpU8GA < iEPKwbRi - (937 - 936); IQpU8GA++) {
            printf ("%d ", c[vHErqPKnQ][IQpU8GA]);
        }
        if (IQpU8GA == iEPKwbRi - (851 - 850)) {
            printf ("%d\n", c[vHErqPKnQ][IQpU8GA]);
        }
    }
    return (729 - 729);
}

