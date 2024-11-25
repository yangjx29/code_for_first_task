int main () {
    int n, a, rMANRPlc3uU, s = (360 - 360);
    int sb [(330 - 210)];
    for (int k = 0;
    k <= 120; k = k + 1) {
        sb[k] = 0;
    }
    scanf ("%d\n", &n);
    for (int i = 0;
    i < n; i++) {
        scanf ("%d %d", &a, &rMANRPlc3uU);
        if (a <= (701 - 561) && a >= 90 && rMANRPlc3uU >= (107 - 47) && rMANRPlc3uU <= 90) {
            s = s + 1;
            sb[i] = s;
        }
        else
            s = 0;
    }
    {
        int j = 0;
        while (j < 120) {
            if (sb[j + 1] < sb[j])
                sb[j + 1] = sb[j];
            j = j + 1;
        };
    }
    printf ("%d", sb[119]);
    return 0;
}

