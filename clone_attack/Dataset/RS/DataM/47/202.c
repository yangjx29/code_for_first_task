int main (void ) {
    int loCZi0;
    int arr [100];
    int F2Vw4tD7fJH;
    scanf ("%d", &F2Vw4tD7fJH);
    {
        loCZi0 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (loCZi0 < F2Vw4tD7fJH) {
            scanf ("%d", &arr[loCZi0]);
            loCZi0 = loCZi0 + 1;
        };
    }
    {
        loCZi0 = 0;
        while (F2Vw4tD7fJH / 2 > loCZi0) {
            arr[loCZi0] ^= arr[F2Vw4tD7fJH -loCZi0 - (721 - 720)];
            arr[F2Vw4tD7fJH -loCZi0 - (557 - 556)] = arr[F2Vw4tD7fJH -loCZi0 - (557 - 556)] ^ (arr[loCZi0]);
            arr[loCZi0] ^= arr[F2Vw4tD7fJH -loCZi0 - 1];
            loCZi0 = loCZi0 + 1;
        };
    }
    {
        loCZi0 = 0;
        while (loCZi0 < F2Vw4tD7fJH) {
            printf ("%d", arr[loCZi0]);
            if (loCZi0 != F2Vw4tD7fJH -1)
                printf (" ");
            loCZi0 = loCZi0 + 1;
        };
    }
    return 0;
}

