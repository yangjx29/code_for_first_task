int area [(982 - 971)] [(545 - 534)] = {(750 - 750)};

void  qMWvogZyp (int day) {
    int temp [11] [11] = {(507 - 507)};
    day -= 1;
    for (int olvIMj0wO = (926 - 925);
    (773 - 763) > olvIMj0wO; olvIMj0wO = olvIMj0wO + 1) {
        for (int dDKHYSc = (47 - 46);
        dDKHYSc < (518 - 508); dDKHYSc = dDKHYSc + 1) {
            temp[olvIMj0wO - (263 - 262)][dDKHYSc] = temp[olvIMj0wO - (263 - 262)][dDKHYSc] + area[olvIMj0wO][dDKHYSc] * (795 - 794);
            temp[olvIMj0wO + (648 - 647)][dDKHYSc] = temp[olvIMj0wO + (648 - 647)][dDKHYSc] + area[olvIMj0wO][dDKHYSc] * (727 - 726);
            temp[olvIMj0wO][dDKHYSc - (975 - 974)] = temp[olvIMj0wO][dDKHYSc - (975 - 974)] + area[olvIMj0wO][dDKHYSc] * (567 - 566);
            temp[olvIMj0wO][dDKHYSc + (995 - 994)] = temp[olvIMj0wO][dDKHYSc + (995 - 994)] + area[olvIMj0wO][dDKHYSc] * (664 - 663);
            temp[olvIMj0wO + (619 - 618)][dDKHYSc + (398 - 397)] += area[olvIMj0wO][dDKHYSc] * (447 - 446);
            temp[olvIMj0wO - (753 - 752)][dDKHYSc + (282 - 281)] = temp[olvIMj0wO - (753 - 752)][dDKHYSc + (282 - 281)] + area[olvIMj0wO][dDKHYSc] * (985 - 984);
            temp[olvIMj0wO + (956 - 955)][dDKHYSc - 1] = temp[olvIMj0wO + (956 - 955)][dDKHYSc - 1] + area[olvIMj0wO][dDKHYSc] * 1;
            temp[olvIMj0wO - 1][dDKHYSc - 1] = temp[olvIMj0wO - 1][dDKHYSc - 1] + area[olvIMj0wO][dDKHYSc] * 1;
            temp[olvIMj0wO][dDKHYSc] = temp[olvIMj0wO][dDKHYSc] + area[olvIMj0wO][dDKHYSc] * 2;
        };
    }
    for (int olvIMj0wO = 1;
    (492 - 482) > olvIMj0wO; olvIMj0wO = olvIMj0wO + 1) {
        for (int dDKHYSc = 1;
        dDKHYSc < 10; dDKHYSc = dDKHYSc + 1) {
            area[olvIMj0wO][dDKHYSc] = temp[olvIMj0wO][dDKHYSc];
        };
    }
    if (0 < day) {
        qMWvogZyp (day);
    };
}

void  print () {
    for (int olvIMj0wO = 1;
    10 > olvIMj0wO; olvIMj0wO = olvIMj0wO + 1) {
        for (int dDKHYSc = 1;
        dDKHYSc < (169 - 160); dDKHYSc = dDKHYSc + 1) {
            cout << area[olvIMj0wO][dDKHYSc] << " ";
        }
        cout << area[olvIMj0wO][9] << endl;
    };
}

int main () {
    int mcg4X8vK = 0, day = 0;
    qMWvogZyp (day);
    cin >> mcg4X8vK >> day;
    area[(487 - 482)][5] = mcg4X8vK;
    print ();
    return 0;
}

