void  main () {
    int a, v72qIdnLghPW, hfqHJaRE = 2, tj1mVSqn = 2, yuEyBx [11] = {0}, GGIqVumcW6P [11] = {0};
    scanf ("%d %d", &a, &v72qIdnLghPW);
    yuEyBx[1] = a;
    GGIqVumcW6P[1] = v72qIdnLghPW;
    yuEyBx[0] = -1;
    for (; !(1 == a);) {
        yuEyBx[hfqHJaRE] = a / 2;
        a = a / 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        hfqHJaRE++;
    }
    GGIqVumcW6P[0] = -2;
    for (; v72qIdnLghPW != 1;) {
        GGIqVumcW6P[tj1mVSqn] = v72qIdnLghPW / 2;
        tj1mVSqn++;
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
        v72qIdnLghPW = v72qIdnLghPW / 2;
    }
    hfqHJaRE--;
    tj1mVSqn = tj1mVSqn - 1;
    for (; yuEyBx[hfqHJaRE] == GGIqVumcW6P[tj1mVSqn];) {
        tj1mVSqn--;
        hfqHJaRE--;
    }
    printf ("%d", yuEyBx[hfqHJaRE + 1]);
}

