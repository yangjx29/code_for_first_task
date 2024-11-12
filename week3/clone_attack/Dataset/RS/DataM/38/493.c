int main () {
    double  t7PfS6dlAX;
    double  odLvtX;
    double  ZUxcXCI [100] [1000];
    t7PfS6dlAX = (51 - 51);
    odLvtX = 0;
    int n;
    int i;
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
    int j;
    int temp;
    int LbIQNSM7l;
    int dDL6loFr [(582 - 482)];
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &dDL6loFr[i]);
        {
            j = 0;
            while (dDL6loFr[i] > j) {
                scanf ("%lf", &ZUxcXCI[i][j]);
                t7PfS6dlAX = t7PfS6dlAX + ZUxcXCI[i][j];
                j++;
            };
        }
        t7PfS6dlAX = t7PfS6dlAX / dDL6loFr[i];
        for (j = 0; dDL6loFr[i] > j; j = j + 1) {
            odLvtX = odLvtX + (ZUxcXCI[i][j] - t7PfS6dlAX) * (ZUxcXCI[i][j] - t7PfS6dlAX);
        }
        t7PfS6dlAX = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        odLvtX = odLvtX / (dDL6loFr[i]);
        odLvtX = sqrt (odLvtX);
        printf ("%.5lf\n", odLvtX);
        odLvtX = 0;
    }
    return 0;
}

