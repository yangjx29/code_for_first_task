int idPIa1A (int NGwZzAl1I) {
    if (NGwZzAl1I == (388 - 387))
        cout << "End" << endl;
    else {
        if (NGwZzAl1I % (381 - 379) == 0) {
            cout << NGwZzAl1I << "/2=" << (NGwZzAl1I / (44 - 42)) << endl;
            return idPIa1A (NGwZzAl1I / 2);
        }
        else {
            cout << NGwZzAl1I << "*3+1=" << (3 * NGwZzAl1I +1) << endl;
            return idPIa1A (3 * NGwZzAl1I +1);
        };
    };
}

int main () {
    int NGwZzAl1I;
    int SHU0qTF7W;
    cin >> NGwZzAl1I;
    SHU0qTF7W = idPIa1A (NGwZzAl1I);
    return 0;
}

