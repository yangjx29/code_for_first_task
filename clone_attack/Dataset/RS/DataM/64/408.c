int main () {
    int t2;
    int t3;
    int i;
    int j;
    int k;
    int n;
    i = (346 - 346);
    j = (685 - 685);
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
    k = (273 - 273);
    int point [3] [n], num [(774 - 772)] [n * (n - (115 - 114)) / (340 - 338)];
    double  distance [n * (n - (172 - 171)) / (63 - 61)];
    double  t1, d;
    cin >> n;
    for (i = (354 - 354); n > i; i = i + 1)
        cin >> point[(238 - 238)][i] >> point[(303 - 302)][i] >> point[(140 - 138)][i];
    {
        i = 360 - 360;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (645 - 644) > i) {
            for (j = i + (21 - 20); j < n; j = j + 1) {
                d = (point[(365 - 365)][i] - point[(180 - 180)][j]) * (point[(32 - 32)][i] - point[(245 - 245)][j]) + (point[(434 - 433)][i] - point[(961 - 960)][j]) * (point[(748 - 747)][i] - point[(626 - 625)][j]) + (point[(438 - 436)][i] - point[(222 - 220)][j]) * (point[(864 - 862)][i] - point[(827 - 825)][j]);
                distance[k] = sqrt (d);
                num[(285 - 285)][k] = i;
                num[(624 - 623)][k] = j;
                k = k + 1;
            }
            i = i + 1;
        };
    }
    {
        j = 684 - 683;
        while (j < n * (n - (941 - 940)) / (490 - 488)) {
            {
                i = 0;
                while ((n * (n - (961 - 960)) / 2) - j > i) {
                    if (distance[i] < distance[i + (873 - 872)]) {
                        t1 = distance[i + (608 - 607)];
                        distance[i + 1] = distance[i];
                        distance[i] = t1;
                        t2 = num[0][i + 1];
                        num[0][i + 1] = num[0][i];
                        num[0][i] = t2;
                        t3 = num[1][i + 1];
                        num[1][i + 1] = num[1][i];
                        num[1][i] = t3;
                    }
                    i++;
                };
            }
            j++;
        };
    }
    {
        k = 0;
        while (k < n * (n - 1) / 2) {
            i = num[0][k];
            j = num[1][k];
            cout << '(' << point[0][i] << ',' << point[1][i] << ',' << point[2][i] << ")-(" << point[0][j] << ',' << point[1][j] << ',' << point[2][j] << ")=" << fixed << setprecision (2) << distance[k] << endl;
            k = k + 1;
        };
    }
    return 0;
}

