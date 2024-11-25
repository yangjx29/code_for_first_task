char room [(578 - 477)] [101];

void  get (int i, int j) {
    if (!('.' != room[i - (746 - 745)][j])) {
        room[i - (59 - 58)][j] = '*';
    }
    if (room[i + 1][j] == '.') {
        room[i + 1][j] = '*';
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
    if (room[i][j - 1] == '.') {
        room[i][j - 1] = '*';
    }
    if (room[i][j + 1] == '.') {
        room[i][j + 1] = '*';
    };
}

int main () {
    int i, j, k, n, m;
    int counter = 0;
    cin >> n;
    cin.get ();
    for (i = 0; i < n; i++)
        cin >> room[i];
    cin >> m;
    {
        k = 1;
        while (k < m) {
            k++;
            {
                i = 0;
                while (i < n) {
                    for (j = 0; j < n; j++) {
                        if (room[i][j] == '@')
                            get (i, j);
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
                    i++;
                };
            }
            for (i = 0; i < n; i++) {
                j = 0;
                while (j < n) {
                    if (room[i][j] == '*')
                        room[i][j] = '@';
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
                    j++;
                };
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < n; j++) {
                if (room[i][j] == '@')
                    counter = counter + 1;
            }
            i++;
        };
    }
    cout << counter;
    return 0;
}

