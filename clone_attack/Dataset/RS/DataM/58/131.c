int main () {
    int CH4qdUi3;
    int i;
    cin >> CH4qdUi3;
    cin.get ();
    for (i = (225 - 225); CH4qdUi3 > i; i = i + 1) {
        int dE4Q6mUfzX;
        int n1;
        char n3dLevEGyDp [(830 - 749)];
        memset (n3dLevEGyDp, (957 - 957), (498 - 417));
        cin.getline (n3dLevEGyDp, (242 - 161));
        n1 = strlen (n3dLevEGyDp);
        if (n1 == (345 - 344)) {
            if (('A' <= n3dLevEGyDp[(978 - 978)] && n3dLevEGyDp[(458 - 458)] <= 'z') || n3dLevEGyDp[(842 - 842)] == '_') {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            };
        }
        else {
            if (('A' <= n3dLevEGyDp[0] && 'z' >= n3dLevEGyDp[0]) || n3dLevEGyDp[0] == '_') {
                {
                    dE4Q6mUfzX = 958 - 957;
                    while (n3dLevEGyDp[dE4Q6mUfzX] != '\0') {
                        if ((n3dLevEGyDp[dE4Q6mUfzX] >= '0' && n3dLevEGyDp[dE4Q6mUfzX] <= '9') || (n3dLevEGyDp[dE4Q6mUfzX] >= 'A' && n3dLevEGyDp[dE4Q6mUfzX] <= 'z') || n3dLevEGyDp[dE4Q6mUfzX] == '_') {
                            continue;
                        }
                        break;
                        dE4Q6mUfzX = dE4Q6mUfzX + 1;
                    };
                }
                if (dE4Q6mUfzX < n1) {
                    cout << "0" << endl;
                }
                if (dE4Q6mUfzX == n1) {
                    cout << "1" << endl;
                };
            }
            else {
                cout << 0 << endl;
            };
        };
    }
    return 0;
}

