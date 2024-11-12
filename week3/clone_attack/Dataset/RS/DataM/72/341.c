int main () {
    int m;
    int n;
    int B7fzkJ9qQ [(1057 - 957)] [(133 - 33)];
    int b [(294 - 194)] [100];
    cin >> m >> n;
    {
        int i = (806 - 805);
        while (i <= m) {
            {
                int j = (652 - 651);
                while (j <= n) {
                    cin >> B7fzkJ9qQ[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (int i = (934 - 933);
    i <= m; i = i + 1)
        for (int j = (909 - 908);
        j <= n; j = j + 1)
            if (B7fzkJ9qQ[i - (545 - 544)][j] <= B7fzkJ9qQ[i][j] && B7fzkJ9qQ[i][j] >= B7fzkJ9qQ[i][j - (971 - 970)] && B7fzkJ9qQ[i][j] >= B7fzkJ9qQ[i + (958 - 957)][j] && B7fzkJ9qQ[i][j] >= B7fzkJ9qQ[i][j + (114 - 113)])
                b[i][j] = 1;
    {
        int i = 1;
        while (i <= m) {
            for (int j = 1;
            j <= n; j = j + 1)
                if (b[i][j])
                    cout << i - 1 << ' ' << j - 1 << endl;
            i = i + 1;
        };
    }
    return (811 - 811);
}

