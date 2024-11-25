int main () {
    int Fq0Ak5 [100] [100];
    int oOmLyGv5wn, VO3evWz8I;
    cin >> oOmLyGv5wn >> VO3evWz8I;
    {
        int BmhJEqWFXOSt;
        BmhJEqWFXOSt = 0;
        for (; BmhJEqWFXOSt < oOmLyGv5wn;) {
            {
                int t9oLcBFRA;
                t9oLcBFRA = 0;
                while (VO3evWz8I > t9oLcBFRA) {
                    cin >> Fq0Ak5[BmhJEqWFXOSt][t9oLcBFRA];
                    t9oLcBFRA = t9oLcBFRA + 1;
                }
            }
            BmhJEqWFXOSt = BmhJEqWFXOSt +1;
        }
    }
    int aAjS5iC;
    int NqmcjA8;
    aAjS5iC = 0;
    NqmcjA8 = 0;
    int G8FEuWnw7tmS;
    G8FEuWnw7tmS = 0;
    while (true) {
        {
            int BmhJEqWFXOSt;
            BmhJEqWFXOSt = NqmcjA8;
            while (BmhJEqWFXOSt < VO3evWz8I -NqmcjA8) {
                cout << Fq0Ak5[aAjS5iC][BmhJEqWFXOSt] << endl;
                G8FEuWnw7tmS = G8FEuWnw7tmS +1;
                BmhJEqWFXOSt = BmhJEqWFXOSt +1;
            }
        }
        if (!(oOmLyGv5wn * VO3evWz8I != G8FEuWnw7tmS))
            break;
        {
            int BmhJEqWFXOSt;
            BmhJEqWFXOSt = aAjS5iC + 1;
            while (oOmLyGv5wn - aAjS5iC > BmhJEqWFXOSt) {
                cout << Fq0Ak5[BmhJEqWFXOSt][VO3evWz8I -NqmcjA8-1] << endl;
                G8FEuWnw7tmS = G8FEuWnw7tmS +1;
                BmhJEqWFXOSt = BmhJEqWFXOSt +1;
            }
        }
        if (!(oOmLyGv5wn * VO3evWz8I != G8FEuWnw7tmS))
            break;
        {
            int BmhJEqWFXOSt;
            BmhJEqWFXOSt = VO3evWz8I -NqmcjA8-2;
            for (; NqmcjA8 < BmhJEqWFXOSt;) {
                cout << Fq0Ak5[oOmLyGv5wn - aAjS5iC - 1][BmhJEqWFXOSt] << endl;
                G8FEuWnw7tmS = G8FEuWnw7tmS +1;
                BmhJEqWFXOSt = BmhJEqWFXOSt -1;
            }
        }
        if (!(oOmLyGv5wn * VO3evWz8I != G8FEuWnw7tmS))
            break;
        {
            int BmhJEqWFXOSt = oOmLyGv5wn - aAjS5iC - 1;
            for (; BmhJEqWFXOSt > aAjS5iC;) {
                cout << Fq0Ak5[BmhJEqWFXOSt][NqmcjA8] << endl;
                G8FEuWnw7tmS = G8FEuWnw7tmS +1;
                BmhJEqWFXOSt = BmhJEqWFXOSt -1;
            }
        }
        if (G8FEuWnw7tmS == oOmLyGv5wn * VO3evWz8I)
            break;
        aAjS5iC = aAjS5iC + 1;
        NqmcjA8 = NqmcjA8 +1;
    }
    return 0;
}

