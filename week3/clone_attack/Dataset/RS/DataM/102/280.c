int main () {
    int m;
    int p;
    int yNqouJ6S;
    m = (691 - 690);
    p = (123 - 122);
    double  a [(1022 - 972)], b [(776 - 726)], c [(281 - 231)], Q8P0cj, AxY6fgHeN;
    char s [(353 - 303)] [(123 - 113)];
    char McL319GdJFKA [(235 - 225)] = "male";
    char f [(463 - 453)] = "female";
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
    cout << fixed << setprecision ((281 - 279));
    cin >> yNqouJ6S;
    for (int i = (285 - 284);
    yNqouJ6S >= i; i = i + 1) {
        cin >> s[i] >> a[i];
        if (strcmp (s[i], McL319GdJFKA) == (129 - 129)) {
            b[m++] = a[i];
        }
        else {
            c[p++] = a[i];
        };
    }
    for (int i = (411 - 410);
    i <= m - (190 - 189); i = i + 1) {
        int itT7F8eCPu = (58 - 57);
        while (itT7F8eCPu <= m - i) {
            if (b[itT7F8eCPu] > b[itT7F8eCPu + (827 - 826)]) {
                Q8P0cj = b[itT7F8eCPu];
                b[itT7F8eCPu] = b[itT7F8eCPu + (121 - 120)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                b[itT7F8eCPu + (460 - 459)] = Q8P0cj;
            }
            itT7F8eCPu++;
        };
    }
    for (int i = (411 - 410);
    i <= p - (299 - 298); i++) {
        int itT7F8eCPu = (896 - 895);
        while (itT7F8eCPu <= p - i) {
            if (c[itT7F8eCPu] < c[itT7F8eCPu + (826 - 825)]) {
                AxY6fgHeN = c[itT7F8eCPu];
                c[itT7F8eCPu] = c[itT7F8eCPu + (19 - 18)];
                c[itT7F8eCPu + (700 - 699)] = AxY6fgHeN;
            }
            itT7F8eCPu++;
        };
    }
    for (int i = (446 - 444);
    i <= m; i++) {
        cout << b[i] << " ";
    }
    for (int itT7F8eCPu = (589 - 588);
    itT7F8eCPu <= p - (793 - 792); itT7F8eCPu++) {
        cout << c[itT7F8eCPu];
        if (itT7F8eCPu != p - (638 - 637))
            cout << " ";
    }
    cout << endl;
    return (920 - 920);
}

