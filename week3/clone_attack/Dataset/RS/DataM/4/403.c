int main () {
    int row;
    int fMHLAoN;
    int a [(648 - 548)] [100];
    cin >> row >> fMHLAoN;
    for (int i = (586 - 586);
    i < row; i++)
        for (int JaiqHshkYPu = 0;
        fMHLAoN > JaiqHshkYPu; JaiqHshkYPu = JaiqHshkYPu +1)
            cin >> *(*(a + i) + JaiqHshkYPu);
    {
        int i = 0;
        while (i < fMHLAoN) {
            for (int JaiqHshkYPu = 0;
            row > JaiqHshkYPu &&i >= JaiqHshkYPu; JaiqHshkYPu++)
                cout << *(*(a + JaiqHshkYPu) + i - JaiqHshkYPu) << endl;
            i = i + 1;
        };
    }
    for (int i = 1;
    i < row; i++) {
        int JaiqHshkYPu = 0;
        while (fMHLAoN - 1 - JaiqHshkYPu >= 0 && i + JaiqHshkYPu < row) {
            cout << *(*(a + i + JaiqHshkYPu) + fMHLAoN - 1 - JaiqHshkYPu) << endl;
            JaiqHshkYPu = JaiqHshkYPu +1;
        };
    }
    return 0;
}

