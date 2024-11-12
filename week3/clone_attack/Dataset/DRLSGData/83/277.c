void  main () {
    float DJvQAct;
    int pP0fRtTdGzDj, ZVJ9ygw [50], EEq7gmSLuU, OF768uY = 0, INux8nXLq = 0;
    scanf ("%d", &pP0fRtTdGzDj);
    for (EEq7gmSLuU = 0; 2 * pP0fRtTdGzDj > EEq7gmSLuU; EEq7gmSLuU = EEq7gmSLuU +1)
        scanf ("%d", &ZVJ9ygw[EEq7gmSLuU]);
    for (EEq7gmSLuU = pP0fRtTdGzDj; 2 * pP0fRtTdGzDj > EEq7gmSLuU; EEq7gmSLuU = EEq7gmSLuU +1) {
        if (ZVJ9ygw[EEq7gmSLuU] >= 90)
            ZVJ9ygw[EEq7gmSLuU] = 40;
        else if (85 <= ZVJ9ygw[EEq7gmSLuU] && ZVJ9ygw[EEq7gmSLuU] <= 89)
            ZVJ9ygw[EEq7gmSLuU] = 37;
        else if (82 <= ZVJ9ygw[EEq7gmSLuU] && 84 >= ZVJ9ygw[EEq7gmSLuU])
            ZVJ9ygw[EEq7gmSLuU] = 33;
        else if (78 <= ZVJ9ygw[EEq7gmSLuU] && 81 >= ZVJ9ygw[EEq7gmSLuU])
            ZVJ9ygw[EEq7gmSLuU] = 30;
        else if (75 <= ZVJ9ygw[EEq7gmSLuU] && 77 >= ZVJ9ygw[EEq7gmSLuU])
            ZVJ9ygw[EEq7gmSLuU] = 27;
        else if (ZVJ9ygw[EEq7gmSLuU] >= 72 && ZVJ9ygw[EEq7gmSLuU] <= 74)
            ZVJ9ygw[EEq7gmSLuU] = 23;
        else if (ZVJ9ygw[EEq7gmSLuU] >= 68 && ZVJ9ygw[EEq7gmSLuU] <= 71)
            ZVJ9ygw[EEq7gmSLuU] = 20;
        else if (ZVJ9ygw[EEq7gmSLuU] >= 64 && ZVJ9ygw[EEq7gmSLuU] <= 67)
            ZVJ9ygw[EEq7gmSLuU] = 15;
        else if (ZVJ9ygw[EEq7gmSLuU] >= 60 && ZVJ9ygw[EEq7gmSLuU] <= 63)
            ZVJ9ygw[EEq7gmSLuU] = 10;
        else
            ZVJ9ygw[EEq7gmSLuU] = 0;
    }
    for (EEq7gmSLuU = 0; EEq7gmSLuU < pP0fRtTdGzDj; EEq7gmSLuU = EEq7gmSLuU +1)
        ZVJ9ygw[EEq7gmSLuU +pP0fRtTdGzDj] = ZVJ9ygw[EEq7gmSLuU] * ZVJ9ygw[EEq7gmSLuU +pP0fRtTdGzDj];
    for (EEq7gmSLuU = 0; EEq7gmSLuU < pP0fRtTdGzDj; EEq7gmSLuU = EEq7gmSLuU +1) {
        OF768uY = OF768uY +ZVJ9ygw[EEq7gmSLuU +pP0fRtTdGzDj];
        INux8nXLq = INux8nXLq +ZVJ9ygw[EEq7gmSLuU];
    }
    DJvQAct = (float) OF768uY / 10.0 / INux8nXLq;
    printf ("%.2f", DJvQAct);
}

