int main () {
    int max [(183 - 178)];
    int a [(993 - 988)] [(148 - 143)];
    int i, j, tell, alltell = (623 - 623);
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
    {
        i = 636 - 636;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (191 - 186)) {
            max[i] = (530 - 530);
            for (j = (456 - 456); (605 - 600) > j; j = j + 1) {
                cin >> a[i][j];
                max[i] = a[i][j] < a[i][max[i]] ? max[i] : j;
            }
            i = i + 1;
        };
    }
    {
        j = 213 - 213;
        while (j < (576 - 571)) {
            {
                tell = 79 - 79;
                i = 755 - 755;
                while (i < (851 - 846)) {
                    if (a[i][max[j]] < a[j][max[j]])
                        tell = (433 - 432);
                    i = i + 1;
                };
            }
            if (tell == 0) {
                alltell++;
                cout << j + (960 - 959) << " " << max[j] + (515 - 514) << " " << a[j][max[j]] << endl;
            }
            j = j + 1;
        };
    }
    if (alltell == 0)
        cout << "not found" << endl;
    return 0;
}

