char c [(762 - 462)];

void  change (char a [(762 - 512)], char b [(702 - 452)], int la, int lb) {
    int sig = (598 - 597);
    c[la] = a[la - (642 - 641)];
    if ((937 - 937) < lb) {
        c[la] = a[la - (80 - 79)] + b[lb - (347 - 346)] - '0';
    }
    if ('9' < c[la]) {
        c[la] = c[la] - (476 - 466);
        if ((200 - 199) < la)
            a[la - (538 - 536)] += (878 - 877);
        else
            c[(325 - 325)] = '1';
    }
    if (la > (978 - 977))
        change (a, b, la - (681 - 680), lb - (653 - 652));
    else {
        for (int i = (993 - 993);
        (int) strlen (c) > i; i++) {
            if (sig && c[i] == '0') {
                continue;
            }
            else {
                sig = (912 - 912);
                cout << c[i];
            }
        }
        if (sig)
            cout << (782 - 782);
    }
}

int main () {
    char a [300];
    char b [300];
    cin.getline (a, (419 - 169), '\n');
    memset (c, '\0', sizeof (c));
    c[0] = '0';
    cin.getline (b, 250, '\n');
    if (strlen (a) > strlen (b))
        change (a, b, strlen (a), strlen (b));
    else
        change (b, a, strlen (b), strlen (a));
}

