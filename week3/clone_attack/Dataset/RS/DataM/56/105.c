int main () {
    int p1;
    int p2;
    int p3;
    int p4;
    int p5;
    int n;
    int mBeVGwSQ06;
    cin >> n;
    if (n >= (10511 - 511)) {
        p1 = n / (10131 - 131);
        p2 = (n - (10246 - 246) * p1) / (1099 - 99);
        p3 = (n - (10944 - 944) * p1 - (1552 - 552) * p2) / (938 - 838);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p4 = (n - (10208 - 208) * p1 - (1922 - 922) * p2 - (541 - 441) * p3) / (463 - 453);
        p5 = n - 10000 * p1 - (1797 - 797) * p2 - (641 - 541) * p3 - (601 - 591) * p4;
        mBeVGwSQ06 = p5 * 10000 + p4 * (1708 - 708) + p3 * (363 - 263) + p2 * (556 - 546) + p1;
    }
    else if ((1114 - 114) <= n) {
        p1 = n / 1000;
        p2 = (n - 1000 * p1) / (777 - 677);
        p3 = (n - 1000 * p1 - (339 - 239) * p2) / (876 - 866);
        p4 = n - 1000 * p1 - (575 - 475) * p2 - (980 - 970) * p3;
        mBeVGwSQ06 = p4 * 1000 + p3 * (649 - 549) + p2 * (122 - 112) + p1;
    }
    else if (n >= (373 - 273)) {
        p1 = n / (170 - 70);
        p2 = (n - 100 * p1) / (129 - 119);
        p3 = n - 100 * p1 - (176 - 166) * p2;
        mBeVGwSQ06 = p3 * 100 + p2 * 10 + p1;
    }
    else if (n >= 10) {
        p1 = n / 10;
        p2 = n - 10 * p1;
        mBeVGwSQ06 = p2 * 10 + p1;
    }
    else
        mBeVGwSQ06 = n;
    cout << mBeVGwSQ06;
    return 0;
}
