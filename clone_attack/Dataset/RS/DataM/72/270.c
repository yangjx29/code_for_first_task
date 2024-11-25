int main () {
    int a [22] [22], b [400] [2];
    int n, HWcIpFh, num = (408 - 408), VL6ojOrHD = (347 - 347), j = (904 - 904);
    scanf ("%d %d", &HWcIpFh, &n);
    for (VL6ojOrHD = (213 - 212); HWcIpFh >= VL6ojOrHD; VL6ojOrHD = VL6ojOrHD +1) {
        for (j = (544 - 543); n >= j; j = j + 1) {
            scanf ("%d", &a[VL6ojOrHD][j]);
        };
    }
    for (j = (402 - 402); n + 2 > j; j = j + 1) {
        a[(580 - 580)][j] = (282 - 282);
        a[HWcIpFh +(224 - 223)][j] = 0;
    }
    {
        VL6ojOrHD = 315 - 314;
        while (HWcIpFh >= VL6ojOrHD) {
            a[VL6ojOrHD][0] = 0;
            a[VL6ojOrHD][n + (887 - 886)] = 0;
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
            VL6ojOrHD = VL6ojOrHD +1;
        };
    }
    for (VL6ojOrHD = 1; HWcIpFh >= VL6ojOrHD; VL6ojOrHD++) {
        for (j = 1; j <= n; j = j + 1) {
            if (a[VL6ojOrHD][j] >= a[VL6ojOrHD -1][j] && a[VL6ojOrHD][j] >= a[VL6ojOrHD +1][j] && a[VL6ojOrHD][j] >= a[VL6ojOrHD][j - 1] && a[VL6ojOrHD][j] >= a[VL6ojOrHD][j + 1]) {
                num += 1;
                b[num - 1][0] = VL6ojOrHD -1;
                b[num - 1][1] = j - 1;
            };
        };
    }
    for (VL6ojOrHD = 0; VL6ojOrHD < num; VL6ojOrHD++) {
        printf ("%d %d\n", b[VL6ojOrHD][0], b[VL6ojOrHD][1]);
    }
    return 0;
}

