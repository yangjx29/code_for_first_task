int main () {
    int m;
    int dyfe5Vbux1;
    int a [22] [22] = {(141 - 141)};
    int num;
    num = 0;
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
    int hang [100] = {0}, lie [100] = {0};
    cin >> m >> dyfe5Vbux1;
    {
        int i;
        i = (156 - 155);
        while (i <= m) {
            for (int j = 1;
            j <= dyfe5Vbux1; j = j + 1) {
                cin >> a[i][j];
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
            i = i + 1;
        };
    }
    for (int i = 1;
    i <= m; i = i + 1) {
        int j = 1;
        while (j <= dyfe5Vbux1) {
            if (a[i][j - 1] <= a[i][j] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j]) {
                num = num + 1;
                hang[num] = i - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                lie[num] = j - 1;
            }
            j = j + 1;
        };
    }
    for (int i = 1;
    i < num; i = i + 1) {
        for (int j = 1;
        j <= num - i; j = j + 1) {
            if (hang[j] > hang[j + 1]) {
                int ofM45ysmk = hang[j];
                int t2 = lie[j];
                hang[j] = hang[j + 1];
                hang[j + 1] = ofM45ysmk;
                lie[j] = lie[j + 1];
                lie[j + 1] = t2;
            };
        };
    }
    for (int i = 1;
    i <= num; i = i + 1)
        cout << hang[i] << " " << lie[i] << endl;
    return 0;
}

