int main () {
    char mmZdRcQq1j [(678 - 597)];
    int hWpyru;
    int oPHwFE;
    int Sm78Lj;
    hWpyru = (81 - 81);
    int GKBRtSq;
    int STwWtHny76v9;
    int rusrOd;
    cin >> GKBRtSq;
    cin.get ();
    {
        rusrOd = 1;
        while (rusrOd <= GKBRtSq) {
            cin.getline (mmZdRcQq1j, 81);
            oPHwFE = (mmZdRcQq1j[(341 - 341)] <= 'z' && mmZdRcQq1j[(797 - 797)] >= 'a') || (mmZdRcQq1j[(420 - 420)] <= 'Z' && mmZdRcQq1j[(819 - 819)] >= 'A') || (mmZdRcQq1j[0] == '_');
            Sm78Lj = (mmZdRcQq1j[0] <= '9' && mmZdRcQq1j[0] >= '0');
            if (oPHwFE) {
                hWpyru = 1;
                {
                    STwWtHny76v9 = 0;
                    while (mmZdRcQq1j[STwWtHny76v9] != '\0') {
                        oPHwFE = (mmZdRcQq1j[STwWtHny76v9] <= 'z' && mmZdRcQq1j[STwWtHny76v9] >= 'a') || (mmZdRcQq1j[STwWtHny76v9] <= 'Z' && mmZdRcQq1j[STwWtHny76v9] >= 'A') || (mmZdRcQq1j[STwWtHny76v9] == '_');
                        Sm78Lj = (mmZdRcQq1j[STwWtHny76v9] <= '9' && mmZdRcQq1j[STwWtHny76v9] >= '0');
                        if (!(oPHwFE || Sm78Lj)) {
                            cout << "0" << endl;
                            hWpyru = 0;
                            break;
                        }
                        STwWtHny76v9++;
                    };
                }
                if (hWpyru)
                    cout << "1" << endl;
            }
            else
                cout << "0" << endl;
            rusrOd++;
        };
    }
    return 0;
}

