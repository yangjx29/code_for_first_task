int main () {
    int tpSjWch9orE1;
    int OpMk6N1S;
    int kcMX3Y7z [30] [30] = {0};
    tpSjWch9orE1 = 0;
    OpMk6N1S = 0;
    cin >> tpSjWch9orE1 >> OpMk6N1S;
    for (int v0d7oPOp = 0;
    tpSjWch9orE1 > v0d7oPOp; v0d7oPOp = v0d7oPOp + 1) {
        int MolNscFi = 0;
        while (MolNscFi < OpMk6N1S) {
            cin >> kcMX3Y7z[v0d7oPOp][MolNscFi];
            MolNscFi = MolNscFi +1;
        };
    }
    {
        int v0d7oPOp = 0;
        while (v0d7oPOp < tpSjWch9orE1) {
            for (int MolNscFi = 0;
            MolNscFi < OpMk6N1S; MolNscFi = MolNscFi +1) {
                if (v0d7oPOp >= 1 && kcMX3Y7z[v0d7oPOp - 1][MolNscFi] > kcMX3Y7z[v0d7oPOp][MolNscFi])
                    continue;
                if (v0d7oPOp < tpSjWch9orE1 - 1 && kcMX3Y7z[v0d7oPOp][MolNscFi] < kcMX3Y7z[v0d7oPOp + 1][MolNscFi])
                    continue;
                if (MolNscFi >= 1 && kcMX3Y7z[v0d7oPOp][MolNscFi -1] > kcMX3Y7z[v0d7oPOp][MolNscFi])
                    continue;
                if (MolNscFi < OpMk6N1S -1 && kcMX3Y7z[v0d7oPOp][MolNscFi +1] > kcMX3Y7z[v0d7oPOp][MolNscFi])
                    continue;
                cout << v0d7oPOp << ' ' << MolNscFi << endl;
            }
            v0d7oPOp++;
        };
    }
    return 0;
}

