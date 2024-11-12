int main () {
    int u423mjLdoN;
    int cFNLvW7X;
    int QpBKDk9RQ [13] = {(86 - 86), (709 - 678), (433 - 405), 31, (991 - 961), 31, (867 - 837), 31, 31, 30, 31, 30, 31};
    int dXBcqU7VZa6W [13] = {(629 - 629), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int CDtE1qLWc;
    int tJVjKf;
    int KKT7C8eO1;
    u423mjLdoN = 0;
    cin >> cFNLvW7X >> tJVjKf >> CDtE1qLWc;
    if (((!(0 != cFNLvW7X % 4)) && (!(0 == cFNLvW7X % 100))) || (cFNLvW7X % 400 == 0)) {
        for (KKT7C8eO1 = 0; KKT7C8eO1 < tJVjKf; KKT7C8eO1 = KKT7C8eO1 +1)
            u423mjLdoN += dXBcqU7VZa6W[KKT7C8eO1];
        u423mjLdoN = u423mjLdoN + CDtE1qLWc;
    }
    else {
        {
            KKT7C8eO1 = 0;
            while (KKT7C8eO1 < tJVjKf) {
                u423mjLdoN += QpBKDk9RQ[KKT7C8eO1];
                KKT7C8eO1 = KKT7C8eO1 +1;
            };
        }
        u423mjLdoN += CDtE1qLWc;
    }
    cout << u423mjLdoN;
    return 0;
}

