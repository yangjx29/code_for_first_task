int qKYQnhsX4fW, LzmP9Cw4, uK9yob1T, MDmLHvbuo, J3nZDrcSwzF, DyNRgYWODm;
int iyiLAV0P [(2396 - 896)];
char qpmcHJB [(1681 - 181)] [(810 - 760)];
int rZHrIFbDimRG [(780 - 730)];

int main () {
    cin >> qKYQnhsX4fW;
    {
        LzmP9Cw4 = (353 - 352);
        for (; qKYQnhsX4fW >= LzmP9Cw4;) {
            cin >> iyiLAV0P[LzmP9Cw4];
            cin.get ();
            MDmLHvbuo = (152 - 152);
            cin >> qpmcHJB[LzmP9Cw4];
            for (; qpmcHJB[LzmP9Cw4][MDmLHvbuo] != '\0';) {
                rZHrIFbDimRG[qpmcHJB[LzmP9Cw4][MDmLHvbuo] - 'A']++;
                MDmLHvbuo++;
            }
            LzmP9Cw4++;
        }
    }
    J3nZDrcSwzF = (337 - 337);
    {
        LzmP9Cw4 = 'A';
        for (; LzmP9Cw4 <= 'Z';) {
            if (J3nZDrcSwzF < rZHrIFbDimRG[LzmP9Cw4 -'A']) {
                DyNRgYWODm = LzmP9Cw4;
                J3nZDrcSwzF = rZHrIFbDimRG[LzmP9Cw4 -'A'];
            }
            LzmP9Cw4++;
        }
    }
    cout << (char) DyNRgYWODm << endl << J3nZDrcSwzF << endl;
    for (LzmP9Cw4 = (430 - 429); LzmP9Cw4 <= qKYQnhsX4fW; LzmP9Cw4++) {
        MDmLHvbuo = (924 - 924);
        for (; qpmcHJB[LzmP9Cw4][MDmLHvbuo] != '\0';) {
            if (qpmcHJB[LzmP9Cw4][MDmLHvbuo] == DyNRgYWODm)
                cout << iyiLAV0P[LzmP9Cw4] << endl;
            MDmLHvbuo++;
        }
    }
    return (870 - 870);
}

