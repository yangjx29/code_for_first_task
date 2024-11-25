int main () {
    char r0GELXn8Z2T [(410 - 10)];
    gets (r0GELXn8Z2T);
    int s;
    int t;
    int suhFKw7tWaQm;
    int n;
    int j;
    int PYaM9mrfvR;
    int MvgJXYZ;
    char aRge4HiPkJzm [400] [400];
    int sum [400];
    for (suhFKw7tWaQm = 0; suhFKw7tWaQm < 400; suhFKw7tWaQm = suhFKw7tWaQm + 1)
        sum[suhFKw7tWaQm] = 1;
    scanf ("%d\n", &n);
    PYaM9mrfvR = strlen (r0GELXn8Z2T);
    for (suhFKw7tWaQm = 0; PYaM9mrfvR -n >= suhFKw7tWaQm; suhFKw7tWaQm = suhFKw7tWaQm + 1)
        for (j = suhFKw7tWaQm; j < suhFKw7tWaQm + n; j = j + 1)
            aRge4HiPkJzm[suhFKw7tWaQm][j - suhFKw7tWaQm] = r0GELXn8Z2T[j];
    for (suhFKw7tWaQm = 0; PYaM9mrfvR -n >= suhFKw7tWaQm; suhFKw7tWaQm++) {
        t = 0;
        if (sum[suhFKw7tWaQm] != 0) {
            for (j = 0; PYaM9mrfvR -n >= j; j++) {
                for (s = j; s < j + n; s++)
                    if (r0GELXn8Z2T[s] != aRge4HiPkJzm[suhFKw7tWaQm][s - j])
                        break;
                if (!(j + n != s)) {
                    sum[j] = 0;
                    t = t + 1;
                };
            }
            sum[suhFKw7tWaQm] = t;
        };
    }
    MvgJXYZ = 1;
    for (suhFKw7tWaQm = 0; suhFKw7tWaQm <= PYaM9mrfvR -n; suhFKw7tWaQm++)
        if (MvgJXYZ < sum[suhFKw7tWaQm])
            MvgJXYZ = sum[suhFKw7tWaQm];
    if (MvgJXYZ != 1) {
        printf ("%d\n", MvgJXYZ);
        for (suhFKw7tWaQm = 0; suhFKw7tWaQm < PYaM9mrfvR -n; suhFKw7tWaQm++)
            if (sum[suhFKw7tWaQm] == MvgJXYZ) {
                for (j = 0; j < n; j++)
                    printf ("%c", aRge4HiPkJzm[suhFKw7tWaQm][j]);
            };
    }
    else
        ;
    return 0;
}

