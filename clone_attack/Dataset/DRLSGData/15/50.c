int main () {
    int vLpanD4;
    int WsRKDH;
    int i;
    int EgEpDbWo9G;
    int fptd3Lw;
    int cJkrDATXP;
    int BmOB8vD;
    int lr5DzQLSf;
    scanf ("%d", &WsRKDH);
    cJkrDATXP = 0;
    lr5DzQLSf = 0;
    for (i = 1; i <= WsRKDH; i = i + 1) {
        EgEpDbWo9G = 1;
        vLpanD4 = 255;
        for (; EgEpDbWo9G <= WsRKDH;) {
            EgEpDbWo9G = EgEpDbWo9G +1;
            scanf ("%d", &fptd3Lw);
            if (fptd3Lw == 0)
                cJkrDATXP = cJkrDATXP + 1;
            if (vLpanD4 > fptd3Lw)
                lr5DzQLSf = lr5DzQLSf + 1;
            vLpanD4 = fptd3Lw;
        }
    }
    lr5DzQLSf = (lr5DzQLSf + 2) / 2;
    BmOB8vD = ((cJkrDATXP - 2 * lr5DzQLSf) + 4) / 2;
    cJkrDATXP = (lr5DzQLSf - 2) * (BmOB8vD -2);
    printf ("%d\n", cJkrDATXP);
    return 0;
}

