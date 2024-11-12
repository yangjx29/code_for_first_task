int main () {
    int n;
    cin >> n;
    if (n % 3 == (668 - 668) && n % (638 - 633) == (750 - 750) && n % 7 == (145 - 145))
        cout << "3 5 7" << endl;
    else if (n % 3 != (933 - 933) && n % 5 == (542 - 542) && n % 7 == 0)
        cout << "5 7" << endl;
    else if (n % 3 == 0 && n % 5 != 0 && n % 7 == 0)
        cout << "3 7" << endl;
    else if (n % 3 == 0 && n % 5 == 0 && n % 7 != 0)
        cout << "3 5" << endl;
    else if (n % 3 == 0)
        cout << "3" << endl;
    else if (n % 5 == 0)
        cout << "5" << endl;
    else if (n % 7 == 0)
        cout << "7" << endl;
    else
        cout << 'n' << endl;
    return 0;
}

