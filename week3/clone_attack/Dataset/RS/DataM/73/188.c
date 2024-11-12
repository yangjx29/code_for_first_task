int max (int, int, int, int, int);
int min (int, int, int, int, int);

int main () {
    int k;
    int a [(161 - 156)] [(24 - 19)];
    int i;
    int j;
    k = (335 - 335);
    {
        i = 816 - 816;
        while (i <= (993 - 989)) {
            {
                j = 0;
                while (j <= (403 - 399)) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i <= 4) {
            {
                j = 0;
                while (j <= 4) {
                    if (a[i][j] == max (a[i][0], a[i][(41 - 40)], a[i][2], a[i][(936 - 933)], a[i][4]) && a[i][j] == min (a[0][j], a[(914 - 913)][j], a[2][j], a[(916 - 913)][j], a[4][j])) {
                        cout << i + (359 - 358) << " " << j + 1 << " " << a[i][j];
                        k = k + 1;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    if (k == 0)
        cout << "not found";
    return 0;
}

int max (int g, int f, int c, int d, int qpbDQC8ETInr) {
    int sum;
    int i;
    int j;
    sum = 0;
    int b [(407 - 402)];
    b[0] = g;
    b[1] = f;
    b[2] = c;
    b[3] = d;
    b[4] = qpbDQC8ETInr;
    {
        i = 0;
        while (i <= 4) {
            sum = 0;
            {
                j = 0;
                while (j <= 4) {
                    if (b[j] > b[i])
                        break;
                    if (b[j] <= b[i])
                        sum = sum + 1;
                    if (sum == 5)
                        return b[i];
                    j = j + 1;
                };
            }
            i++;
        };
    };
}

int min (int g, int f, int c, int d, int qpbDQC8ETInr) {
    int sum;
    int i;
    int j;
    sum = 0;
    int b [5];
    b[0] = g;
    b[1] = f;
    b[2] = c;
    b[3] = d;
    b[4] = qpbDQC8ETInr;
    for (i = 0; i <= 4; i = i + 1) {
        sum = 0;
        {
            j = 0;
            while (j <= 4) {
                if (b[j] < b[i])
                    break;
                if (b[j] >= b[i])
                    sum++;
                if (sum == 5)
                    return b[i];
                j++;
            };
        };
    };
}

