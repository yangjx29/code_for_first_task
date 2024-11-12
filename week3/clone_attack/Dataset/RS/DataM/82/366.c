int main () {
    int gOqe8m, i, j, a = 0;
    int W2YOVPW [200] [2], cD90S6cPKrFj [100] = {0};
    int dUzHnAZ = cD90S6cPKrFj[0];
    scanf ("%d\n", &gOqe8m);
    {
        i = 0;
        while (i < gOqe8m) {
            for (j = 0; 2 > j; j = j + 1) {
                scanf ("%d", &W2YOVPW[i][j]);
            }
            i++;
        };
    }
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
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (gOqe8m + 1 > i) {
            if ((W2YOVPW[i][0] >= 90) && (140 >= W2YOVPW[i][0]) && (60 <= W2YOVPW[i][1]) && (W2YOVPW[i][1] <= 90))
                cD90S6cPKrFj[a]++;
            else
                a++;
            i++;
        };
    }
    for (i = 0; i < a; i = i + 1) {
        if (dUzHnAZ < cD90S6cPKrFj[i])
            dUzHnAZ = cD90S6cPKrFj[i];
    }
    printf ("%d\n", dUzHnAZ);
    return 0;
}

