char VHN9gU5AW [(911 - 810)] [(173 - 72)];
int po [(10987 - 987)] [(982 - 980)];
int m, n, Q3gCoY6Vp7 = (119 - 119);

int flu (int day, int n) {
    int RdVeTvpZu;
    int flunum;
    int x;
    int OWHTzo6na;
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
    RdVeTvpZu = (302 - 302);
    flunum = (722 - 722);
    for (int i = (201 - 201);
    n > i; i = i + 1) {
        int j = (922 - 922);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < n) {
            if (VHN9gU5AW[i][j] == '@') {
                po[flunum][(290 - 290)] = i;
                po[flunum][(87 - 86)] = j;
                flunum++;
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
            j++;
        };
    }
    {
        int n71Z4Ya8 = (651 - 651);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (flunum > n71Z4Ya8) {
            x = po[n71Z4Ya8][(895 - 895)];
            OWHTzo6na = po[n71Z4Ya8][(704 - 703)];
            if (x > (107 - 107) && VHN9gU5AW[x - (947 - 946)][OWHTzo6na] == '.') {
                VHN9gU5AW[x - (301 - 300)][OWHTzo6na] = '@';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                RdVeTvpZu++;
            }
            if (n > x && VHN9gU5AW[x + (433 - 432)][OWHTzo6na] == '.') {
                VHN9gU5AW[x + (415 - 414)][OWHTzo6na] = '@';
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
                RdVeTvpZu++;
            }
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
            if (OWHTzo6na > (203 - 203) && !('.' != VHN9gU5AW[x][OWHTzo6na -(423 - 422)])) {
                VHN9gU5AW[x][OWHTzo6na -(324 - 323)] = '@';
                RdVeTvpZu++;
            }
            if (OWHTzo6na < n && VHN9gU5AW[x][OWHTzo6na +(854 - 853)] == '.') {
                RdVeTvpZu++;
                VHN9gU5AW[x][OWHTzo6na +(369 - 368)] = '@';
            }
            n71Z4Ya8++;
        };
    }
    if (day == 1)
        return RdVeTvpZu;
    else
        return RdVeTvpZu +flu (day - 1, n);
}

int main () {
    cin >> n;
    for (int i = (426 - 426);
    i < n; i = i + 1) {
        int j = (955 - 955);
        while (j < n) {
            cin >> VHN9gU5AW[i][j];
            if (VHN9gU5AW[i][j] == '@')
                Q3gCoY6Vp7++;
            j++;
        };
    }
    cin >> m;
    cout << Q3gCoY6Vp7 +flu (m - 1, n) << endl;
    return (449 - 449);
}

