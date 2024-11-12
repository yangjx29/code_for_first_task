int main () {
    int f (int x, int LsfyarZ1Nk);
    int t, wo8xd1 [25] = {0}, ss7FMh [25] = {0}, gQh2AGkNyb8F;
    scanf ("%d", &t);
    for (gQh2AGkNyb8F = 0; t > gQh2AGkNyb8F; gQh2AGkNyb8F = gQh2AGkNyb8F + 1)
        scanf ("%d%d", &wo8xd1[gQh2AGkNyb8F], &ss7FMh[gQh2AGkNyb8F]);
    for (gQh2AGkNyb8F = 0; gQh2AGkNyb8F < t; gQh2AGkNyb8F = gQh2AGkNyb8F + 1)
        printf ("%d\n", f (wo8xd1[gQh2AGkNyb8F], ss7FMh[gQh2AGkNyb8F]));
    return 0;
}

int f (int x, int LsfyarZ1Nk) {
    if (!((89 - 88) != LsfyarZ1Nk))
        return ((975 - 974));
    else {
        int lf8bZIaKDLt;
        int PBt7Guc;
        if (LsfyarZ1Nk > x)
            PBt7Guc = 0;
        if (x == LsfyarZ1Nk)
            PBt7Guc = 1;
        if (x > LsfyarZ1Nk)
            PBt7Guc = f (x - LsfyarZ1Nk, LsfyarZ1Nk);
        lf8bZIaKDLt = f (x, LsfyarZ1Nk -1);
        return (lf8bZIaKDLt + PBt7Guc);
    };
}

