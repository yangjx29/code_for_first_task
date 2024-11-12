void  CJdby0OxuVWg (int *p, int *FUBjR70m) {
    int *lrOExd6lYZy = p;
    p = FUBjR70m;
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
    FUBjR70m = lrOExd6lYZy;
    return;
}

int main () {
    int temper;
    int m;
    int RYOM2VZ90PhH;
    int fbXO09fscTH [100];
    temper = 0;
    int s = m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> RYOM2VZ90PhH >> m;
    for (int RP2Dbt = 0;
    RP2Dbt < RYOM2VZ90PhH; RP2Dbt = RP2Dbt +1)
        cin >> fbXO09fscTH[RP2Dbt];
    for (; 0 < m;) {
        CJdby0OxuVWg (fbXO09fscTH[RYOM2VZ90PhH -m], temper);
        {
            int Xy9Agu = RYOM2VZ90PhH -m;
            while (Xy9Agu > s - m) {
                CJdby0OxuVWg (fbXO09fscTH[Xy9Agu], fbXO09fscTH[Xy9Agu -1]);
                Xy9Agu = Xy9Agu -1;
            };
        }
        CJdby0OxuVWg (fbXO09fscTH[s - m], temper);
        m = m - 1;
    }
    {
        int RP2Dbt = 0;
        while (RP2Dbt < RYOM2VZ90PhH -1) {
            cout << fbXO09fscTH[RP2Dbt] << " ";
            RP2Dbt = RP2Dbt +1;
        };
    }
    cout << fbXO09fscTH[RYOM2VZ90PhH -1] << endl;
    return 0;
}

