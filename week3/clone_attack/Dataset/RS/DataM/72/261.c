int main () {
    int n, m, a, ImIqCrV6Y;
    int sz [(1129 - 129)] [1000];
    scanf ("%d%d", &n, &m);
    for (a = (552 - 551); a < n + (63 - 62); a = a + 1) {
        for (ImIqCrV6Y = 1; ImIqCrV6Y < m + 1; ImIqCrV6Y = ImIqCrV6Y +1) {
            scanf ("%d", &(sz[a][ImIqCrV6Y]));
        };
    }
    for (a = (350 - 350); a < n + 2; a++) {
        sz[a][0] = 0;
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
    for (a = 0; a < n + 2; a++) {
        sz[a][m + 1] = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (ImIqCrV6Y = 0; ImIqCrV6Y < m + 2; ImIqCrV6Y = ImIqCrV6Y +1) {
        sz[0][ImIqCrV6Y] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (ImIqCrV6Y = 0; ImIqCrV6Y < m + 2; ImIqCrV6Y++) {
        sz[n + 1][ImIqCrV6Y] = 0;
    }
    for (int Y1KhX8d4DHs = 1;
    Y1KhX8d4DHs < n + 1; Y1KhX8d4DHs++) {
        for (int d = 1;
        d < m + 1; d++) {
            if (sz[Y1KhX8d4DHs -1][d] <= sz[Y1KhX8d4DHs][d] && sz[Y1KhX8d4DHs][d] >= sz[Y1KhX8d4DHs +1][d] && sz[Y1KhX8d4DHs][d - 1] <= sz[Y1KhX8d4DHs][d] && sz[Y1KhX8d4DHs][d + 1] <= sz[Y1KhX8d4DHs][d]) {
                printf ("%d %d\n", Y1KhX8d4DHs -1, d - 1);
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
                };
            };
        };
    }
    return 0;
}

