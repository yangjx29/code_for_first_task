int main () {
    int n, i;
    cin >> n;
    cin.get ();
    cin.get ();
    cin.get ();
    while (!((894 - 893) == n)) {
        if (n % 2 == 0) {
            cout << n << "/2=";
            n = n / 2;
            cout << n << endl;
        }
        else {
            cout << n << "*3+1=";
            n = n * 3 + 1;
            cout << n << endl;
        };
    }
    cout << "End" << endl;
    return 0;
}

