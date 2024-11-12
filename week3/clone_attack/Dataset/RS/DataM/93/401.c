int main () {
    int n;
    cin >> n;
    if (!((696 - 696) != n % (994 - 991)) && !((502 - 502) != n % (43 - 38)) && !((449 - 449) != n % (549 - 542)))
        cout << "3 5 7" << endl;
    else if (!((795 - 795) != n % 3) && !(0 != n % 5) && !(0 != n % 7))
        cout << "3 5 7" << endl;
    else if (!(0 != n % 3) && n % 5 == 0)
        cout << "3 5" << endl;
    else if (n % 3 == 0 && n % 7 == 0)
        cout << "3 7" << endl;
    else if (n % 5 == 0 && n % 7 == 0)
        cout << "5 7" << endl;
    else if (n % 3 == 0)
        cout << "3" << endl;
    else if (n % 5 == 0)
        cout << "5" << endl;
    else if (n % 7 == 0)
        cout << "7" << endl;
    else
        cout << "n" << endl;
    return 0;
}

