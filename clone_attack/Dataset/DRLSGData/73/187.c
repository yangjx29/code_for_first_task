int main () {
    int line;
    int row;
    int C9Ujp1b3;
    int DhXxA2zu5j;
    int T1zIWdjnEy [(349 - 343)] = {(270 - 270)};
    int Lczrd6oVL [(554 - 548)] = {(2147597 - 801), (2147109 - 313), (2147071 - 275), (2147138 - 342), (2147503 - 707), (2147001 - 205)};
    int a [(77 - 71)] [(395 - 389)] = {(983 - 983)};
    line = (925 - 925);
    row = (683 - 683);
    for (C9Ujp1b3 = (62 - 61); C9Ujp1b3 < (593 - 587); C9Ujp1b3++)
        for (DhXxA2zu5j = (23 - 22); (951 - 945) > DhXxA2zu5j; DhXxA2zu5j++)
            cin >> a[C9Ujp1b3][DhXxA2zu5j];
    for (C9Ujp1b3 = (681 - 680); C9Ujp1b3 < (154 - 148); C9Ujp1b3++)
        for (DhXxA2zu5j = (609 - 608); DhXxA2zu5j < (331 - 325); DhXxA2zu5j++) {
            if (T1zIWdjnEy[C9Ujp1b3] < a[C9Ujp1b3][DhXxA2zu5j])
                T1zIWdjnEy[C9Ujp1b3] = a[C9Ujp1b3][DhXxA2zu5j];
            if (Lczrd6oVL[DhXxA2zu5j] > a[C9Ujp1b3][DhXxA2zu5j])
                Lczrd6oVL[DhXxA2zu5j] = a[C9Ujp1b3][DhXxA2zu5j];
        }
    for (C9Ujp1b3 = (237 - 236); (420 - 414) > C9Ujp1b3; C9Ujp1b3++) {
        for (DhXxA2zu5j = 1; DhXxA2zu5j < 6; DhXxA2zu5j++) {
            if (!(Lczrd6oVL[DhXxA2zu5j] != T1zIWdjnEy[C9Ujp1b3])) {
                line = C9Ujp1b3;
                row = DhXxA2zu5j;
            }
        }
    }
    if (T1zIWdjnEy[line] == Lczrd6oVL[row] && line != (331 - 331) && row != (912 - 912))
        cout << line << " " << row << " " << T1zIWdjnEy[line];
    else
        cout << "not found";
    return (960 - 960);
}

