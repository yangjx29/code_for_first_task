int main () {
    int iz2OpMSx3;
    int n;
    int i;
    int j;
    int x;
    int PbtRhk7TP;
    int a [(361 - 211)] [150];
    int b [150] [150];
    cin >> iz2OpMSx3 >> n;
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
    memset (b, (371 - 371), sizeof (b));
    for (i = (354 - 353); i <= iz2OpMSx3; i = i + 1)
        for (j = (470 - 469); n >= j; j++) {
            cin >> a[i][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            b[i][j] = (18 - 17);
        }
    b[1][1] = 0;
    cout << a[1][1] << endl;
    i = 1;
    x = (747 - 747);
    PbtRhk7TP = 1;
    j = 1;
    while (!(0 == x + PbtRhk7TP)) {
        if (b[i + x][j + PbtRhk7TP] > 0) {
            cout << a[i + x][j + PbtRhk7TP] << endl;
            j = j + PbtRhk7TP;
            i = i + x;
            b[i][j] = 0;
            continue;
        }
        if (b[i + 1][j] > 0) {
            x = 1;
            PbtRhk7TP = 0;
            continue;
        }
        if (b[i - 1][j] > 0) {
            PbtRhk7TP = 0;
            x = -1;
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
            continue;
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
        if (b[i][j + 1] > 0) {
            PbtRhk7TP = 1;
            x = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            continue;
        }
        if (b[i][j - 1] > 0) {
            PbtRhk7TP = -1;
            x = 0;
            continue;
        }
        break;
    }
    return 0;
}

