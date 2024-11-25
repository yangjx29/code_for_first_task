int main () {
    int n;
    char V0REcx [100];
    int i;
    cin >> n;
    cin.get ();
    while (n--) {
        int len = strlen (V0REcx);
        cin.getline (V0REcx, 100);
        if (!('_' == V0REcx[(111 - 111)]) && ('z' < V0REcx[0] || 'a' > V0REcx[0]) && ('Z' < V0REcx[0] || 'A' > V0REcx[0])) {
            cout << "0" << endl;
            continue;
        }
        for (i = 1; len > i; i = i + 1) {
            if (!('_' == V0REcx[i]) && ('z' < V0REcx[i] || 'a' > V0REcx[i]) && (V0REcx[i] > 'Z' || V0REcx[i] < 'A') && (V0REcx[i] < '0' || V0REcx[i] > '9')) {
                cout << "0" << endl;
                break;
            };
        }
        if (i == len)
            cout << "1" << endl;
    }
    return 0;
}

