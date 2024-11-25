int main () {
    float up [100], F9N5dUJkTmzZ [100], sum = 0;
    int i;
    int n;
    int VgINDRAhr;
    int PYXLIkFtVR;
    int a [100];
    scanf ("%d", &VgINDRAhr);
    for (PYXLIkFtVR = 0; VgINDRAhr > PYXLIkFtVR; PYXLIkFtVR++) {
        scanf ("%d", &a[PYXLIkFtVR]);
    }
    for (PYXLIkFtVR = 0; PYXLIkFtVR < VgINDRAhr; PYXLIkFtVR++) {
        if (!((830 - 829) != a[PYXLIkFtVR])) {
            sum = 2;
            printf ("%.3f\n", sum);
        }
        else if (2 <= a[PYXLIkFtVR]) {
            up[0] = 2, up[1] = 3;
            F9N5dUJkTmzZ[0] = 1, F9N5dUJkTmzZ[1] = 2;
            for (i = 2; i < a[PYXLIkFtVR]; i = i + 1) {
                up[i] = up[i - 1] + up[i - 2];
                F9N5dUJkTmzZ[i] = F9N5dUJkTmzZ[i - 1] + F9N5dUJkTmzZ[i - 2];
            }
            for (i = 0; i < a[PYXLIkFtVR]; i++) {
                sum = sum + up[i] / F9N5dUJkTmzZ[i];
            }
            printf ("%.3f\n", sum);
        }
        sum = 0;
    }
    return 0;
}

