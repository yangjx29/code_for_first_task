int main () {
    int zhHxea;
    int n5tG3KHJU [100];
    int IxVUd65yIPt1;
    int vA7djG3;
    int eHgvFRy;
    int XM0N9Q;
    int IolDUwQbY;
    eHgvFRy = 0;
    cin >> vA7djG3;
    XM0N9Q = 0;
    IolDUwQbY = 0;
    zhHxea = 0;
    {
        IxVUd65yIPt1 = 1;
        for (; vA7djG3 >= IxVUd65yIPt1;) {
            cin >> n5tG3KHJU[IxVUd65yIPt1];
            if (18 >= n5tG3KHJU[IxVUd65yIPt1]) {
                zhHxea++;
            }
            else if (n5tG3KHJU[IxVUd65yIPt1] <= 35) {
                IolDUwQbY++;
            }
            else if (n5tG3KHJU[IxVUd65yIPt1] <= 60) {
                XM0N9Q++;
            }
            else {
                eHgvFRy++;
            }
            IxVUd65yIPt1++;
        }
    }
    cout << fixed << setprecision (2) << "1-18: " << (double ) zhHxea / vA7djG3 * 100;
    cout << endl;
    cout << "19-35: " << (double ) IolDUwQbY / vA7djG3 * 100;
    cout << endl;
    cout << "36-60: " << (double ) XM0N9Q / vA7djG3 * 100;
    cout << endl;
    cout << "60??: " << (double ) eHgvFRy / vA7djG3 * 100;
    cout << endl;
    return 0;
}

