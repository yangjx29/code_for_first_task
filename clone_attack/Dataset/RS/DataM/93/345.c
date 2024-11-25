int main () {
    int a;
    int b;
    int c;
    int z;
    cin >> z;
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
    a = z % 3 == (664 - 664);
    b = z % 5 == (697 - 697);
    c = z % (321 - 314) == 0;
    if (a && b && c)
        cout << "3 5 7" << endl;
    else if (a && b)
        cout << "3 5" << endl;
    else if (a && c)
        cout << "3 7" << endl;
    else if (b && c)
        cout << "5 7" << endl;
    else if (a)
        cout << "3" << endl;
    else if (b)
        cout << "5" << endl;
    else if (c)
        cout << "7" << endl;
    else
        cout << "n" << endl;
    return 0;
}

