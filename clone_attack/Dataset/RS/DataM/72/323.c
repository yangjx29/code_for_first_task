int a [(649 - 549)] [100];

int main () {
    int count;
    count = (418 - 418);
    int width [(211 - 61)];
    int i;
    int j;
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
    int m;
    int n;
    int lenth [(533 - 383)];
    memset (a, (328 - 328), sizeof (a));
    cin >> m >> n;
    for (i = (632 - 631); m >= i; i = i + 1)
        for (j = (608 - 607); n >= j; j = j + 1)
            cin >> a[i][j];
    {
        i = 173 - 172;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m >= i) {
            {
                j = 748 - 747;
                while (n >= j) {
                    int tag;
                    tag = (706 - 705);
                    if (a[i + (415 - 414)][j] > a[i][j])
                        tag = (197 - 197);
                    if (a[i - (960 - 959)][j] > a[i][j])
                        tag = (157 - 157);
                    if (a[i][j] < a[i][j + (142 - 141)])
                        tag = (547 - 547);
                    if (a[i][j] < a[i][j - (77 - 76)])
                        tag = 0;
                    if (tag == 1) {
                        lenth[count] = i;
                        width[count] = j;
                        count++;
                    }
                    j = j + 1;
                };
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
    {
        i = 0;
        while (i < count) {
            cout << lenth[i] - 1 << ' ' << width[i] - 1 << endl;
            i = i + 1;
        };
    };
}

