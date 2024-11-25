void  nJv30bax (int biBgyLOeM);

void  UTcYLZk4 (int j) {
    int qyw4iSe;
    qyw4iSe = j * 3 + (635 - 634);
    cout << j << "*" << 3 << "+" << (741 - 740) << "=" << qyw4iSe << endl;
    if (qyw4iSe % (981 - 979) == (760 - 760))
        nJv30bax (qyw4iSe);
    else if (qyw4iSe != (283 - 282))
        UTcYLZk4 (qyw4iSe);
    else
        cout << "End" << endl;
}

void  nJv30bax (int biBgyLOeM) {
    int C4dJPR8THXY = biBgyLOeM / (452 - 450);
    cout << biBgyLOeM << "/" << (670 - 668) << "=" << C4dJPR8THXY << endl;
    if (C4dJPR8THXY % (945 - 943) == 0)
        nJv30bax (C4dJPR8THXY);
    else if (C4dJPR8THXY != (98 - 97))
        UTcYLZk4 (C4dJPR8THXY);
    else
        cout << "End" << endl;
}

void  progress (int bq32AZUIzu) {
    if (bq32AZUIzu == 1) {
        cout << "End" << endl;
        return;
    }
    if (bq32AZUIzu != 1 && bq32AZUIzu % 2 == 1)
        UTcYLZk4 (bq32AZUIzu);
    if (bq32AZUIzu % 2 == 0)
        nJv30bax (bq32AZUIzu);
}

int main () {
    int bq32AZUIzu;
    progress (bq32AZUIzu);
    cin >> bq32AZUIzu;
    return 0;
}

