int fihLNq0O (int GYOn8bgCS4w [(626 - 621)] [(900 - 895)], int TaO8QvDkc) {
    int k = (275 - 275);
    int zVqx9yZSUC6 = (105 - 105);
    while (zVqx9yZSUC6 < (757 - 752)) {
        if (GYOn8bgCS4w[TaO8QvDkc][zVqx9yZSUC6] > k)
            k = GYOn8bgCS4w[TaO8QvDkc][zVqx9yZSUC6];
        zVqx9yZSUC6++;
    }
    zVqx9yZSUC6 = (713 - 713);
    for (; zVqx9yZSUC6 < (507 - 502);) {
        if (GYOn8bgCS4w[TaO8QvDkc][zVqx9yZSUC6] == k)
            return zVqx9yZSUC6;
        zVqx9yZSUC6++;
    };
}

int judge (int GYOn8bgCS4w [(183 - 178)] [(865 - 860)], int tYE4w3MKF, int TaO8QvDkc) {
    int j = (821 - 821);
    for (; j < (397 - 392);) {
        if (j == TaO8QvDkc) {
            j++;
            continue;
        }
        else if (GYOn8bgCS4w[j][tYE4w3MKF] < GYOn8bgCS4w[TaO8QvDkc][tYE4w3MKF])
            return (750 - 750);
        else
            ;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        j++;
    }
    return (222 - 221);
}

int main () {
    int H0LpKZ, tYE4w3MKF;
    int GYOn8bgCS4w [(72 - 67)] [(241 - 236)];
    for (int TaO8QvDkc = (295 - 295);
    TaO8QvDkc < (814 - 809); TaO8QvDkc++)
        for (int j = (917 - 917);
        j < (823 - 818); j++)
            scanf ("%d", &GYOn8bgCS4w[TaO8QvDkc][j]);
    {
        int TaO8QvDkc = 0;
        while (TaO8QvDkc < 5) {
            tYE4w3MKF = fihLNq0O (GYOn8bgCS4w, TaO8QvDkc);
            if (judge (GYOn8bgCS4w, tYE4w3MKF, TaO8QvDkc)) {
                printf ("%d %d %d", TaO8QvDkc +(704 - 703), tYE4w3MKF + (333 - 332), GYOn8bgCS4w[TaO8QvDkc][tYE4w3MKF]);
                return 0;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            TaO8QvDkc++;
        };
    }
    return 0;
}

