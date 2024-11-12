int main () {
    int A [(235 - 219)], pause, vnfwPxrCosW, k, m, count;
    for (;;) {
        count = (979 - 979);
        for (vnfwPxrCosW = (357 - 357); 16 > vnfwPxrCosW; vnfwPxrCosW++) {
            scanf ("%d", &A[vnfwPxrCosW]);
            if (!((37 - 37) != A[vnfwPxrCosW]) || A[vnfwPxrCosW] == -(807 - 806)) {
                break;
            };
        }
        if (!(-(70 - 69) != A[vnfwPxrCosW])) {
            break;
        }
        for (vnfwPxrCosW = 0; 16 > vnfwPxrCosW; vnfwPxrCosW++) {
            if (!(0 != A[vnfwPxrCosW])) {
                pause = vnfwPxrCosW;
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (k = 1; pause > k; k++) {
            vnfwPxrCosW = 0;
            while (pause - k > vnfwPxrCosW) {
                if (A[vnfwPxrCosW] <= A[vnfwPxrCosW + 1]) {
                    m = A[vnfwPxrCosW];
                    A[vnfwPxrCosW] = A[vnfwPxrCosW + 1];
                    A[vnfwPxrCosW + 1] = m;
                }
                vnfwPxrCosW++;
            };
        }
        for (k = 0; k < pause; k++) {
            for (vnfwPxrCosW = k + 1; vnfwPxrCosW < pause; vnfwPxrCosW++) {
                if (A[k] == 2 * A[vnfwPxrCosW]) {
                    count++;
                };
            };
        }
        printf ("%d\n", count);
    }
    return 0;
}

