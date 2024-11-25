int main () {
    int i;
    int m, uBNL6XOIj8, k;
    int sz [100] [100];
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
    scanf ("%d", &k);
    for (int h = 0;
    h < k; h = h + 1) {
        int sum;
        sum = 0;
        scanf ("%d%d", &m, &uBNL6XOIj8);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
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
            while (i < m) {
                {
                    int aXRihFI1k = 0;
                    while (aXRihFI1k < uBNL6XOIj8) {
                        scanf ("%d", &sz[i][aXRihFI1k]);
                        aXRihFI1k = aXRihFI1k + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            int aXRihFI1k = 0;
            while (aXRihFI1k < uBNL6XOIj8) {
                sum += sz[0][aXRihFI1k];
                sum += sz[m - 1][aXRihFI1k];
                aXRihFI1k++;
            };
        }
        {
            i = 1;
            while (i < m - 1) {
                sum += sz[i][0];
                sum += sz[i][uBNL6XOIj8 - 1];
                i = i + 1;
            };
        }
        printf ("%d\n", sum);
    }
    return 0;
}

