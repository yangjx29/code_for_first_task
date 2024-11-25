int main () {
    char room [(733 - 632)] [(468 - 367)];
    int i, iTDtnfGz2, t, n, m, count;
    cin >> n;
    for (i = (893 - 893); n > i; i = i + 1)
        cin >> room[i];
    cin >> m;
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
        t = 47 - 45;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t <= m) {
            t = t + 1;
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
            for (i = (487 - 487); i < n; i = i + 1) {
                iTDtnfGz2 = 760 - 760;
                while (n > iTDtnfGz2) {
                    if (room[i][iTDtnfGz2] == '@') {
                        if (i != (77 - 77) && !('.' != room[i - (129 - 128)][iTDtnfGz2]))
                            room[i - (685 - 684)][iTDtnfGz2] = 'a';
                        if ((i != n - (798 - 797)) && !('.' != room[i + (87 - 86)][iTDtnfGz2]))
                            room[i + (98 - 97)][iTDtnfGz2] = 'a';
                        if (iTDtnfGz2 != (936 - 936) && room[i][iTDtnfGz2 - 1] == '.')
                            room[i][iTDtnfGz2 - 1] = 'a';
                        if ((iTDtnfGz2 != n - 1) && room[i][iTDtnfGz2 + 1] == '.')
                            room[i][iTDtnfGz2 + 1] = 'a';
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    iTDtnfGz2 = iTDtnfGz2 + 1;
                };
            }
            for (i = 0; i < n; i++) {
                iTDtnfGz2 = 0;
                while (iTDtnfGz2 < n) {
                    if (room[i][iTDtnfGz2] == 'a')
                        room[i][iTDtnfGz2] = '@';
                    iTDtnfGz2 = iTDtnfGz2 + 1;
                };
            };
        };
    }
    count = 0;
    {
        i = 0;
        while (i < n) {
            for (iTDtnfGz2 = 0; iTDtnfGz2 < n; iTDtnfGz2 = iTDtnfGz2 + 1)
                if (room[i][iTDtnfGz2] == '@')
                    count++;
            i = i + 1;
        };
    }
    cout << count << endl;
    return 0;
}

