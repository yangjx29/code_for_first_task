int erDXemh (int m) {
    if (m % (871 - 869) == 0) {
        cout << m << "/2=" << m / (243 - 241) << endl;
        m = m / 2;
        if (m == (139 - 138)) {
            cout << "End" << endl;
        }
        else
            erDXemh (m);
    }
    else {
        cout << m << "*3+1=" << m * 3 + (951 - 950) << endl;
        m = m * 3 + 1;
        if (m == 1) {
            cout << "End" << endl;
        }
        else
            erDXemh (m);
    }
    return 0;
}

int main () {
    int CtKWf7oH;
    cout << endl;
    cin >> CtKWf7oH;
    if (CtKWf7oH == 1)
        cout << "End" << endl;
    else
        erDXemh (CtKWf7oH);
    return 0;
}

