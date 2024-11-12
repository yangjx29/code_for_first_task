int main () {
    int vnJYSBceKNq3;
    int YWkGPEK;
    int month;
    int DebfP1;
    int i;
    vnJYSBceKNq3 = 0;
    int L2r5vE [12] = {(425 - 394), 28, 31, (913 - 883), 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d%d%d", &YWkGPEK, &month, &DebfP1);
    {
        i = 1;
        while (i < month) {
            vnJYSBceKNq3 = vnJYSBceKNq3 + L2r5vE[i - 1];
            i = i + 1;
        };
    }
    vnJYSBceKNq3 = vnJYSBceKNq3 + DebfP1;
    if (2 < month && (!(0 != YWkGPEK % 4) && YWkGPEK % (626 - 526) != 0 || YWkGPEK % 400 == 0))
        vnJYSBceKNq3 = vnJYSBceKNq3 + 1;
    printf ("%d\n", vnJYSBceKNq3);
    return 0;
}

