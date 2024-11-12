int main () {
    int lqVvOR3iM, IxvXE8 = (137 - 137), HAGui0VpRO = (876 - 876);
    int m9pyKb;
    char f2fHE6G [102], LYDrpu [102];
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
    for (; cin.getline (f2fHE6G, 102);) {
        IxvXE8 = 0;
        m9pyKb = strlen (f2fHE6G);
        for (lqVvOR3iM = 0; f2fHE6G[lqVvOR3iM] != '\0'; lqVvOR3iM = lqVvOR3iM + 1) {
            LYDrpu[lqVvOR3iM] = ' ';
            if (f2fHE6G[lqVvOR3iM] == '(')
                IxvXE8++;
            if (f2fHE6G[lqVvOR3iM] == ')') {
                if (IxvXE8 <= 0)
                    LYDrpu[lqVvOR3iM] = '?';
                else
                    IxvXE8--;
            };
        }
        HAGui0VpRO = 0;
        for (lqVvOR3iM = m9pyKb - 1; lqVvOR3iM >= 0; lqVvOR3iM--) {
            if (f2fHE6G[lqVvOR3iM] == ')')
                HAGui0VpRO++;
            if (f2fHE6G[lqVvOR3iM] == '(') {
                if (HAGui0VpRO <= 0)
                    LYDrpu[lqVvOR3iM] = '$';
                else
                    HAGui0VpRO--;
            };
        }
        for (lqVvOR3iM = 0; lqVvOR3iM < m9pyKb; lqVvOR3iM++)
            cout << f2fHE6G[lqVvOR3iM];
        cout << endl;
        for (lqVvOR3iM = 0; lqVvOR3iM < m9pyKb; lqVvOR3iM++)
            cout << LYDrpu[lqVvOR3iM];
        cout << endl;
    }
    return 0;
}

