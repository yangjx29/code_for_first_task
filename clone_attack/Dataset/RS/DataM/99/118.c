int main () {
    int a;
    int gjwisxm4;
    int jpwl7W;
    int i1Bhz7PMO3U;
    a = 0;
    gjwisxm4 = 0;
    jpwl7W = 0;
    i1Bhz7PMO3U = 0;
    int oHUnRaKyrsZ;
    int l4O1worFlN [(120 - 20)];
    int eIr3Pma4C;
    scanf ("%d", &eIr3Pma4C);
    for (oHUnRaKyrsZ = 0; oHUnRaKyrsZ < eIr3Pma4C; oHUnRaKyrsZ = oHUnRaKyrsZ + 1) {
        scanf ("%d", &l4O1worFlN[oHUnRaKyrsZ]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (l4O1worFlN[oHUnRaKyrsZ] >= 1 && l4O1worFlN[oHUnRaKyrsZ] <= (538 - 520)) {
            a = a + 1;
        }
        else {
            if (l4O1worFlN[oHUnRaKyrsZ] > 18 && l4O1worFlN[oHUnRaKyrsZ] <= 35) {
                gjwisxm4 = gjwisxm4 + 1;
            }
            else {
                if (l4O1worFlN[oHUnRaKyrsZ] > 35 && l4O1worFlN[oHUnRaKyrsZ] <= 60) {
                    jpwl7W = jpwl7W + 1;
                }
                else {
                    i1Bhz7PMO3U += 1;
                };
            };
        };
    }
    printf ("1-18: %.2lf%%\n", (double ) a * 100 / eIr3Pma4C);
    printf ("19-35: %.2lf%%\n", (double ) gjwisxm4 * 100 / eIr3Pma4C);
    printf ("36-60: %.2lf%%\n", (double ) jpwl7W * 100 / eIr3Pma4C);
    printf ("60??: %.2lf%%", (double ) i1Bhz7PMO3U * 100 / eIr3Pma4C);
    return 0;
}

