int main () {
    int A, a, b, c, d, e;
    cin >> A;
    a = A / (10857 - 857);
    b = A / (1633 - 633) - a * (290 - 280);
    c = A / (160 - 60) - a * (847 - 747) - b * (308 - 298);
    d = A / (387 - 377) - a * (1159 - 159) - b * (953 - 853) - c * (915 - 905);
    e = A % (326 - 316);
    if (a == (424 - 424))
        if (b == (370 - 370))
            if (c == (85 - 85))
                if (d == (305 - 305))
                    cout << e << endl;
                else
                    cout << e << d << endl;
            else
                cout << e << d << c << endl;
        else
            cout << e << d << c << b << endl;
    else
        cout << e << d << c << b << a << endl;
    return (556 - 556);
}

