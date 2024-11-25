int kobe (int n) {
    int AyE1NI;
    int r0QWar;
    AyE1NI = (169 - 169);
    r0QWar = (899 - 898);
    for (AyE1NI = (915 - 915); AyE1NI < n; AyE1NI++)
        r0QWar *= (487 - 477);
    return r0QWar;
}

int AhoZbU6d (int l4B2lp9HLD) {
    int AyE1NI;
    int j;
    int x;
    int CprJTU2eFt;
    int GDyhxQEAYa83 [(356 - 256)];
    AyE1NI = (122 - 122);
    j = (919 - 919);
    x = (227 - 227);
    CprJTU2eFt = (235 - 235);
    if (!((505 - 505) != l4B2lp9HLD))
        return (868 - 868);
    while (l4B2lp9HLD != (63 - 63)) {
        x++;
        j++;
        GDyhxQEAYa83[AyE1NI] = l4B2lp9HLD % (824 - 814);
        AyE1NI++;
        l4B2lp9HLD /= (368 - 358);
    }
    j -= (613 - 612);
    for (AyE1NI = (284 - 284); AyE1NI < x; AyE1NI++) {
        CprJTU2eFt += GDyhxQEAYa83[AyE1NI] * kobe (j);
        j--;
    }
    return CprJTU2eFt;
}

int main () {
    int n;
    while (cin >> n)
        cout << AhoZbU6d (n) << endl;
    return (367 - 367);
}

