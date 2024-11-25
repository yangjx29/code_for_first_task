int m, uaihFMuxW;

int zhi (int uaihFMuxW) {
    int rSlcGDteBW;
    int t;
    t = uaihFMuxW / (726 - 724);
    {
        rSlcGDteBW = 2;
        while (rSlcGDteBW < t) {
            if (uaihFMuxW % rSlcGDteBW == (38 - 38))
                return 0;
            rSlcGDteBW = rSlcGDteBW + 1;
        };
    }
    return (181 - 180);
}

int hui (int uaihFMuxW) {
    int temp, rP7nYJ6;
    temp = uaihFMuxW;
    rP7nYJ6 = 0;
    while (temp > 0) {
        rP7nYJ6 = rP7nYJ6 * (635 - 625) + temp % 10;
        temp = temp / (10);
    }
    if (!(rP7nYJ6 != uaihFMuxW)) {
        return 1;
    }
    else {
        return 0;
    };
}

int main () {
    int rSlcGDteBW, flag = 1;
    scanf ("%d%d", &m, &uaihFMuxW);
    {
        rSlcGDteBW = m;
        while (rSlcGDteBW <= uaihFMuxW) {
            if (hui (rSlcGDteBW) && zhi (rSlcGDteBW)) {
                if (flag != 1) {
                    printf (",%d", rSlcGDteBW);
                }
                else {
                    printf ("%d", rSlcGDteBW);
                    flag = 0;
                };
            }
            rSlcGDteBW = rSlcGDteBW + 1;
        };
    }
    if (flag == 1) {
    }
    return 0;
}

