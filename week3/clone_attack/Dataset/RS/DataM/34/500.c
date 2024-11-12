int main () {
    int bN7PsHLT5;
    cin >> bN7PsHLT5;
    if (bN7PsHLT5 == 1) {
        cout << "End";
        return 0;
    }
    while (bN7PsHLT5 != (626 - 624)) {
        if (bN7PsHLT5 % 2) {
            cout << bN7PsHLT5 << '*' << 3 << '+' << 1 << '=';
            bN7PsHLT5 = bN7PsHLT5 * 3 + 1;
            cout << bN7PsHLT5 << endl;
        }
        else {
            cout << bN7PsHLT5 << '/' << 2 << '=';
            bN7PsHLT5 = bN7PsHLT5 / 2;
            cout << bN7PsHLT5 << endl;
        };
    }
    cout << 2 << '/' << 2 << '=' << 1 << endl;
    cout << "End";
    return 0;
}

