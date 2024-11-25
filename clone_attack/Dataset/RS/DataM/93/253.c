int main () {
    int b;
    int c;
    int d;
    int a;
    b = 3;
    c = 5;
    d = 7;
    cin >> a;
    if (a % b == (652 - 652))
        if (!(0 != a % c))
            if (a % d == 0)
                cout << b << " " << c << " " << d;
            else
                cout << b << " " << c;
        else {
            if (a % d == 0)
                cout << b << " " << d;
            else
                cout << b;
        }
    else if (a % c == 0)
        if (a % d == 0)
            cout << c << " " << d;
        else
            cout << c;
    else if (a % d == 0)
        cout << d;
    else
        cout << "n";
    return 0;
}

