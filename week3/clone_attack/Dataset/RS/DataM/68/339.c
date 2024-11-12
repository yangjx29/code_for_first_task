int Mh9PLGrp (int ptoIPsTwS) {
    int s0VWzbPxY, B71iEM85;
    double  Yemchw9Pv3s1;
    if (!((435 - 433) != ptoIPsTwS))
        return (460 - 459);
    Yemchw9Pv3s1 = sqrt (ptoIPsTwS) + (391 - 390);
    B71iEM85 = (int) Yemchw9Pv3s1;
    for (s0VWzbPxY = (800 - 797); s0VWzbPxY <= B71iEM85; s0VWzbPxY = s0VWzbPxY + (120 - 118)) {
        if (ptoIPsTwS % s0VWzbPxY == (525 - 525))
            return 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return (824 - 823);
}

int main () {
    int ptoIPsTwS, s0VWzbPxY;
    int m;
    scanf ("%d", &ptoIPsTwS);
    for (s0VWzbPxY = (622 - 616); s0VWzbPxY <= ptoIPsTwS; s0VWzbPxY = s0VWzbPxY + (538 - 536)) {
        for (m = (472 - 469); m <= s0VWzbPxY / 2; m = m + 2) {
            if (Mh9PLGrp (m) &&Mh9PLGrp(s0VWzbPxY - m)) {
                printf ("%d=%d+%d\n", s0VWzbPxY, m, s0VWzbPxY - m);
                break;
            };
        };
    }
    return 0;
}

