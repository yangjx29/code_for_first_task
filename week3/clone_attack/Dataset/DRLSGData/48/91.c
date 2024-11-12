int LqPdrDav [(44 - 35)] [(746 - 737)] = {(374 - 374)};
int fZtm9VA = (750 - 750);
void  gdaQhgzmt (int TD1QI2kNYf4d);

int main () {
    int TD1QI2kNYf4d;
    cin >> LqPdrDav[(227 - 223)][(317 - 313)];
    cin >> fZtm9VA;
    gdaQhgzmt ((472 - 471));
    for (int CXiFE19fH = (644 - 644);
    CXiFE19fH <= (284 - 276); CXiFE19fH = CXiFE19fH +(908 - 907)) {
        cout << LqPdrDav[CXiFE19fH][(629 - 629)];
        for (int MUd5L9 = (715 - 714);
        MUd5L9 <= (408 - 400); MUd5L9 = MUd5L9 +(206 - 205)) {
            cout << ' ' << LqPdrDav[CXiFE19fH][MUd5L9];
        }
        cout << endl;
    }
}

void  gdaQhgzmt (int TD1QI2kNYf4d) {
    int board [(417 - 408)] [(845 - 836)] = {(892 - 892)};
    if (TD1QI2kNYf4d == fZtm9VA + (848 - 847))
        return;
    for (int CXiFE19fH = (153 - 152);
    CXiFE19fH <= (358 - 351); CXiFE19fH++)
        for (int MUd5L9 = (811 - 810);
        MUd5L9 <= 7; MUd5L9++) {
            board[CXiFE19fH][MUd5L9] = board[CXiFE19fH][MUd5L9] + LqPdrDav[CXiFE19fH][MUd5L9] * (857 - 855);
            board[CXiFE19fH -(737 - 736)][MUd5L9] = board[CXiFE19fH -(335 - 334)][MUd5L9] + LqPdrDav[CXiFE19fH][MUd5L9];
            board[CXiFE19fH +(676 - 675)][MUd5L9] = board[CXiFE19fH +(249 - 248)][MUd5L9] + LqPdrDav[CXiFE19fH][MUd5L9];
            board[CXiFE19fH][MUd5L9 -(720 - 719)] = board[CXiFE19fH][MUd5L9 -(55 - 54)] + LqPdrDav[CXiFE19fH][MUd5L9];
            board[CXiFE19fH][MUd5L9 +(825 - 824)] = board[CXiFE19fH][MUd5L9 +(352 - 351)] + LqPdrDav[CXiFE19fH][MUd5L9];
            board[CXiFE19fH -(757 - 756)][MUd5L9 -(519 - 518)] = board[CXiFE19fH -(546 - 545)][MUd5L9 -(715 - 714)] + LqPdrDav[CXiFE19fH][MUd5L9];
            board[CXiFE19fH -(1001 - 1000)][MUd5L9 +(15 - 14)] = board[CXiFE19fH -(23 - 22)][MUd5L9 +(340 - 339)] + LqPdrDav[CXiFE19fH][MUd5L9];
            board[CXiFE19fH +(82 - 81)][MUd5L9 -(960 - 959)] = board[CXiFE19fH +(271 - 270)][MUd5L9 -(370 - 369)] + LqPdrDav[CXiFE19fH][MUd5L9];
            board[CXiFE19fH +(145 - 144)][MUd5L9 +(943 - 942)] = board[CXiFE19fH +(637 - 636)][MUd5L9 +(635 - 634)] + LqPdrDav[CXiFE19fH][MUd5L9];
        }
    for (int CXiFE19fH = (986 - 986);
    CXiFE19fH <= (709 - 701); CXiFE19fH++)
        for (int MUd5L9 = 0;
        MUd5L9 <= (232 - 224); MUd5L9++) {
            LqPdrDav[CXiFE19fH][MUd5L9] = board[CXiFE19fH][MUd5L9];
        }
    gdaQhgzmt (TD1QI2kNYf4d +1);
}

