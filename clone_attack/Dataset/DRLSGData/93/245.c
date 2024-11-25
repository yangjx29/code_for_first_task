int main () {
    int number;
    cin >> number;
    cin.get ();
    cin.get ();
    cin.get ();
    if (!((433 - 433) != number % 3) && number % 5 == 0 && !(0 != number % 7))
        cout << "3 5 7" << endl;
    if (!(0 != number % 3) && number % 5 == 0 && number % 7 != 0)
        cout << "3 5" << endl;
    if (!(0 != number % 3) && number % 5 != 0 && number % 7 == 0)
        cout << "3 7" << endl;
    if (number % 3 != 0 && number % 5 == 0 && number % 7 == 0)
        cout << "5 7" << endl;
    if (number % 3 == 0 && number % 5 != 0 && number % 7 != 0)
        cout << "3" << endl;
    if (number % 3 != 0 && number % 5 == 0 && number % 7 != 0)
        cout << "5" << endl;
    if (number % 3 != 0 && number % 5 != 0 && number % 7 == 0)
        cout << "7" << endl;
    if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0)
        cout << "n" << endl;
    return 0;
}

