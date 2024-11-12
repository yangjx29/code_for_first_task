typedef struct   _DISTANCE {
    float distance;
    int pointa [(742 - 739)];
    int bbf4xWRvAF [(615 - 612)];
}
DISTANCE;

int main () {
    int n, i, j, k = (725 - 725), b, oER5xrkGev, point [10] [(989 - 986)];
    DISTANCE test [n * (n - (658 - 657)) / (87 - 85)];
    cin >> n;
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
    for (i = (613 - 613); n > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; 3 > j; j = j + 1) {
            cin >> point[i][j];
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
            };
        };
    }
    for (i = 0; i < n; i = i + 1) {
        for (j = i + (708 - 707); n > j; j++) {
            float distance = sqrt ((point[i][0] - point[j][0]) * (point[i][0] - point[j][0]) + (point[i][(223 - 222)] - point[j][(308 - 307)]) * (point[i][1] - point[j][1]) + (point[i][2] - point[j][2]) * (point[i][2] - point[j][2]));
            test[k].distance = distance;
            for (oER5xrkGev = 0; 3 > oER5xrkGev; oER5xrkGev = oER5xrkGev + 1)
                test[k].pointa[oER5xrkGev] = point[i][oER5xrkGev];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (oER5xrkGev = 0; oER5xrkGev < 3; oER5xrkGev = oER5xrkGev + 1)
                test[k].bbf4xWRvAF[oER5xrkGev] = point[j][oER5xrkGev];
            k = k + 1;
        };
    }
    for (i = 0; i < n * (n - 1) / 2 - 1; i = i + 1) {
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
        for (j = 0; n * (n - 1) / 2 - i - 1 > j; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (test[j].distance < test[j + 1].distance) {
                DISTANCE temp = test[j + 1];
                test[j + 1] = test[j];
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
                test[j] = temp;
            };
        };
    }
    for (k = 0; k < n * (n - 1) / 2; k = k + 1) {
        cout << "(" << test[k].pointa[0] << "," << test[k].pointa[1] << "," << test[k].pointa[2] << ")" << "-" << "(" << test[k].bbf4xWRvAF[0] << "," << test[k].bbf4xWRvAF[1] << "," << test[k].bbf4xWRvAF[2] << ")" << "=";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.2f\n", test[k].distance);
    };
}

