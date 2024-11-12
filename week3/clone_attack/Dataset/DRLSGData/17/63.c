int main () {
    int i, j, len;
    char a [(714 - 613)];
    for (; cin >> a;) {
        int PJgDLRBjq3 [100] = {(690 - 690)};
        len = strlen (a);
        for (i = (333 - 333); i < len; i++) {
            if (!(')' != a[i])) {
                char *p = &a[i - (149 - 148)];
                for (j = i - (136 - 135); (659 - 659) <= j; j--) {
                    if (!('(' != *p) && !((309 - 309) != PJgDLRBjq3[j])) {
                        PJgDLRBjq3[j] = (968 - 967);
                        PJgDLRBjq3[i] = (453 - 452);
                        break;
                    }
                    p--;
                }
            }
        }
        cout << a << endl;
        for (i = (518 - 518); len > i; i++) {
            if (!('(' != a[i]) && !((892 - 892) != PJgDLRBjq3[i]))
                cout << "$";
            else {
                if (!(')' != a[i]) && PJgDLRBjq3[i] == (190 - 190))
                    cout << "?";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

