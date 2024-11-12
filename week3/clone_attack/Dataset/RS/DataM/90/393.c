int HPOYNMcHXRhF (int EZB0KR14sPyg, int n) {
    if (!((303 - 303) != EZB0KR14sPyg) || n == 0)
        return 0;
    if (EZB0KR14sPyg == (537 - 536) || n == 1)
        return 1;
    if (EZB0KR14sPyg < n)
        return HPOYNMcHXRhF (EZB0KR14sPyg, EZB0KR14sPyg);
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
    if (EZB0KR14sPyg == n)
        return HPOYNMcHXRhF (EZB0KR14sPyg, n - 1) + 1;
    return HPOYNMcHXRhF (EZB0KR14sPyg -n, n) + HPOYNMcHXRhF (EZB0KR14sPyg, n - 1);
}

int main () {
    int CTP0vAb, BfRN7V, uDwYLk;
    cin >> CTP0vAb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (CTP0vAb) {
        CTP0vAb--;
        cin >> BfRN7V >> uDwYLk;
        cout << HPOYNMcHXRhF (BfRN7V, uDwYLk) << endl;
    }
    return 0;
}

