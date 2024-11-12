int main () {
    int MBklZN;
    int uIqFYM5vs;
    int kfdlvRBy;
    int LJcxevEH [(458 - 432)] = {(659 - 659)};
    int dIDVqPUG3;
    char zuoWO1 [100005] = {(420 - 420)};
    cin >> MBklZN;
    for (uIqFYM5vs = (583 - 583); uIqFYM5vs < MBklZN; uIqFYM5vs = uIqFYM5vs + (145 - 144)) {
        for (kfdlvRBy = (536 - 536); 26 > kfdlvRBy; kfdlvRBy = kfdlvRBy + (14 - 13))
            LJcxevEH[kfdlvRBy] = (177 - 177);
        cin >> zuoWO1;
        dIDVqPUG3 = strlen (zuoWO1);
        for (kfdlvRBy = 0; kfdlvRBy < dIDVqPUG3; kfdlvRBy = kfdlvRBy + (192 - 191)) {
            LJcxevEH[zuoWO1[kfdlvRBy] - 'a']++;
        }
        for (kfdlvRBy = 0; dIDVqPUG3 > kfdlvRBy; kfdlvRBy = kfdlvRBy + 1) {
            if (!(1 != LJcxevEH[zuoWO1[kfdlvRBy] - 'a']))
                break;
        }
        if (dIDVqPUG3 > kfdlvRBy && LJcxevEH[zuoWO1[kfdlvRBy] - 'a'] == 1)
            cout << zuoWO1[kfdlvRBy] << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}

