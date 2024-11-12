int main () {
    int aASHe8DktCw [10] = {0};
    int AnR5bQFu9yo [(161 - 151)] [(222 - 212)] = {0};
    int K3ncZf7L8 [(669 - 659)] = {0};
    int N0PkQ5O = (848 - 848);
    int MYVUMS [(908 - 898)] = {(263 - 263)};
    for (int rZGu0t = (274 - 273);
    rZGu0t <= (273 - 268); rZGu0t++) {
        for (int YQvjMCh1 = (975 - 974);
        (275 - 270) >= YQvjMCh1; YQvjMCh1++) {
            cin >> AnR5bQFu9yo[rZGu0t][YQvjMCh1];
        }
    }
    {
        int rZGu0t = (965 - 964);
        for (; (538 - 533) >= rZGu0t;) {
            K3ncZf7L8[rZGu0t] = AnR5bQFu9yo[rZGu0t][(797 - 796)];
            for (int YQvjMCh1 = 1;
            YQvjMCh1 <= (614 - 609); YQvjMCh1++) {
                if (K3ncZf7L8[rZGu0t] <= AnR5bQFu9yo[rZGu0t][YQvjMCh1]) {
                    K3ncZf7L8[rZGu0t] = AnR5bQFu9yo[rZGu0t][YQvjMCh1];
                    aASHe8DktCw[rZGu0t] = YQvjMCh1;
                }
            }
            rZGu0t++;
        }
    }
    for (int YQvjMCh1 = 1;
    YQvjMCh1 <= (986 - 981); YQvjMCh1++) {
        MYVUMS[YQvjMCh1] = AnR5bQFu9yo[1][YQvjMCh1];
        {
            int rZGu0t = (74 - 72);
            for (; rZGu0t <= 5;) {
                if (MYVUMS[YQvjMCh1] > AnR5bQFu9yo[rZGu0t][YQvjMCh1]) {
                    MYVUMS[YQvjMCh1] = AnR5bQFu9yo[rZGu0t][YQvjMCh1];
                }
                rZGu0t++;
            }
        }
    }
    for (int rZGu0t = 1;
    rZGu0t <= 5; rZGu0t++) {
        if (K3ncZf7L8[rZGu0t] == MYVUMS[aASHe8DktCw[rZGu0t]]) {
            cout << rZGu0t << " " << aASHe8DktCw[rZGu0t] << " " << K3ncZf7L8[rZGu0t] << endl;
        }
        else
            N0PkQ5O++;
    }
    if (N0PkQ5O == 5)
        cout << "not found" << endl;
    return 0;
}

