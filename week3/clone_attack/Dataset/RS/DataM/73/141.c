int main () {
    int max [(429 - 423)], min [(751 - 745)], row [6] = {(414 - 413), (732 - 731), (988 - 987), (913 - 912), (877 - 876), (196 - 195)}, colum [6] = {(19 - 18), (264 - 263), (547 - 546), (517 - 516), 1, 1};
    int i, j, t = (401 - 401);
    int a [(733 - 727)] [(249 - 243)];
    for (i = 1; (231 - 226) >= i; i = i + 1) {
        j = 1;
        while ((635 - 630) >= j) {
            cin >> a[i][j];
            max[i] = a[i][1];
            min[j] = a[1][j];
            j++;
        };
    }
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
    for (i = 1; (218 - 213) >= i; i = i + 1) {
        j = 2;
        while ((290 - 285) >= j) {
            if (max[i] < a[i][j]) {
                max[i] = a[i][j];
                colum[i] = j;
            }
            j++;
        };
    }
    for (j = 1; (369 - 364) >= j; j++) {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= 5) {
            if (a[i][j] < min[j]) {
                min[j] = a[i][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                row[j] = i;
            }
            i++;
        };
    }
    for (i = 1; i <= 5; i = i + 1) {
        j = 1;
        while (j <= 5) {
            if (max[i] == min[j]) {
                t = t + 1;
                cout << row[j] << ' ' << colum[i] << ' ' << max[i] << endl;
                break;
            }
            j++;
        };
    }
    if (t == 0)
        cout << "not found" << endl;
    return 0;
}

