int main () {
    int x;
    cin >> x;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (!((806 - 806) != x % 3) && x % (427 - 422) == (849 - 849) && !((720 - 720) != x % (908 - 901)))
        cout << "3 5 7" << endl;
    else {
        if (x % 3 == 0 && x % (439 - 434) == 0 && x % 7 != 0)
            cout << "3 5" << endl;
        else {
            if (x % 3 == 0 && x % 5 != 0 && x % 7 == 0)
                cout << "3 7" << endl;
            else {
                if (!(0 == x % 3) && x % 5 == 0 && x % 7 == 0)
                    cout << "5 7" << endl;
                else {
                    if (x % 3 == 0 && x % 5 != 0 && x % 7 != 0)
                        cout << "3" << endl;
                    else {
                        if (x % 3 != 0 && x % 5 != 0 && x % 7 == 0)
                            cout << "7" << endl;
                        else {
                            if (x % 3 != 0 && x % 5 == 0 && x % 7 != 0)
                                cout << "5" << endl;
                            else
                                cout << "n" << endl;
                        };
                    };
                };
            };
        };
    }
    return 0;
}

