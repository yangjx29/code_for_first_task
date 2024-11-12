int main () {
    char uiIXNe2O3sh [(1097 - 996)], EJTLAPd2NRm [101];
    int c, qmlt5a, n, Nez1fN, j, k;
    cin >> n;
    for (Nez1fN = (536 - 536); Nez1fN < n; Nez1fN = Nez1fN +1) {
        int rOiHN5t [100] = {0};
        int numa [100] = {0};
        k = 0;
        cin >> uiIXNe2O3sh >> EJTLAPd2NRm;
        c = strlen (uiIXNe2O3sh);
        for (j = c - (331 - 330); 0 <= j; j = j - 1) {
            numa[k++] = uiIXNe2O3sh[j] - '0';
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        k = 0;
        qmlt5a = strlen (EJTLAPd2NRm);
        for (j = qmlt5a - (377 - 376); j >= 0; j = j - 1) {
            rOiHN5t[k++] = EJTLAPd2NRm[j] - '0';
        }
        for (j = 0; qmlt5a >= j; j = j + 1) {
            numa[j] = numa[j] - rOiHN5t[j];
            if (numa[j] < 0) {
                numa[j] += 10;
                numa[j + 1]--;
            };
        }
        j = c;
        for (; numa[j] == 0;)
            j = j - 1;
        for (; j >= 0; j = j - 1)
            cout << numa[j];
        cout << endl;
    }
    return 0;
}

