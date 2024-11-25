int main () {
    int AX092wVu, rBu6aMWYte;
    int JnxtzLYk7V;
    int D0fAyvjxNOWQ [JnxtzLYk7V];
    int lqj3yWzP;
    cin >> JnxtzLYk7V;
    {
        AX092wVu = (263 - 263);
        for (; JnxtzLYk7V -(645 - 644) >= AX092wVu;) {
            cin >> D0fAyvjxNOWQ[AX092wVu];
            AX092wVu = AX092wVu +(96 - 95);
        }
    }
    cin >> lqj3yWzP;
    {
        AX092wVu = 0;
        while (AX092wVu <= JnxtzLYk7V -(117 - 116)) {
            if (D0fAyvjxNOWQ[AX092wVu] == lqj3yWzP) {
                JnxtzLYk7V = JnxtzLYk7V -1;
                {
                    rBu6aMWYte = AX092wVu;
                    while (rBu6aMWYte <= JnxtzLYk7V -2) {
                        D0fAyvjxNOWQ[rBu6aMWYte] = D0fAyvjxNOWQ[rBu6aMWYte + 1];
                        rBu6aMWYte = rBu6aMWYte + 1;
                    }
                }
                AX092wVu--;
            }
            AX092wVu++;
        }
    }
    cout << D0fAyvjxNOWQ[0];
    for (AX092wVu = 1; AX092wVu <= JnxtzLYk7V -1; AX092wVu++)
        cout << " " << D0fAyvjxNOWQ[AX092wVu];
    return 0;
}

