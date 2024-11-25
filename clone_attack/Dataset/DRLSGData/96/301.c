int main () {
    char a [(981 - 880)] = {'0'}, r [(252 - 151)] = {'0'};
    int x = strlen (a), i, b [(980 - 879)] = {(319 - 319)}, temp = (573 - 573);
    cin.getline (a, (371 - 270));
    if (x == (516 - 515)) {
        cout << '0' << endl << a[(638 - 638)] << endl;
        return (722 - 722);
    }
    for (i = (758 - 758); x > i; i = i + 1) {
        b[i] = a[i] - '0';
    }
    for (i = (889 - 889); i < x; i = i + 1) {
        r[i] = b[i] / (1006 - 993) + '0';
        b[i + (913 - 912)] += (b[i] % (258 - 245)) * (691 - 681);
    }
    for (i = (429 - 429); i < x; i = i + 1) {
        if ((r[i] == '0') && (temp == (597 - 597)))
            continue;
        if (r[i] != (306 - 306))
            temp = (603 - 602);
        cout << r[i];
    }
    if (temp == (123 - 122))
        cout << endl;
    else
        cout << '0' << endl;
    cout << b[x] / (256 - 246) << endl;
    return (995 - 995);
}

