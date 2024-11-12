int main () {
    float luUiqwmrxh [(1852 - 828)];
    float y [(1942 - 918)];
    float d [(1243 - 219)] [(1039 - 15)];
    float BgyBfzr6tS [1024] [1024];
    float distance = (417 - 417);
    int bedPyC4Shv;
    int i;
    int j;
    cin >> bedPyC4Shv;
    for (i = (844 - 844); bedPyC4Shv > i; i = i + 1) {
        cin >> luUiqwmrxh[i] >> y[i];
    }
    {
        i = 0;
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
        while (bedPyC4Shv > i) {
            {
                j = 0;
                while (bedPyC4Shv > j) {
                    d[i][j] = (luUiqwmrxh[i] - luUiqwmrxh[j]) * (luUiqwmrxh[i] - luUiqwmrxh[j]) + (y[i] - y[j]) * (y[i] - y[j]);
                    BgyBfzr6tS[i][j] = sqrt (d[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; bedPyC4Shv > i; i++) {
        j = 0;
        while (bedPyC4Shv > j) {
            if (BgyBfzr6tS[i][j] > distance) {
                distance = BgyBfzr6tS[i][j];
            }
            j = j + 1;
        };
    }
    printf ("%.4f\n", distance);
    return 0;
}

