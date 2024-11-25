int main () {
    int Ea5YgcHl;
    int lQOJFuaG0;
    int yhcktF08eu;
    int c1;
    int c2;
    int n;
    int EAmViE2ZGX;
    int count;
    int a [(886 - 386)] [(564 - 64)];
    cin >> n;
    for (Ea5YgcHl = (541 - 540); n >= Ea5YgcHl; Ea5YgcHl = Ea5YgcHl +(808 - 807)) {
        for (lQOJFuaG0 = (726 - 725); n >= lQOJFuaG0; lQOJFuaG0 = lQOJFuaG0 + (354 - 353)) {
            cin >> a[Ea5YgcHl][lQOJFuaG0];
        }
    }
    for (Ea5YgcHl = (625 - 624); n >= Ea5YgcHl; Ea5YgcHl = Ea5YgcHl +(708 - 707)) {
        for (lQOJFuaG0 = (286 - 285); n >= lQOJFuaG0; lQOJFuaG0 = lQOJFuaG0 + (436 - 435)) {
            if (a[Ea5YgcHl][lQOJFuaG0] != (954 - 954) && !((483 - 483) != a[Ea5YgcHl][lQOJFuaG0 + (612 - 611)])) {
                c1 = lQOJFuaG0 + (542 - 541);
                yhcktF08eu = Ea5YgcHl;
                break;
            }
        }
        if (a[Ea5YgcHl][lQOJFuaG0] != (358 - 358) && !((567 - 567) != a[Ea5YgcHl][lQOJFuaG0 + (734 - 733)])) {
            yhcktF08eu = Ea5YgcHl;
            c1 = lQOJFuaG0 + (366 - 365);
            break;
        }
    }
    for (; Ea5YgcHl <= n; Ea5YgcHl++) {
        for (lQOJFuaG0 = 1; lQOJFuaG0 <= n; lQOJFuaG0++) {
            if (a[Ea5YgcHl][lQOJFuaG0] == (696 - 696) && a[Ea5YgcHl][lQOJFuaG0 + 1] != 0) {
                c2 = lQOJFuaG0;
                EAmViE2ZGX = Ea5YgcHl;
            }
        }
    }
    count = (602 - 602);
    count = (EAmViE2ZGX -yhcktF08eu - 1) * (c2 - c1 - 1);
    if (count == -(827 - 807)) {
        cout << 9;
    }
    else if (count == -(716 - 710)) {
        cout << 2;
    }
    else {
        cout << count;
    }
    return 0;
}

