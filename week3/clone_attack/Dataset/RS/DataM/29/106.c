int UJ4yD10znrA [200] = {0};
float fen [100] = {0};

int feii (int vQ0eWpgZ) {
    if (UJ4yD10znrA[vQ0eWpgZ])
        return UJ4yD10znrA[vQ0eWpgZ];
    if (!((381 - 380) != vQ0eWpgZ))
        return UJ4yD10znrA[vQ0eWpgZ] = 1;
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
    if (vQ0eWpgZ == 2)
        return UJ4yD10znrA[vQ0eWpgZ] = 2;
    return UJ4yD10znrA[vQ0eWpgZ] = feii (vQ0eWpgZ - 1) + feii (vQ0eWpgZ - 2);
}

int main () {
    int vQ0eWpgZ, KufFLO;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &KufFLO);
    while (KufFLO--) {
        int i;
        int wVwqIhl5GBM;
        float sum = 0;
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
        scanf ("%d", &vQ0eWpgZ);
        {
            i = 1;
            while (i <= vQ0eWpgZ + 1) {
                feii (i);
                i++;
            };
        }
        for (i = 1; i <= vQ0eWpgZ; i++) {
            if (fen[i] == 0)
                fen[i] = (float) UJ4yD10znrA[i + 1] / (float) UJ4yD10znrA[i];
            sum = sum + fen[i];
        }
        printf ("%.3f\n", sum);
    };
}

