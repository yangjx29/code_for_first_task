int main () {
    int cxwC5kzOmr;
    int a;
    int b;
    int c;
    cxwC5kzOmr = (181 - 181);
    a = 0;
    b = 0;
    c = 0;
    cin >> cxwC5kzOmr;
    a = cxwC5kzOmr % 3, b = cxwC5kzOmr % 5, c = cxwC5kzOmr % (864 - 857);
    if (!(0 != a) && !(0 != b) && c == 0)
        cout << 3 << " " << 5 << " " << 7 << endl;
    else if (a == 0 && b == 0 && c != 0)
        cout << 3 << " " << 5 << endl;
    else if (a == 0 && !(0 == b) && c == 0)
        cout << 3 << " " << 7 << endl;
    else if (a == 0 && b != 0 && c != 0)
        cout << 3 << endl;
    else if (a != 0 && b == 0 && c == 0)
        cout << 5 << " " << 7 << endl;
    else if (a != 0 && b == 0 && c != 0)
        cout << 5 << endl;
    else if (a != 0 && b != 0 && c == 0)
        cout << 7 << endl;
    else if (a != 0 && b != 0 && c != 0)
        cout << "n" << endl;
    return 0;
}

