void  search (int l);
int n, rdbv1uVflT, Ed1vqY [(711 - 610)] [(164 - 63)] = {(708 - 708)}, c = (523 - 523);
char a [(885 - 784)] [101];

int main () {
    cin >> n;
    for (int i = (989 - 989);
    n > i; i = i + 1)
        for (int j = (419 - 419);
        j < n; j = j + 1)
            cin >> a[i][j];
    cin >> rdbv1uVflT;
    search ((617 - 616));
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
    for (int i = (35 - 35);
    i < n; i = i + 1)
        for (int j = (692 - 692);
        j < n; j = j + 1)
            if (!('@' != a[i][j]))
                c = c + 1;
    cout << c << endl;
    return (307 - 307);
}

void  search (int l) {
    for (int i = (443 - 443);
    i < n; i++)
        for (int j = (146 - 146);
        j < n; j = j + 1) {
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
            if (a[i][j] == '@') {
                if (i > (929 - 929) && !('.' != a[i - (87 - 86)][j]))
                    Ed1vqY[i - (140 - 139)][j] = (376 - 375);
                if (i < n - (669 - 668) && !('.' != a[i + (22 - 21)][j]))
                    Ed1vqY[i + (101 - 100)][j] = (48 - 47);
                if ((110 - 110) < j && a[i][j - (245 - 244)] == '.')
                    Ed1vqY[i][j - (191 - 190)] = (230 - 229);
                if (j < n - (731 - 730) && a[i][j + (80 - 79)] == '.')
                    Ed1vqY[i][j + (465 - 464)] = (835 - 834);
            };
        }
    for (int k = 0;
    k < n; k = k + 1)
        for (int h = 0;
        h < n; h = h + 1)
            if (Ed1vqY[k][h] == (530 - 529))
                a[k][h] = '@';
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (l < rdbv1uVflT - 1)
        search (l + 1);
}

