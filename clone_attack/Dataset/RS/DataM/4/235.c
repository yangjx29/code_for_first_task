int main () {
    int VRlAu106E [101] [101];
    int row, col, CKklL6vGsM, j, k, N;
    scanf ("%d %d", &row, &col);
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
    for (CKklL6vGsM = 0; row > CKklL6vGsM; CKklL6vGsM++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < col; j = j + 1) {
            scanf ("%d", &VRlAu106E[CKklL6vGsM][j]);
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
            };
        };
    }
    N = row + col - 2;
    for (k = 0; k <= N; k++) {
        CKklL6vGsM = 0;
        j = k - CKklL6vGsM;
        do {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (0 <= CKklL6vGsM &&0 <= j && CKklL6vGsM < row && j < col) {
                printf ("%d\n", VRlAu106E[CKklL6vGsM][j]);
                j = j - 1;
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
                CKklL6vGsM = CKklL6vGsM +1;
            }
            else {
                CKklL6vGsM = CKklL6vGsM +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j--;
            };
        }
        while (j >= 0);
    }
    return 0;
}

