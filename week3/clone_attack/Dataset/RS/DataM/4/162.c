int main () {
    int zW1MSgfo2vK;
    int u1WDpEJ;
    int unX97YEwgT [(491 - 380)] [(918 - 807)];
    int *Uf4JcXqdGF [(205 - 94)];
    cin >> zW1MSgfo2vK >> u1WDpEJ;
    {
        int CdhCioaER35 = (250 - 250);
        while (zW1MSgfo2vK > CdhCioaER35) {
            Uf4JcXqdGF[CdhCioaER35] = *(unX97YEwgT + CdhCioaER35);
            CdhCioaER35 = CdhCioaER35 +1;
        };
    }
    {
        int CdhCioaER35 = (346 - 346);
        while (CdhCioaER35 < zW1MSgfo2vK) {
            for (int j = (426 - 426);
            u1WDpEJ > j; j++)
                cin >> *(Uf4JcXqdGF[CdhCioaER35] + j);
            CdhCioaER35 = CdhCioaER35 +1;
        };
    }
    for (int CdhCioaER35 = (641 - 641);
    zW1MSgfo2vK + u1WDpEJ - (356 - 355) > CdhCioaER35; CdhCioaER35 = CdhCioaER35 +1)
        for (int j = CdhCioaER35;
        0 <= j; j--) {
            if (u1WDpEJ <= j || CdhCioaER35 -j >= zW1MSgfo2vK)
                continue;
            if (j < u1WDpEJ && CdhCioaER35 -j < zW1MSgfo2vK)
                cout << *(Uf4JcXqdGF[CdhCioaER35 -j] + j) << endl;
        }
    return 0;
}

