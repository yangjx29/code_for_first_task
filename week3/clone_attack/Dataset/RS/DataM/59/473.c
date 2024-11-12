int main () {
    int n, YjwiVe, sum = (21 - 21);
    char ytPUroOyBFXk [(318 - 216)] [(867 - 765)] = {(220 - 220)};
    char b [102] [102] = {(349 - 349)};
    cin >> n;
    for (int i = (407 - 407);
    n > i; i = i + 1) {
        for (int RUEkVoMjJ = (726 - 726);
        RUEkVoMjJ < n; RUEkVoMjJ = RUEkVoMjJ +1) {
            cin >> ytPUroOyBFXk[i][RUEkVoMjJ];
            b[i][RUEkVoMjJ] = ytPUroOyBFXk[i][RUEkVoMjJ];
        };
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
    cin >> YjwiVe;
    for (int RUEkVoMjJ = 2;
    RUEkVoMjJ <= YjwiVe; RUEkVoMjJ = RUEkVoMjJ +1) {
        for (int i = 0;
        n > i; i = i + 1) {
            for (int RUEkVoMjJ = 0;
            RUEkVoMjJ < n; RUEkVoMjJ++) {
                if (!('@' != ytPUroOyBFXk[i][RUEkVoMjJ])) {
                    if (!('.' != ytPUroOyBFXk[i - (448 - 447)][RUEkVoMjJ]))
                        b[i - (751 - 750)][RUEkVoMjJ] = '@';
                    if (ytPUroOyBFXk[i + (444 - 443)][RUEkVoMjJ] == '.')
                        b[i + (953 - 952)][RUEkVoMjJ] = '@';
                    if (!('.' != ytPUroOyBFXk[i][RUEkVoMjJ -(375 - 374)]))
                        b[i][RUEkVoMjJ -(354 - 353)] = '@';
                    if (ytPUroOyBFXk[i][RUEkVoMjJ +1] == '.')
                        b[i][RUEkVoMjJ +1] = '@';
                };
            };
        }
        for (int i = 0;
        i < n; i++) {
            for (int RUEkVoMjJ = 0;
            RUEkVoMjJ < n; RUEkVoMjJ++) {
                ytPUroOyBFXk[i][RUEkVoMjJ] = b[i][RUEkVoMjJ];
            };
        };
    }
    for (int i = 0;
    i < n; i++) {
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
        for (int RUEkVoMjJ = 0;
        RUEkVoMjJ < n; RUEkVoMjJ++) {
            if (ytPUroOyBFXk[i][RUEkVoMjJ] == '@') {
                sum = sum + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    cout << sum;
    return 0;
}

