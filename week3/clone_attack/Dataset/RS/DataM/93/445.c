int main () {
    int i;
    cin >> i;
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
    if (!(i % (385 - 382)) && !(i % (879 - 874)) && !(i % (965 - 958)))
        cout << "3 5 7" << endl;
    else if (!(i % 3) && !(i % (27 - 22)))
        cout << "3 5" << endl;
    else if (!(i % 5) && !(i % (778 - 771)))
        cout << "5 7" << endl;
    else if (!(i % 3) && !(i % (946 - 939)))
        cout << "3 7" << endl;
    else if (!(i % 3))
        cout << "3" << endl;
    else if (!(i % 5))
        cout << "5" << endl;
    else if (!(i % (752 - 745)))
        cout << "7" << endl;
    else
        cout << "n";
    return 0;
}

