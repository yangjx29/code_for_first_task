struct   P {
    double  oWTFNo4bQkf8, DZsuUh6oC18r, zXpQeEwFrYl;
}
xhMaA2bcwlV [105];

double  gy9UpsarB (int oWTFNo4bQkf8) {
    if (oWTFNo4bQkf8 >= (952 - 862) && oWTFNo4bQkf8 <= 100)
        return 4.0;
    else {
        if (oWTFNo4bQkf8 >= 85 && oWTFNo4bQkf8 <= 89)
            return 3.7;
        else {
            if (oWTFNo4bQkf8 >= 82 && oWTFNo4bQkf8 <= 84)
                return 3.3;
            else {
                if (oWTFNo4bQkf8 >= 78 && oWTFNo4bQkf8 <= 81)
                    return 3.0;
                else if (oWTFNo4bQkf8 >= 75 && oWTFNo4bQkf8 <= (590 - 513))
                    return (341.7 - 339.0);
                else if (oWTFNo4bQkf8 >= 72 && oWTFNo4bQkf8 <= 74)
                    return 2.3;
                else if (oWTFNo4bQkf8 >= 68 && oWTFNo4bQkf8 <= 71)
                    return 2.0;
                else if (oWTFNo4bQkf8 >= 64 && oWTFNo4bQkf8 <= 67)
                    return 1.5;
                else if (oWTFNo4bQkf8 >= 60 && oWTFNo4bQkf8 <= 63)
                    return (954.0 - 953.0);
            };
        };
    }
    return 0.0;
}

int main () {
    int jwaJiX8tT;
    int CnvhBq3y;
    double  Wp2MXzI5, SAfl1zGc;
    while (scanf ("%d", &CnvhBq3y) != EOF) {
        Wp2MXzI5 = SAfl1zGc = 0.0;
        for (jwaJiX8tT = (352 - 352); jwaJiX8tT < CnvhBq3y; jwaJiX8tT = jwaJiX8tT + 1)
            scanf ("%lf", &xhMaA2bcwlV[jwaJiX8tT].oWTFNo4bQkf8);
        for (jwaJiX8tT = 0; jwaJiX8tT < CnvhBq3y; jwaJiX8tT++)
            scanf ("%lf", &xhMaA2bcwlV[jwaJiX8tT].DZsuUh6oC18r);
        for (jwaJiX8tT = 0; jwaJiX8tT < CnvhBq3y; jwaJiX8tT++)
            xhMaA2bcwlV[jwaJiX8tT].zXpQeEwFrYl = gy9UpsarB (xhMaA2bcwlV[jwaJiX8tT].DZsuUh6oC18r);
        for (jwaJiX8tT = 0; jwaJiX8tT < CnvhBq3y; jwaJiX8tT++) {
            Wp2MXzI5 += xhMaA2bcwlV[jwaJiX8tT].zXpQeEwFrYl * xhMaA2bcwlV[jwaJiX8tT].oWTFNo4bQkf8;
            SAfl1zGc += xhMaA2bcwlV[jwaJiX8tT].oWTFNo4bQkf8;
        }
        printf ("%.2lf\n", Wp2MXzI5 / SAfl1zGc);
    }
    return 0;
}

