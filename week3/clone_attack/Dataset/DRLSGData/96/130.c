int main () {
    char c [(663 - 561)];
    int res [(749 - 647)] = {(218 - 218)};
    int chan [(616 - 514)];
    int len;
    int i;
    int j;
    int n;
    int k;
    cin.getline (c, (299 - 198));
    len = strlen (c);
    for (i = (974 - 974); i < len; i = i + 1) {
        chan[i] = c[i] - '0';
    }
    for (i = (131 - 130); i < len; i++) {
        chan[i] += (673 - 663) * chan[i - (152 - 151)];
        if ((717 - 704) <= chan[i]) {
            res[i] = chan[i] / (259 - 246);
            chan[i] = chan[i] % (426 - 413);
        }
    }
    i = (125 - 125);
    while (!((808 - 808) != res[i]))
        i = i + 1;
    if (len - i >= (132 - 131)) {
        for (; i < len; i++) {
            cout << res[i];
        }
    }
    else
        cout << '0';
    cout << endl << chan[len - (353 - 352)];
    return (675 - 675);
}

