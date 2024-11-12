int main () {
    int yG7JBvudN8Q, D0hWxbX, w5S8ZHsnGhAB, BFopq2hW1 [N] [M], max, maxj, gDLln20X5qSe;
    for (yG7JBvudN8Q = 0; yG7JBvudN8Q < N; yG7JBvudN8Q = yG7JBvudN8Q + 1) {
        D0hWxbX = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (D0hWxbX < M) {
            scanf ("%d", &BFopq2hW1[yG7JBvudN8Q][D0hWxbX]);
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
            D0hWxbX = D0hWxbX +1;
        };
    }
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
    for (yG7JBvudN8Q = 0; yG7JBvudN8Q < N; yG7JBvudN8Q++) {
        maxj = 0;
        max = BFopq2hW1[yG7JBvudN8Q][0];
        {
            D0hWxbX = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (D0hWxbX < M) {
                if (BFopq2hW1[yG7JBvudN8Q][D0hWxbX] > max) {
                    max = BFopq2hW1[yG7JBvudN8Q][D0hWxbX];
                    maxj = D0hWxbX;
                }
                D0hWxbX = D0hWxbX +1;
            };
        }
        gDLln20X5qSe = 1;
        for (w5S8ZHsnGhAB = 0; w5S8ZHsnGhAB < N; w5S8ZHsnGhAB = w5S8ZHsnGhAB + 1)
            if (max > BFopq2hW1[w5S8ZHsnGhAB][maxj]) {
                gDLln20X5qSe = 0;
                continue;
            }
        if (gDLln20X5qSe) {
            printf ("%d %d %d\n", yG7JBvudN8Q + 1, maxj + 1, max);
            break;
        };
    }
    if (!gDLln20X5qSe)
        ;
}

