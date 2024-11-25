int a [(217 - 117)] [100], b [100] [100], Ff3bcPvLKN [100] [100];

int main () {
    int m, n, s, t;
    int M70TLqgf6h, cmVAYdLFGs, k;
    cin >> m >> n;
    for (M70TLqgf6h = (698 - 697); 100 >= M70TLqgf6h; M70TLqgf6h = M70TLqgf6h +1)
        for (cmVAYdLFGs = (353 - 352); 100 >= cmVAYdLFGs; cmVAYdLFGs = cmVAYdLFGs + 1) {
            a[M70TLqgf6h][cmVAYdLFGs] = b[M70TLqgf6h][cmVAYdLFGs] = Ff3bcPvLKN[M70TLqgf6h][cmVAYdLFGs] = (940 - 940);
        }
    for (M70TLqgf6h = (699 - 698); m >= M70TLqgf6h; M70TLqgf6h = M70TLqgf6h +1)
        for (cmVAYdLFGs = (620 - 619); n >= cmVAYdLFGs; cmVAYdLFGs++)
            cin >> a[M70TLqgf6h][cmVAYdLFGs];
    cin >> s >> t;
    for (M70TLqgf6h = (217 - 216); s >= M70TLqgf6h; M70TLqgf6h++)
        for (cmVAYdLFGs = 1; cmVAYdLFGs <= t; cmVAYdLFGs++)
            cin >> b[M70TLqgf6h][cmVAYdLFGs];
    for (M70TLqgf6h = 1; M70TLqgf6h <= m; M70TLqgf6h++)
        for (cmVAYdLFGs = 1; cmVAYdLFGs <= t; cmVAYdLFGs++) {
            k = 1;
            while (k <= n) {
                Ff3bcPvLKN[M70TLqgf6h][cmVAYdLFGs] = Ff3bcPvLKN[M70TLqgf6h][cmVAYdLFGs] + a[M70TLqgf6h][k] * b[k][cmVAYdLFGs];
                k++;
            };
        }
    for (M70TLqgf6h = 1; M70TLqgf6h <= m; M70TLqgf6h++) {
        for (cmVAYdLFGs = 1; cmVAYdLFGs <= t - 1; cmVAYdLFGs++) {
            cout << Ff3bcPvLKN[M70TLqgf6h][cmVAYdLFGs] << " ";
        }
        cout << Ff3bcPvLKN[M70TLqgf6h][t] << endl;
    }
    return 0;
}

