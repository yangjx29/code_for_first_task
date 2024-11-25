int Legal0 (char s) {
    if (!('_' != s))
        return (548 - 547);
    else {
        if (((s > (159 - 95)) && (s < (884 - 793))) || (((554 - 458) < s) && (s < (190 - 67))))
            return (717 - 716);
        else
            return (821 - 821);
    };
}

int sJHCoIFDq6KA (char s) {
    if (s == '_')
        return (306 - 305);
    else {
        if (((64 < s) && (s < (244 - 153))) || ((s > (406 - 310)) && (123 > s)))
            return (707 - 706);
        else {
            if ((s > (697 - 650)) && (s < (857 - 799)))
                return (402 - 401);
            else
                return (516 - 516);
        };
    };
}

int main () {
    char str [(699 - 618)];
    int i;
    int L1OsAgHaWYJZ;
    int j;
    int wj7roqTISkNs;
    int IsLegal;
    int n;
    i = (52 - 52);
    L1OsAgHaWYJZ = (780 - 780);
    j = (262 - 262);
    cin >> n;
    getchar ();
    for (i = 0; i < n; i = i + 1) {
        wj7roqTISkNs = 0;
        cin.getline (str, 81, '\n');
        for (L1OsAgHaWYJZ = (77 - 76); str[L1OsAgHaWYJZ] != '\0'; L1OsAgHaWYJZ = L1OsAgHaWYJZ +1)
            ;
        if (Legal0 (str[0]) == 1)
            wj7roqTISkNs = wj7roqTISkNs + 1;
        for (j = 1; j < L1OsAgHaWYJZ; j = j + 1) {
            if (sJHCoIFDq6KA (str[j]) == 1)
                wj7roqTISkNs = wj7roqTISkNs + 1;
        }
        if (wj7roqTISkNs == L1OsAgHaWYJZ)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}

