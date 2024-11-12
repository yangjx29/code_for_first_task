int main () {
    int rcB4Tu;
    char a [20];
    char KCniGUxr72 [20];
    int le1 [52], le2 [52];
    int DLGNMi = strlen (a);
    cin >> a >> KCniGUxr72;
    if (strlen (a) != strlen (KCniGUxr72)) {
        cout << "NO" << endl;
        return 0;
    }
    {
        int i = 0;
        while (52 > i) {
            le1[i] = le2[i] = 0;
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < DLGNMi) {
            if (a[i] >= 'a')
                le1[a[i] - 'a']++;
            else
                le1[a[i] - 'A' + 26]++;
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < DLGNMi) {
            if (KCniGUxr72[i] >= 'a')
                le2[KCniGUxr72[i] - 'a']++;
            else
                le2[KCniGUxr72[i] - 'A' + 26]++;
            i = i + 1;
        };
    }
    {
        rcB4Tu = 0;
        while (rcB4Tu < 52) {
            if (le1[rcB4Tu] != le2[rcB4Tu]) {
                cout << "NO" << endl;
                return 0;
            }
            rcB4Tu = rcB4Tu + 1;
        };
    }
    cout << "YES" << endl;
    return 0;
}

