int main (int Z3Z7lKBm, char *argv []) {
    int imin;
    int itemp;
    int umfeh1EvJ;
    int hjcnrELHo;
    int x;
    int y;
    int i;
    int j;
    umfeh1EvJ = 0;
    hjcnrELHo = 0;
    int iaX [(87 - 76)], iaY [11];
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (11 > i) {
            iaX[i] = -1;
            iaY[i] = -1;
            i++;
        };
    }
    i = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d%d", &x, &y);
    for (; 0 < x;) {
        umfeh1EvJ++;
        iaX[i++] = x;
        x = x / (2);
    }
    j = umfeh1EvJ - 1;
    i = 0;
    while (j > i) {
        itemp = iaX[i];
        iaX[i] = iaX[j];
        iaX[j] = itemp;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        j = j - 1;
        i++;
    }
    i = 0;
    while (0 < y) {
        hjcnrELHo++;
        iaY[i++] = y;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        y = y / (2);
    }
    j = hjcnrELHo - 1;
    imin = hjcnrELHo < umfeh1EvJ ? hjcnrELHo : umfeh1EvJ;
    i = 0;
    while (i < j) {
        itemp = iaY[i];
        iaY[i] = iaY[j];
        i++;
        iaY[j] = itemp;
        j--;
    }
    {
        i = 0;
        while (i < imin) {
            if (iaX[i] != iaY[i]) {
                break;
            }
            i++;
        };
    }
    printf ("%d", iaX[--i]);
    return 0;
}

