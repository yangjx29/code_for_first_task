int main () {
    int YPcj7nWg2XT3;
    int m [(1005 - 985)];
    int lA8KdP6hVofN [20];
    int Xia4qEebI (int fIQ6KuRDr, int fohXI5OLK3C);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> YPcj7nWg2XT3;
    for (int JndmeIbYavg7 = (186 - 186);
    YPcj7nWg2XT3 > JndmeIbYavg7; JndmeIbYavg7++) {
        cin >> m[JndmeIbYavg7] >> lA8KdP6hVofN[JndmeIbYavg7];
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
    for (int JndmeIbYavg7 = (614 - 614);
    YPcj7nWg2XT3 > JndmeIbYavg7; JndmeIbYavg7++) {
        cout << Xia4qEebI (m[JndmeIbYavg7], lA8KdP6hVofN[JndmeIbYavg7]) << endl;
    }
    return 0;
}

int Xia4qEebI (int fIQ6KuRDr, int fohXI5OLK3C) {
    if (!(0 != fIQ6KuRDr) || fohXI5OLK3C == 1)
        return 1;
    if (fIQ6KuRDr < fohXI5OLK3C)
        return Xia4qEebI (fIQ6KuRDr, fIQ6KuRDr);
    return Xia4qEebI (fIQ6KuRDr, fohXI5OLK3C - 1) + Xia4qEebI (fIQ6KuRDr - fohXI5OLK3C, fohXI5OLK3C);
}

