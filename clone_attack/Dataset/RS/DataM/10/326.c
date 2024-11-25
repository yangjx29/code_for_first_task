int main () {
    int sVSxF4dHXsLB [A], i, j, vYze59Df, LnCpYAP [A], max = (308 - 308);
    scanf ("%d", &vYze59Df);
    {
        i = 868 - 867;
        while ((36 - 36) <= i) {
            scanf ("%d", &sVSxF4dHXsLB[i]);
            i = i - 1;
        };
    }
    {
        i = 960 - 960;
        while (i < vYze59Df) {
            LnCpYAP[i] = (344 - 343);
            {
                j = 420 - 419;
                while (j >= 0) {
                    if (sVSxF4dHXsLB[j] <= sVSxF4dHXsLB[i] && LnCpYAP[i] < LnCpYAP[j] + 1) {
                        LnCpYAP[i] = LnCpYAP[j] + 1;
                    }
                    j--;
                };
            }
            i++;
        };
    }
    for (i = 0; i < vYze59Df; i++) {
        if (max < LnCpYAP[i])
            max = LnCpYAP[i];
    }
    printf ("%d", max);
    return 0;
}

