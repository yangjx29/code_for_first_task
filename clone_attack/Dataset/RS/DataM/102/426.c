int main () {
    char str [(343 - 336)];
    int oqngSO7xDv;
    double  OHZdoXq8mWu [41], dCFGQLu [41];
    int BuUhcKV4ANw;
    int gVnKG3Rw;
    double  F6WQryY;
    cin >> oqngSO7xDv;
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
    BuUhcKV4ANw = (892 - 892);
    gVnKG3Rw = (66 - 66);
    for (int GZ5TSP9aYky = (695 - 694);
    GZ5TSP9aYky <= oqngSO7xDv; GZ5TSP9aYky = GZ5TSP9aYky +1) {
        cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> str;
        if (str[0] == 'm') {
            BuUhcKV4ANw = BuUhcKV4ANw +1;
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
            cin >> OHZdoXq8mWu[BuUhcKV4ANw];
        }
        else {
            gVnKG3Rw++;
            cin >> dCFGQLu[gVnKG3Rw];
        };
    }
    {
        int GZ5TSP9aYky = (387 - 386);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (GZ5TSP9aYky <= BuUhcKV4ANw -1) {
            {
                int FyuALMY = 1;
                while (BuUhcKV4ANw -GZ5TSP9aYky >= FyuALMY) {
                    if (OHZdoXq8mWu[FyuALMY +1] < OHZdoXq8mWu[FyuALMY]) {
                        F6WQryY = OHZdoXq8mWu[FyuALMY];
                        OHZdoXq8mWu[FyuALMY] = OHZdoXq8mWu[FyuALMY +1];
                        OHZdoXq8mWu[FyuALMY +1] = F6WQryY;
                    }
                    FyuALMY = FyuALMY +1;
                };
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
            GZ5TSP9aYky = GZ5TSP9aYky +1;
        };
    }
    for (int GZ5TSP9aYky = 1;
    GZ5TSP9aYky <= gVnKG3Rw - 1; GZ5TSP9aYky = GZ5TSP9aYky +1)
        for (int FyuALMY = 1;
        FyuALMY <= gVnKG3Rw - GZ5TSP9aYky; FyuALMY++)
            if (dCFGQLu[FyuALMY] < dCFGQLu[FyuALMY +1]) {
                F6WQryY = dCFGQLu[FyuALMY];
                dCFGQLu[FyuALMY] = dCFGQLu[FyuALMY +1];
                dCFGQLu[FyuALMY +1] = F6WQryY;
            }
    for (int GZ5TSP9aYky = 1;
    GZ5TSP9aYky <= BuUhcKV4ANw; GZ5TSP9aYky++)
        cout << fixed << setprecision (2) << OHZdoXq8mWu[GZ5TSP9aYky] << " ";
    {
        int GZ5TSP9aYky = 1;
        while (GZ5TSP9aYky <= gVnKG3Rw - 1) {
            cout << dCFGQLu[GZ5TSP9aYky] << " ";
            GZ5TSP9aYky = GZ5TSP9aYky +1;
        };
    }
    cout << dCFGQLu[gVnKG3Rw];
    return 0;
}

