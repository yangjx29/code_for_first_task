int main () {
    int CjKp6B3GYMVh [3000];
    int fsvAHVFcj3P = 0, ePmRke3, cgrSCvc3f, ucIiPT = 0;
    char dWe4flN;
    for (; scanf ("%d", &CjKp6B3GYMVh[fsvAHVFcj3P]);) {
        dWe4flN = getchar ();
        if (dWe4flN == '\n')
            break;
        fsvAHVFcj3P++;
    }
    if (fsvAHVFcj3P == 0)
        ;
    else {
        for (ePmRke3 = 0; ePmRke3 < fsvAHVFcj3P; ePmRke3++) {
            for (ucIiPT = 0; fsvAHVFcj3P - ePmRke3 > ucIiPT; ucIiPT++) {
                if (CjKp6B3GYMVh[ucIiPT] > CjKp6B3GYMVh[ucIiPT + 1]) {
                    cgrSCvc3f = CjKp6B3GYMVh[ucIiPT];
                    CjKp6B3GYMVh[ucIiPT] = CjKp6B3GYMVh[ucIiPT + 1];
                    CjKp6B3GYMVh[ucIiPT + 1] = cgrSCvc3f;
                }
            }
        }
        for (ePmRke3 = fsvAHVFcj3P; ePmRke3 > 0; ePmRke3--) {
            if (CjKp6B3GYMVh[ePmRke3] > CjKp6B3GYMVh[ePmRke3 - 1])
                break;
            else if (CjKp6B3GYMVh[ePmRke3] == CjKp6B3GYMVh[ePmRke3 - 1])
                continue;
        }
        if (CjKp6B3GYMVh[ePmRke3 - 1] == 0) {
        }
        else
            printf ("%d", CjKp6B3GYMVh[ePmRke3 - 1]);
        return 0;
    }
}

