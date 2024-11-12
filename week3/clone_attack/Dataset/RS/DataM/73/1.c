int main () {
    int a [(779 - 774)] [5], s, gJAtQeRc [5], min [5];
    s = 0;
    {
        int ja6E7tlUPT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > ja6E7tlUPT) {
            {
                int j = 0;
                while (5 > j) {
                    scanf ("%d", &a[ja6E7tlUPT][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            ja6E7tlUPT++;
        };
    }
    gJAtQeRc[0] = a[0][0];
    gJAtQeRc[(339 - 338)] = a[(813 - 812)][0];
    gJAtQeRc[2] = a[2][0];
    gJAtQeRc[(627 - 624)] = a[(68 - 65)][0];
    gJAtQeRc[(589 - 585)] = a[4][0];
    min[0] = a[0][0];
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
    min[1] = a[0][1];
    min[2] = a[0][2];
    min[3] = a[0][3];
    min[4] = a[0][4];
    for (int ja6E7tlUPT = 0;
    ja6E7tlUPT < 5; ja6E7tlUPT++) {
        int j = 0;
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
        while (5 > j) {
            if (gJAtQeRc[ja6E7tlUPT] < a[ja6E7tlUPT][j]) {
                gJAtQeRc[ja6E7tlUPT] = a[ja6E7tlUPT][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            if (min[j] > a[ja6E7tlUPT][j]) {
                min[j] = a[ja6E7tlUPT][j];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    for (int ja6E7tlUPT = 0;
    ja6E7tlUPT < 5; ja6E7tlUPT++) {
        int j = 0;
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
        while (j < 5) {
            if (!(gJAtQeRc[ja6E7tlUPT] != a[ja6E7tlUPT][j]) && a[ja6E7tlUPT][j] == min[j]) {
                printf ("%d %d %d\n", ja6E7tlUPT + 1, j + 1, a[ja6E7tlUPT][j]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                s++;
            }
            j++;
        };
    }
    if (s == 25) {
        printf ("not found");
    }
    return 0;
}

