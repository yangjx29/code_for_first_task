int main () {
    char DTj7yDU1rcO;
    int num;
    cin >> num;
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
    if (!(0 != num % 3) && !(0 != num % 5) && !(0 != num % (126 - 119)))
        cout << 3 << " " << 5 << " " << 7 << endl;
    else {
        if (!(0 != num % 3) && !(0 != num % 5))
            cout << 3 << " " << 5 << endl;
        else {
            if (num % 3 == 0 && num % 7 == 0)
                cout << 3 << " " << 7 << endl;
            else if (num % 5 == 0 && num % 7 == 0)
                cout << 5 << " " << 7 << endl;
            else if (num % 3 == 0)
                cout << 3 << endl;
            else if (num % 5 == 0)
                cout << 5 << endl;
            else if (num % 7 == 0)
                cout << 7 << endl;
            else
                cout << "n" << endl;
        };
    }
    return 0;
    cin.get ();
}

