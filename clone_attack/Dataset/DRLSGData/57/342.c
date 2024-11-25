int main () {
    int kaifq0z;
    cin >> kaifq0z;
    for (int L6rZYkxANEW = 0;
    kaifq0z > L6rZYkxANEW; L6rZYkxANEW = L6rZYkxANEW +1) {
        char KRCUDjMtFf [40];
        cin >> KRCUDjMtFf;
        if (!('e' != KRCUDjMtFf[strlen (KRCUDjMtFf) - 2]) && !('r' != KRCUDjMtFf[strlen (KRCUDjMtFf) - 1])) {
            KRCUDjMtFf[strlen (KRCUDjMtFf) - 2] = '\0';
        }
        else if (!('l' != KRCUDjMtFf[strlen (KRCUDjMtFf) - 2]) && KRCUDjMtFf[strlen (KRCUDjMtFf) - 1] == 'y') {
            KRCUDjMtFf[strlen (KRCUDjMtFf) - 2] = '\0';
        }
        else
            KRCUDjMtFf[strlen (KRCUDjMtFf) - 3] = '\0';
        cout << KRCUDjMtFf;
        if (L6rZYkxANEW != kaifq0z - 1)
            cout << endl;
    }
}

