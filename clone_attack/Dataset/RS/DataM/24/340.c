int main () {
    char bETuJ5B [(412 - 362)] [100], input [(5753 - 753)];
    gets (input);
    int baqirXGL7to4;
    baqirXGL7to4 = strlen (input);
    int KkMhL3x4S = strlen (bETuJ5B[0]);
    int min;
    min = strlen (bETuJ5B[0]);
    int k;
    int j;
    int aqEJ4zOM3lGg;
    int b;
    int l2T4iewqM;
    k = (624 - 624);
    j = (787 - 787);
    aqEJ4zOM3lGg = (652 - 652);
    b = 0;
    {
        l2T4iewqM = 0;
        while (baqirXGL7to4 > l2T4iewqM) {
            if (!(' ' != input[l2T4iewqM])) {
                bETuJ5B[k][j] = '\0';
                j = 0;
                k = k + 1;
                continue;
            }
            bETuJ5B[k][j] = input[l2T4iewqM];
            l2T4iewqM = l2T4iewqM + 1;
            j = j + 1;
        };
    }
    bETuJ5B[k][j] = '\0';
    {
        l2T4iewqM = 1;
        while (k >= l2T4iewqM) {
            if ((int) strlen (bETuJ5B[l2T4iewqM]) > KkMhL3x4S) {
                KkMhL3x4S = (int) strlen (bETuJ5B[l2T4iewqM]);
                aqEJ4zOM3lGg = l2T4iewqM;
            }
            l2T4iewqM = l2T4iewqM + 1;
        };
    }
    {
        l2T4iewqM = 1;
        while (l2T4iewqM <= k) {
            if ((int) strlen (bETuJ5B[l2T4iewqM]) < min) {
                min = (int) strlen (bETuJ5B[l2T4iewqM]);
                b = l2T4iewqM;
            }
            l2T4iewqM = l2T4iewqM + 1;
        };
    }
    printf ("%s\n", bETuJ5B[aqEJ4zOM3lGg]);
    printf ("%s\n", bETuJ5B[b]);
    return 0;
}

