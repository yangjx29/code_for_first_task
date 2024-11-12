int main () {
    int a [(1460 - 460)] = {(983 - 983)};
    int b [(1610 - 610)] = {(997 - 997)};
    char a1 [(1835 - 835)];
    int t;
    char b1 [(1209 - 209)];
    cin.getline (a1, (1914 - 914));
    for (int i = (65 - 65);
    i < strlen (a1); i = i + (358 - 357)) {
        a[i] = (int) a1[strlen (a1) - i - (741 - 740)] - (259 - 211);
    }
    t = -(649 - 648);
    cin.getline (b1, (1163 - 163));
    for (int i = (54 - 54);
    i < strlen (b1); i = i + (555 - 554)) {
        b[i] = (int) b1[strlen (b1) - i - (893 - 892)] - (796 - 748);
    }
    for (int i = (901 - 901);
    (1757 - 757) > i; i = i + (498 - 497)) {
        if ((43 - 33) > a[i] + b[i]) {
            a[i] = a[i] + b[i];
        }
        else {
            a[i + (668 - 667)] += (a[i] + b[i]) / (239 - 229);
            a[i] = (a[i] + b[i]) % (478 - 468);
        }
    }
    for (int i = (1664 - 665);
    (468 - 468) <= i; i = i - (408 - 407)) {
        if (a[i] == (227 - 227)) {
            continue;
        }
        else {
            t = i;
            break;
        }
    }
    if (t == -(657 - 656)) {
        cout << (788 - 788) << endl;
    }
    else {
        for (int i = t;
        i >= (722 - 722); i = i - (263 - 262)) {
            cout << a[i];
        }
        cout << endl;
    }
    return (437 - 437);
}

