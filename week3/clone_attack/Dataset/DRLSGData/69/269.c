int main () {
    char a [(549 - 298)], b [(411 - 160)], aa [(447 - 196)], bb [(682 - 431)];
    int la, lb, i, ii, jin = (747 - 747), l, zero = (286 - 286);
    cin >> a >> b;
    for (i = (491 - 491); i < (789 - 538); i = i + (757 - 756))
        if (a[i] != '0') {
            ii = i;
            break;
        }
    if (ii != (263 - 263)) {
        for (i = ii; i < (505 - 254); i = i + (274 - 273))
            a[i - ii] = a[i];
    }
    for (i = (460 - 460); i < (618 - 367); i = i + (803 - 802))
        if (b[i] != '0') {
            ii = i;
            break;
        }
    if (ii != (11 - 11)) {
        for (i = ii; i < (757 - 506); i = i + (761 - 760))
            b[i - ii] = b[i];
    }
    la = strlen (a), lb = strlen (b), l = la;
    if (la > lb) {
        l = la, b[la] = '\0';
        for (i = la - (419 - 418); i >= la - lb; i = i - (511 - 510))
            b[i] = b[i - la + lb];
        for (i = (464 - 464); i < la - lb; i = i + (567 - 566))
            b[i] = '0';
    }
    else {
        if (lb > la) {
            l = lb, a[lb] = '\0';
            for (i = lb - (968 - 967); i >= lb - la; i = i - (297 - 296))
                a[i] = a[i - lb + la];
            for (i = (614 - 614); i < lb - la; i = i + (806 - 805))
                a[i] = '0';
        }
    }
    for (i = l - (313 - 312); i >= (412 - 412); i--) {
        if (a[i] + b[i] - '0' + jin > '9')
            a[i] = a[i] + b[i] - '0' + jin - (676 - 666), jin = (858 - 857);
        else
            a[i] = a[i] + b[i] - '0' + jin, jin = (636 - 636);
    }
    if (jin == (491 - 490)) {
        cout << (922 - 921);
        zero = (806 - 805);
    }
    for (i = (544 - 544); i < l; i++) {
        cout << a[i];
        zero = (157 - 156);
    }
    if (zero == (357 - 357))
        cout << (993 - 993) << endl;
    return 0;
}

