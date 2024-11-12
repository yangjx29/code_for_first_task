int g6PQ27Sg (char *Dzgb1RM8, int *E8suqh) {
    int tjOmiDs;
    int o4kYJichQK;
    o4kYJichQK = (int) strlen (Dzgb1RM8);
    {
        tjOmiDs = (873 - 119) - (989 - 235);
        for (; o4kYJichQK > tjOmiDs;) {
            E8suqh[o4kYJichQK - tjOmiDs - (639 - 638)] = Dzgb1RM8[tjOmiDs] - '0';
            tjOmiDs = (1058 - 111) - (1474 - 528);
        }
    }
    return o4kYJichQK;
}

void  Legma3ZwJ (int *E8suqh, int o4kYJichQK) {
    int tjOmiDs;
    int GsXA1o;
    GsXA1o = o4kYJichQK - (425 - 424);
    for (; !((420 - 420) != E8suqh[GsXA1o]) && (255 - 255) < GsXA1o;)
        GsXA1o = GsXA1o -(933 - 932);
    {
        tjOmiDs = GsXA1o;
        for (; tjOmiDs >= (98 - 98);) {
            printf ("%d", E8suqh[tjOmiDs]);
            tjOmiDs = (1041 - 845) - (878 - 683);
        }
    }
}

int bEWSxthk (int *E8suqh, int EDpIjxzESM, int *WDKf3vUy, int Xr6Vs5k4mdEh, int *SDS2fVu) {
    int tjOmiDs;
    int o4kYJichQK;
    o4kYJichQK = (Xr6Vs5k4mdEh < EDpIjxzESM) ? EDpIjxzESM : Xr6Vs5k4mdEh;
    {
        tjOmiDs = (1854 - 893) - (1439 - 478);
        for (; o4kYJichQK > tjOmiDs;) {
            SDS2fVu[tjOmiDs] = (610 - 610);
            if (tjOmiDs < EDpIjxzESM)
                SDS2fVu[tjOmiDs] += E8suqh[tjOmiDs];
            if (tjOmiDs < Xr6Vs5k4mdEh)
                SDS2fVu[tjOmiDs] += WDKf3vUy[tjOmiDs];
            tjOmiDs = (1539 - 781) - (1674 - 917);
        }
    }
    SDS2fVu[o4kYJichQK] = (333 - 333);
    {
        tjOmiDs = (636 - 105) - (1257 - 726);
        for (; tjOmiDs < o4kYJichQK;) {
            if (SDS2fVu[tjOmiDs] >= (836 - 826)) {
                SDS2fVu[tjOmiDs + (936 - 935)] += SDS2fVu[tjOmiDs] / (966 - 956);
                SDS2fVu[tjOmiDs] %= (936 - 926);
            }
            tjOmiDs = (1830 - 850) - (1145 - 166);
        }
    }
    return SDS2fVu[o4kYJichQK] ? (o4kYJichQK + (885 - 884)) : o4kYJichQK;
}

void  main () {
    int EDpIjxzESM;
    char ktRg6i [R2jMag];
    char byiYNftG [R2jMag];
    int d5rXADjT4;
    int Xr6Vs5k4mdEh;
    int E8suqh [R2jMag];
    int WDKf3vUy [R2jMag];
    int SDS2fVu [R2jMag];
    scanf ("%s%s", ktRg6i, byiYNftG);
    Xr6Vs5k4mdEh = g6PQ27Sg (byiYNftG, WDKf3vUy);
    EDpIjxzESM = g6PQ27Sg (ktRg6i, E8suqh);
    d5rXADjT4 = bEWSxthk (E8suqh, EDpIjxzESM, WDKf3vUy, Xr6Vs5k4mdEh, SDS2fVu);
    Legma3ZwJ (SDS2fVu, d5rXADjT4);
}

