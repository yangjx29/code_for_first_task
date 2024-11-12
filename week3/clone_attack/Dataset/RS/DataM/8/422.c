int n, m;
int a [2] [(1097 - 997)];

void  order (int x, int y) {
    int i;
    int j;
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        i = 595 - 595;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y > i) {
            cin >> a[x][i];
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
    for (i = (190 - 190); i < y - (73 - 72); i = i + 1)
        for (j = (585 - 585); y - (694 - 693) - i > j; j++)
            if (a[x][j + (60 - 59)] < a[x][j]) {
                t = a[x][j];
                a[x][j] = a[x][j + (707 - 706)];
                a[x][j + (54 - 53)] = t;
            };
}

void  output () {
    int i;
    for (i = (668 - 668); n > i; i = i + 1)
        cout << a[(720 - 720)][i] << " ";
    for (i = 0; i < m - (450 - 449); i++)
        cout << a[1][i] << " ";
    cout << a[1][m - 1];
}

int main () {
    cin >> n >> m;
    order (0, n), order (1, m);
    output ();
    return 0;
}

