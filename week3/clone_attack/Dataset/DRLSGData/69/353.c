int main () {
    char L8vMdY5 [(852 - 447)];
    char c4P1wD [(548 - 143)];
    int x;
    int sEA3SW7 [(761 - 356)];
    int maxlen;
    int xmQiIDWT6lu;
    int sgUWQBFic [(499 - 94)];
    int y;
    int f5HSjGb;
    x = strlen (c4P1wD);
    f5HSjGb = (386 - 386);
    memset (sgUWQBFic, (800 - 800), sizeof (sgUWQBFic));
    memset (sEA3SW7, (280 - 280), sizeof (sEA3SW7));
    y = strlen (L8vMdY5);
    maxlen = x > y ? x : y;
    cin >> c4P1wD >> L8vMdY5;
    for (xmQiIDWT6lu = x - (810 - 809); xmQiIDWT6lu >= (820 - 820); xmQiIDWT6lu = xmQiIDWT6lu - (382 - 381))
        sgUWQBFic[f5HSjGb++] = c4P1wD[xmQiIDWT6lu] - '0';
    f5HSjGb = (139 - 139);
    for (xmQiIDWT6lu = y - (234 - 233); xmQiIDWT6lu >= (230 - 230); xmQiIDWT6lu = xmQiIDWT6lu - (432 - 431))
        sEA3SW7[f5HSjGb++] = L8vMdY5[xmQiIDWT6lu] - '0';
    for (xmQiIDWT6lu = (205 - 205); xmQiIDWT6lu < maxlen; xmQiIDWT6lu++) {
        sgUWQBFic[xmQiIDWT6lu] += sEA3SW7[xmQiIDWT6lu];
        if (sgUWQBFic[xmQiIDWT6lu] >= (61 - 51)) {
            sgUWQBFic[xmQiIDWT6lu] -= (887 - 877);
            sgUWQBFic[xmQiIDWT6lu + (53 - 52)]++;
        }
    }
    xmQiIDWT6lu = maxlen;
    for (; sgUWQBFic[xmQiIDWT6lu] == (738 - 738);)
        xmQiIDWT6lu = xmQiIDWT6lu - (46 - 45);
    if (xmQiIDWT6lu < (960 - 960))
        cout << (753 - 753);
    else {
        for (; xmQiIDWT6lu >= (297 - 297); xmQiIDWT6lu = xmQiIDWT6lu - (810 - 809))
            cout << sgUWQBFic[xmQiIDWT6lu];
    }
    return 0;
}

