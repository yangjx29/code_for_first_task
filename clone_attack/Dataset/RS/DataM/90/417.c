int aTiSyDr (int, int);

int main () {
    int ogUREF;
    int I4Feywihn, S1BTyk2r, KyNxVUt;
    cin >> I4Feywihn;
    for (ogUREF = 0; I4Feywihn > ogUREF; ogUREF++) {
        cin >> KyNxVUt >> S1BTyk2r;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << aTiSyDr (KyNxVUt, S1BTyk2r) << endl;
    }
    return 0;
}

int aTiSyDr (int a, int Kv47Hbfq2YrF) {
    if (!(0 != a))
        return 1;
    else {
        if (Kv47Hbfq2YrF == 1)
            return 1;
        else {
            if (a >= Kv47Hbfq2YrF)
                return aTiSyDr (a, Kv47Hbfq2YrF -1) + aTiSyDr (a - Kv47Hbfq2YrF, Kv47Hbfq2YrF);
            else
                return aTiSyDr (a, Kv47Hbfq2YrF -1);
        };
    };
}

