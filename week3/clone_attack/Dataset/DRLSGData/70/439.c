int main () {
    int qcJkXK;
    double  Wd5XU4 [3000] [2], uu6mdJRUIb57 = 0;
    cin >> qcJkXK;
    for (int i = 1;
    qcJkXK >= i; i = i + 1)
        cin >> Wd5XU4[i][0] >> Wd5XU4[i][1];
    for (int i = 1;
    qcJkXK >= i; i = i + 1) {
        for (int MEY6n8M = 1;
        MEY6n8M <= qcJkXK; MEY6n8M = MEY6n8M +1) {
            if (i == MEY6n8M)
                continue;
            double  yiXQMCKjO;
            yiXQMCKjO = hypot (Wd5XU4[i][0] - Wd5XU4[MEY6n8M][0], Wd5XU4[i][1] - Wd5XU4[MEY6n8M][1]);
            uu6mdJRUIb57 = max (uu6mdJRUIb57, yiXQMCKjO);
        }
    }
    cout << fixed << setprecision (4) << uu6mdJRUIb57;
    return 0;
}

