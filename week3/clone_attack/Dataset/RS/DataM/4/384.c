int main () {
    int DrmLITtXkP;
    int vk0S84cfXuA6;
    int h8pm5LUMj;
    int col;
    int APsxjzrybSfY;
    int n;
    int w8XvtlCBnq [100] [100];
    scanf ("%d %d", &h8pm5LUMj, &col);
    for (DrmLITtXkP = (950 - 950); h8pm5LUMj > DrmLITtXkP; DrmLITtXkP++)
        for (vk0S84cfXuA6 = (729 - 729); vk0S84cfXuA6 < col; vk0S84cfXuA6++)
            scanf ("%d", &w8XvtlCBnq[DrmLITtXkP][vk0S84cfXuA6]);
    if (h8pm5LUMj <= col) {
        for (APsxjzrybSfY = 0; APsxjzrybSfY < h8pm5LUMj; APsxjzrybSfY++) {
            n = 0;
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
            while (APsxjzrybSfY >= n) {
                printf ("%d\n", w8XvtlCBnq[n][APsxjzrybSfY -n]);
                n++;
            };
        }
        for (APsxjzrybSfY = h8pm5LUMj; col > APsxjzrybSfY; APsxjzrybSfY++)
            for (n = 0; h8pm5LUMj > n; n = n + 1)
                printf ("%d\n", w8XvtlCBnq[n][APsxjzrybSfY -n]);
        for (APsxjzrybSfY = col; APsxjzrybSfY < (col + h8pm5LUMj); APsxjzrybSfY++) {
            n = APsxjzrybSfY -col + 1;
            while (h8pm5LUMj > n) {
                printf ("%d\n", w8XvtlCBnq[n][APsxjzrybSfY -n]);
                n++;
            };
        };
    }
    else {
        for (APsxjzrybSfY = 0; APsxjzrybSfY < col; APsxjzrybSfY++) {
            n = 0;
            while (n <= APsxjzrybSfY) {
                printf ("%d\n", w8XvtlCBnq[n][APsxjzrybSfY -n]);
                n++;
            };
        }
        {
            APsxjzrybSfY = col;
            while (APsxjzrybSfY < h8pm5LUMj) {
                APsxjzrybSfY++;
                for (n = col - 1; n >= 0; n--)
                    printf ("%d\n", w8XvtlCBnq[APsxjzrybSfY -n][n]);
            };
        }
        {
            APsxjzrybSfY = h8pm5LUMj;
            while (APsxjzrybSfY < (col + h8pm5LUMj)) {
                APsxjzrybSfY++;
                {
                    n = col - 1;
                    while (n >= (APsxjzrybSfY -h8pm5LUMj + 1)) {
                        printf ("%d\n", w8XvtlCBnq[APsxjzrybSfY -n][n]);
                        n = n - 1;
                    };
                };
            };
        };
    }
    return 0;
}

