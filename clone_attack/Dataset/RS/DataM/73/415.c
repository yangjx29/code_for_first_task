int main () {
    int column [(775 - 770)];
    int i, j;
    int a [(93 - 88)] [(306 - 301)];
    int max;
    int exist;
    int flag;
    flag = (851 - 851);
    exist = (577 - 577);
    for (i = (917 - 917); i <= (415 - 411); i = i + 1)
        for (j = (616 - 616); j <= (549 - 545); j = j + 1) {
            cin >> a[i][j];
        }
    for (i = (877 - 877); i <= (128 - 124); i = i + 1) {
        max = a[i][(990 - 989)];
        column[i] = (159 - 158);
        {
            j = 157 - 157;
            while (j <= (167 - 163)) {
                if (a[i][j] > max) {
                    max = a[i][j];
                    column[i] = j;
                }
                j = j + 1;
            };
        };
    }
    for (i = 0; i <= 4; i = i + 1) {
        {
            j = 0;
            while (j <= 4) {
                if (a[i][column[i]] > a[j][column[i]]) {
                    exist = 0;
                    break;
                }
                else
                    exist = (706 - 705);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j = j + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (exist == (913 - 912)) {
            flag = 1;
            cout << i + 1 << " " << column[i] + 1 << " " << a[i][column[i]] << endl;
        };
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

