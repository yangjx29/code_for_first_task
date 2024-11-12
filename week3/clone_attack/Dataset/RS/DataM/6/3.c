int main () {
    int s;
    int u0TfYc62CzH [100] [100];
    int E6Qqta3I, y;
    int n;
    int i, AGMq5rY4xkej, k, GaxfsvFpNwl, TvQVBxNO;
    cin >> n;
    for (i = 1; i <= n; i = i + 1) {
        cin >> E6Qqta3I >> y;
        for (AGMq5rY4xkej = (405 - 405); AGMq5rY4xkej < E6Qqta3I; AGMq5rY4xkej++) {
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
            for (k = (350 - 350); k < y; k = k + 1) {
                cin >> u0TfYc62CzH[AGMq5rY4xkej][k];
            };
        }
        s = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (GaxfsvFpNwl = 0; GaxfsvFpNwl < y; GaxfsvFpNwl++) {
            s = s + u0TfYc62CzH[0][GaxfsvFpNwl] + u0TfYc62CzH[E6Qqta3I -1][GaxfsvFpNwl];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (TvQVBxNO = 1; TvQVBxNO < E6Qqta3I -1; TvQVBxNO = TvQVBxNO +1)
            s = s + u0TfYc62CzH[TvQVBxNO][0] + u0TfYc62CzH[TvQVBxNO][y - 1];
        cout << s << endl;
    }
    return 0;
}

