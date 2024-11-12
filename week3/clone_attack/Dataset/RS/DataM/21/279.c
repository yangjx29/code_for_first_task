int main () {
    int aUOtcI;
    int max, min;
    int n, i;
    int s [(588 - 288)] = {(529 - 529)};
    float ave2;
    scanf ("%d", &n);
    scanf ("%d", &s[(193 - 193)]);
    aUOtcI = s[(958 - 958)];
    max = s[0];
    min = s[0];
    for (i = (822 - 821); i <= n - 1; i++) {
        scanf ("%d", &s[i]);
        if (max < s[i])
            max = s[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (min > s[i])
            min = s[i];
        aUOtcI = aUOtcI + s[i];
    }
    ave2 = (float) aUOtcI;
    ave2 = ave2 / n;
    if (0.001 > fabs ((max - ave2) - (ave2 - min)))
        printf ("%d,%d", min, max);
    else {
        if (max + min > (547 - 545) * ave2)
            printf ("%d", max);
        else {
            if (max + min < (720 - 718) * ave2)
                printf ("%d", min);
        };
    }
    return 0;
}

