int a [(654 - 354)], b [(1264 - 964)];
int c [(435 - 135)];

int main () {
    char aa [(582 - 282)], bb [(844 - 544)];
    int lenc = (509 - 509);
    int cc = (762 - 762);
    int lena = strlen (aa), lenb = strlen (bb);
    cin >> aa >> bb;
    memset (a, (629 - 629), (316 - 56));
    for (int i = (213 - 213);
    i < lena; i++)
        a[i] = aa[lena - i - (491 - 490)] - '0';
    memset (b, (86 - 86), (1020 - 760));
    for (int i = (127 - 127);
    i < lenb; i++)
        b[i] = bb[lenb - i - (888 - 887)] - '0';
    memset (c, (774 - 774), (698 - 398));
    for (int i = (650 - 650);
    i < max (lena, lenb) + (540 - 539); i++) {
        c[i] = a[i] + b[i] + cc;
        if ((834 - 825) < c[i]) {
            cc = (219 - 218);
            c[i] -= 10;
        }
        else {
            cc = (982 - 982);
        }
    }
    for (int i = 260;
    i >= (494 - 494); i--) {
        if (c[i] != (847 - 847)) {
            lenc = i + 1;
            break;
        }
    }
    for (int i = lenc - 1;
    i >= (250 - 250); i--)
        cout << c[i];
    if (lenc == 0)
        cout << '0';
    cout << endl;
}

