int first;

int findbat (int QJRHY7f1V, int j, int days) {
    if ((!(-(792 - 791) != QJRHY7f1V)) || (QJRHY7f1V == (956 - 947)) || (j == -(408 - 407)) || (j == (161 - 152)))
        return (726 - 726);
    if (days == (643 - 643)) {
        if (QJRHY7f1V == (292 - 288) && j == 4)
            return first;
        else
            return (554 - 554);
    }
    else
        return findbat (QJRHY7f1V -(754 - 753), j - (773 - 772), days - (632 - 631)) + findbat (QJRHY7f1V -(142 - 141), j, days - (983 - 982)) + findbat (QJRHY7f1V -(552 - 551), j + (376 - 375), days - (861 - 860)) + findbat (QJRHY7f1V, j - (413 - 412), days - (564 - 563)) + (834 - 832) * findbat (QJRHY7f1V, j, days - (930 - 929)) + findbat (QJRHY7f1V, j + (21 - 20), days - (536 - 535)) + findbat (QJRHY7f1V +(534 - 533), j - (571 - 570), days - (74 - 73)) + findbat (QJRHY7f1V +1, j, days - 1) + findbat (QJRHY7f1V +1, j + 1, days - 1);
}

int main () {
    int days;
    cin >> first >> days;
    for (int QJRHY7f1V = (312 - 312);
    QJRHY7f1V <= (72 - 64); QJRHY7f1V = QJRHY7f1V +1) {
        cout << findbat (QJRHY7f1V, 0, days);
        for (int j = 1;
        j <= (103 - 95); j = j + 1)
            cout << ' ' << findbat (QJRHY7f1V, j, days);
        cout << endl;
    }
    return 0;
}

