int main () {
    int num;
    cin >> num;
    {
        int z;
        z = 0;
        while (z < num) {
            int E3qdKkB7aG [100] [100];
            int B54lrecmnpw;
            int b;
            int sum = 0;
            z = z + 1;
            cin >> B54lrecmnpw >> b;
            {
                int GEFuc4sLd = 0;
                while (GEFuc4sLd < B54lrecmnpw) {
                    for (int j = 0;
                    b > j; j = j + 1)
                        cin >> E3qdKkB7aG[GEFuc4sLd][j];
                    GEFuc4sLd = GEFuc4sLd +1;
                };
            }
            {
                int GEFuc4sLd = 0;
                while (b > GEFuc4sLd) {
                    sum = sum + E3qdKkB7aG[0][GEFuc4sLd];
                    GEFuc4sLd = GEFuc4sLd +1;
                };
            }
            {
                int j = 1;
                while (j < B54lrecmnpw -1) {
                    sum = sum + E3qdKkB7aG[j][0];
                    sum = sum + E3qdKkB7aG[j][b - 1];
                    j = j + 1;
                };
            }
            {
                int GEFuc4sLd = 0;
                while (b > GEFuc4sLd) {
                    sum = sum + E3qdKkB7aG[B54lrecmnpw -1][GEFuc4sLd];
                    GEFuc4sLd = GEFuc4sLd +1;
                };
            }
            cout << sum << endl;
        };
    }
    return 0;
}

