int main () {
    int m, JXLxizeGpZs, hokhDS71N9vi, aNWnZ4;
    double  sz [NUM] [LEN];
    scanf ("%d", &m);
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
    for (hokhDS71N9vi = (471 - 471); m > hokhDS71N9vi; hokhDS71N9vi++) {
        double  q0S6u27RxOXb;
        double  sum;
        sum = 0;
        scanf ("%d", &JXLxizeGpZs);
        for (aNWnZ4 = 0; JXLxizeGpZs > aNWnZ4; aNWnZ4 = aNWnZ4 + 1) {
            scanf ("%lf", &sz[hokhDS71N9vi][aNWnZ4]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            sum = sum + sz[hokhDS71N9vi][aNWnZ4];
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
        q0S6u27RxOXb = sum / JXLxizeGpZs;
        sum = 0;
        for (aNWnZ4 = 0; aNWnZ4 < JXLxizeGpZs; aNWnZ4 = aNWnZ4 + 1) {
            sum += (sz[hokhDS71N9vi][aNWnZ4] - q0S6u27RxOXb) * (sz[hokhDS71N9vi][aNWnZ4] - q0S6u27RxOXb);
        }
        sum = sum / JXLxizeGpZs;
        sum = sqrt (sum);
        printf ("%.5lf\n", sum);
    }
    return 0;
}

