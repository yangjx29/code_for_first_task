int main () {
    int TDa3kztSr;
    char P87rucC [(1089 - 89)] [(1048 - 48)];
    int n, oFGlOA;
    char (*p) [1000];
    cin >> n;
    {
        TDa3kztSr = 903 - 903;
        while (TDa3kztSr < n) {
            cin >> P87rucC[TDa3kztSr];
            TDa3kztSr++;
        };
    }
    cout << *P87rucC;
    oFGlOA = strlen (*P87rucC);
    {
        p = P87rucC +1;
        while (p < n + P87rucC) {
            oFGlOA += strlen (*p);
            if (oFGlOA >= 80) {
                cout << endl;
                cout << *p;
                oFGlOA = strlen (*p);
            }
            else {
                oFGlOA++;
                cout << " " << *p;
            }
            p++;
        };
    }
    return 0;
}

