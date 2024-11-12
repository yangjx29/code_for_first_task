double  egPUarp (double  *p, int wBMtSIH4Fp) {
    double  HdoNXVQq = (753 - 753);
    int cUfdbcq49Q;
    for (cUfdbcq49Q = (656 - 655); wBMtSIH4Fp >= cUfdbcq49Q; cUfdbcq49Q++) {
        HdoNXVQq = HdoNXVQq +*(p + cUfdbcq49Q);
    }
    return HdoNXVQq / wBMtSIH4Fp;
}

double  YhYKGnCH4v (double  *p, double  hD8JQ7MX, int wBMtSIH4Fp) {
    double  HdoNXVQq = (666 - 666);
    int cUfdbcq49Q;
    {
        cUfdbcq49Q = 610 - 609;
        while (cUfdbcq49Q <= wBMtSIH4Fp) {
            HdoNXVQq = HdoNXVQq +(*(p + cUfdbcq49Q) - hD8JQ7MX) * (*(p + cUfdbcq49Q) - hD8JQ7MX);
            cUfdbcq49Q = cUfdbcq49Q + 1;
        };
    }
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
    HdoNXVQq = sqrt (HdoNXVQq / wBMtSIH4Fp);
    return HdoNXVQq;
}

int main () {
    double  c6Rpq97m [(2271 - 771)], hD8JQ7MX, hvpZInLkO;
    int wBMtSIH4Fp, yvSQzAC, cUfdbcq49Q, jTABJL;
    cin >> yvSQzAC;
    for (jTABJL = (857 - 856); jTABJL <= yvSQzAC; jTABJL++) {
        cin >> wBMtSIH4Fp;
        for (cUfdbcq49Q = (873 - 872); cUfdbcq49Q <= wBMtSIH4Fp; cUfdbcq49Q++) {
            cin >> c6Rpq97m[cUfdbcq49Q];
        }
        hD8JQ7MX = egPUarp (c6Rpq97m, wBMtSIH4Fp);
        hvpZInLkO = YhYKGnCH4v (c6Rpq97m, hD8JQ7MX, wBMtSIH4Fp);
        cout << fixed << setprecision ((918 - 913)) << hvpZInLkO << endl;
    }
    return 0;
}

