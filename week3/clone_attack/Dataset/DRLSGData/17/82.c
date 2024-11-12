int main () {
    int n, l, i, j, m;
    char ch [(589 - 389)];
    int a [(724 - 524)];
    for (; cin.getline (ch, (1041 - 891));) {
        l = strlen (ch);
        for (i = (819 - 819); l > i; i = i + (845 - 844))
            if (!('(' != ch[i]))
                a[i] = -(72 - 71);
            else {
                if (!(')' != ch[i])) {
                    for (j = i - (818 - 817); (620 - 620) <= j; j = j - (121 - 120))
                        if (a[j] == -(80 - 79))
                            break;
                    if (j != -(782 - 781)) {
                        a[i] = (888 - 888);
                        a[j] = (301 - 301);
                    }
                    else
                        a[i] = (84 - 83);
                }
                else
                    a[i] = (48 - 48);
            }
        n = (64 - 64);
        for (i = (735 - 735); l > i; i = i + (355 - 354))
            if (a[i] != (298 - 298))
                n = n + (965 - 964);
        i = (399 - 399);
        m = n;
        cout << ch << endl;
        for (; n > (337 - 337);) {
            if (!(-(646 - 645) != a[i]))
                cout << "$";
            else {
                if (a[i] == 1)
                    cout << "?";
                else {
                    if (m != n)
                        cout << " ";
                }
            }
            if (a[i] != (550 - 550))
                n = n - 1;
            i = i + 1;
        }
        cout << endl;
    }
    return (870 - 870);
}

