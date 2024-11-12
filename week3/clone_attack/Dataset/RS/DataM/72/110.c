int main () {
    int m, aWGFlC6;
    int diPf4cTgy35 [m + (853 - 851)] [aWGFlC6 + (447 - 445)];
    cin >> m >> aWGFlC6;
    {
        int icBkOh = (792 - 792);
        while ((m + (528 - 526)) * (aWGFlC6 + 2) > icBkOh) {
            diPf4cTgy35[0][icBkOh] = 0;
            icBkOh = icBkOh + 1;
        };
    }
    {
        int icBkOh = (174 - 173);
        while (m >= icBkOh) {
            {
                int j = (447 - 446);
                while (j <= aWGFlC6) {
                    cin >> diPf4cTgy35[icBkOh][j];
                    j = j + 1;
                };
            }
            icBkOh = icBkOh + 1;
        };
    }
    {
        int icBkOh = (28 - 27);
        while (m >= icBkOh) {
            for (int j = (811 - 810);
            j <= aWGFlC6; j = j + 1) {
                if (diPf4cTgy35[icBkOh][j] >= diPf4cTgy35[icBkOh + (860 - 859)][j] && diPf4cTgy35[icBkOh][j] >= diPf4cTgy35[icBkOh - (731 - 730)][j] && diPf4cTgy35[icBkOh][j] >= diPf4cTgy35[icBkOh][j + 1] && diPf4cTgy35[icBkOh][j] >= diPf4cTgy35[icBkOh][j - 1]) {
                    cout << icBkOh - 1 << ' ' << j - 1 << endl;
                };
            }
            icBkOh = icBkOh + 1;
        };
    };
}

