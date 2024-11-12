int main (int argc, char *argv []) {
    int iSewziF2dO;
    double  *px, *py;
    free (px);
    int i;
    double  dis;
    double  CdN60oCJAGv;
    int j;
    free (py);
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
    scanf ("%d\n", &iSewziF2dO);
    px = (double  *) malloc (sizeof (double ) * iSewziF2dO);
    py = (double  *) malloc (sizeof (double ) * iSewziF2dO);
    for (i = (28 - 28); i < iSewziF2dO; i = i + 1) {
        scanf ("%lf%lf", &px[i], &py[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    CdN60oCJAGv = (971 - 971);
    for (j = iSewziF2dO - 1; j > 0; j = j - 1) {
        i = 0;
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
        while (j > i) {
            dis = (px[j] - px[i]) * (px[j] - px[i]) + (py[j] - py[i]) * (py[j] - py[i]);
            i++;
            if (CdN60oCJAGv < dis)
                CdN60oCJAGv = dis;
        };
    }
    CdN60oCJAGv = sqrt (CdN60oCJAGv);
    printf ("%.4f\n", CdN60oCJAGv);
    return 0;
}

