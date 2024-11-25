int main () {
    struct   distance {
        int point1 [(619 - 616)];
        int point2 [3];
        double  dis;
    };
    struct   distance iLpx9Yf [(350 - 250)], middle;
    int i, j, k, n, point [100] [3];
    cin >> n;
    for (i = (786 - 786); i < n; i = i + 1) {
        j = 416 - 416;
        while (j < 3) {
            cin >> point[i][j];
            j = j + 1;
        };
    }
    j = (606 - 606);
    k = (691 - 690);
    for (i = (159 - 159); i < n * (n - (735 - 734)) / (839 - 837); i = i + 1) {
        iLpx9Yf[i].point1[0] = point[j][0];
        iLpx9Yf[i].point1[(373 - 372)] = point[j][1];
        iLpx9Yf[i].point1[(952 - 950)] = point[j][(748 - 746)];
        iLpx9Yf[i].point2[0] = point[k][0];
        iLpx9Yf[i].point2[1] = point[k][1];
        iLpx9Yf[i].point2[2] = point[k][2];
        iLpx9Yf[i].dis = sqrt ((iLpx9Yf[i].point2[0] - iLpx9Yf[i].point1[0]) * (iLpx9Yf[i].point2[0] - iLpx9Yf[i].point1[0]) + (iLpx9Yf[i].point2[1] - iLpx9Yf[i].point1[1]) * (iLpx9Yf[i].point2[1] - iLpx9Yf[i].point1[1]) + (iLpx9Yf[i].point2[2] - iLpx9Yf[i].point1[2]) * (iLpx9Yf[i].point2[2] - iLpx9Yf[i].point1[2]));
        k = k + 1;
        if (k == n) {
            j = j + 1;
            k = j + 1;
        };
    }
    {
        i = 0;
        while (i < n * (n - 1) / 2) {
            {
                j = n - 1;
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
                while (j > i) {
                    if (iLpx9Yf[j].dis > iLpx9Yf[j - 1].dis) {
                        middle = iLpx9Yf[j];
                        iLpx9Yf[j] = iLpx9Yf[j - 1];
                        iLpx9Yf[j - 1] = middle;
                    }
                    j = j - 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < n * (n - 1) / 2; i++)
        cout << fixed << setprecision (2) << "(" << iLpx9Yf[i].point1[0] << "," << iLpx9Yf[i].point1[1] << "," << iLpx9Yf[i].point1[2] << ")-(" << iLpx9Yf[i].point2[0] << "," << iLpx9Yf[i].point2[1] << "," << iLpx9Yf[i].point2[2] << ")=" << iLpx9Yf[i].dis << endl;
    return 0;
}

