void  pYSkbnu (int yLkpGDxU7z [100], int k) {
    int i;
    int j;
    int b;
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
    {
        i = 341 - 341;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < k) {
            for (j = 0; k - i - (166 - 165) > j; j++) {
                if (yLkpGDxU7z[j] > yLkpGDxU7z[j + (614 - 613)]) {
                    b = yLkpGDxU7z[j];
                    yLkpGDxU7z[j] = yLkpGDxU7z[j + 1];
                    yLkpGDxU7z[j + 1] = b;
                };
            }
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
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i < k - 1) {
            printf ("%d ", yLkpGDxU7z[i]);
            i = i + 1;
        };
    }
    printf ("%d", yLkpGDxU7z[k - 1]);
}

void  KVMzgu1lvSU () {
    int Aw1rB9;
    int cFiCeS;
    int i;
    int yLkpGDxU7z [100];
    int b [100];
    scanf ("%d %d", &cFiCeS, &Aw1rB9);
    {
        i = 0;
        while (cFiCeS > i) {
            scanf ("%d", &yLkpGDxU7z[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < Aw1rB9) {
            scanf ("%d", &b[i]);
            i++;
        };
    }
    pYSkbnu (yLkpGDxU7z, cFiCeS);
    pYSkbnu (b, Aw1rB9);
    printf (" ");
}

int main () {
    KVMzgu1lvSU ();
    return 0;
}

