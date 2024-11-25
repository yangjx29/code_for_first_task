int main () {
    int HKTj8QkUP;
    int LmBsf16bMHG;
    int k;
    int mount;
    int AxpfO82lAkj;
    int LbZckzlFr;
    int SJRDU0Wj;
    struct   distance {
        int vCWoA0kebu;
        int N4dsTE;
        double  ZUquoBteD;
    };
    struct   distance co8fc9jB [100];
    int v9FVqYuyPH72 [11] [4];
    double  cnK5DIAFkfc [11] [11];
    double  CCXZtloBEM, dbJ0TDjAo;
    k = 1;
    scanf ("%d", &HKTj8QkUP);
    {
        LmBsf16bMHG = 1;
        while (HKTj8QkUP >= LmBsf16bMHG) {
            scanf ("%d%d%d", &v9FVqYuyPH72[LmBsf16bMHG][1], &v9FVqYuyPH72[LmBsf16bMHG][2], &v9FVqYuyPH72[LmBsf16bMHG][3]);
            LmBsf16bMHG++;
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        LmBsf16bMHG = 1;
        while (HKTj8QkUP > LmBsf16bMHG) {
            {
                SJRDU0Wj = LmBsf16bMHG +1;
                while (HKTj8QkUP >= SJRDU0Wj) {
                    CCXZtloBEM = (double ) ((v9FVqYuyPH72[LmBsf16bMHG][1] - v9FVqYuyPH72[SJRDU0Wj][1]) * (v9FVqYuyPH72[LmBsf16bMHG][1] - v9FVqYuyPH72[SJRDU0Wj][1]) + (v9FVqYuyPH72[LmBsf16bMHG][2] - v9FVqYuyPH72[SJRDU0Wj][2]) * (v9FVqYuyPH72[LmBsf16bMHG][2] - v9FVqYuyPH72[SJRDU0Wj][2]) + (v9FVqYuyPH72[LmBsf16bMHG][3] - v9FVqYuyPH72[SJRDU0Wj][3]) * (v9FVqYuyPH72[LmBsf16bMHG][3] - v9FVqYuyPH72[SJRDU0Wj][3]));
                    cnK5DIAFkfc[LmBsf16bMHG][SJRDU0Wj] = sqrt (CCXZtloBEM);
                    co8fc9jB[k].ZUquoBteD = cnK5DIAFkfc[LmBsf16bMHG][SJRDU0Wj];
                    co8fc9jB[k].vCWoA0kebu = LmBsf16bMHG;
                    co8fc9jB[k].N4dsTE = SJRDU0Wj;
                    SJRDU0Wj++;
                    k++;
                }
            }
            LmBsf16bMHG++;
        }
    }
    mount = HKTj8QkUP *(HKTj8QkUP -1) / 2;
    if (2 <= mount) {
        LmBsf16bMHG = 1;
        while (LmBsf16bMHG <= mount - 1) {
            {
                if (0) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    return 0;
                }
            }
            {
                SJRDU0Wj = mount - 1;
                while (SJRDU0Wj >= LmBsf16bMHG) {
                    if (co8fc9jB[SJRDU0Wj].ZUquoBteD < co8fc9jB[SJRDU0Wj +1].ZUquoBteD) {
                        AxpfO82lAkj = co8fc9jB[SJRDU0Wj].vCWoA0kebu;
                        LbZckzlFr = co8fc9jB[SJRDU0Wj].N4dsTE;
                        dbJ0TDjAo = co8fc9jB[SJRDU0Wj].ZUquoBteD;
                        co8fc9jB[SJRDU0Wj].vCWoA0kebu = co8fc9jB[SJRDU0Wj +1].vCWoA0kebu;
                        co8fc9jB[SJRDU0Wj].N4dsTE = co8fc9jB[SJRDU0Wj +1].N4dsTE;
                        co8fc9jB[SJRDU0Wj].ZUquoBteD = co8fc9jB[SJRDU0Wj +1].ZUquoBteD;
                        co8fc9jB[SJRDU0Wj +1].vCWoA0kebu = AxpfO82lAkj;
                        co8fc9jB[SJRDU0Wj +1].N4dsTE = LbZckzlFr;
                        co8fc9jB[SJRDU0Wj +1].ZUquoBteD = dbJ0TDjAo;
                    }
                    SJRDU0Wj--;
                }
            }
            LmBsf16bMHG++;
        }
    }
    {
        LmBsf16bMHG = 1;
        while (LmBsf16bMHG <= mount) {
            AxpfO82lAkj = co8fc9jB[LmBsf16bMHG].vCWoA0kebu;
            LbZckzlFr = co8fc9jB[LmBsf16bMHG].N4dsTE;
            dbJ0TDjAo = co8fc9jB[LmBsf16bMHG].ZUquoBteD;
            LmBsf16bMHG++;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", v9FVqYuyPH72[AxpfO82lAkj][1], v9FVqYuyPH72[AxpfO82lAkj][2], v9FVqYuyPH72[AxpfO82lAkj][3], v9FVqYuyPH72[LbZckzlFr][1], v9FVqYuyPH72[LbZckzlFr][2], v9FVqYuyPH72[LbZckzlFr][3], dbJ0TDjAo);
        }
    }
    return 0;
}

