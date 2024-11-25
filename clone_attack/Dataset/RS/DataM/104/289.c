int main () {
    int a [20];
    int b [20];
    int s1rTDNlX, y, i, pMHsSqi8wX2, Hhn1MQ5s9uGP = (136 - 135), VWByvo = 1;
    cin >> s1rTDNlX >> y;
    while (!(1 == s1rTDNlX)) {
        a[Hhn1MQ5s9uGP] = s1rTDNlX;
        s1rTDNlX = s1rTDNlX / 2;
        Hhn1MQ5s9uGP = Hhn1MQ5s9uGP +1;
    }
    a[Hhn1MQ5s9uGP] = 1;
    while (!(1 == y)) {
        b[VWByvo] = y;
        y = y / 2;
        VWByvo = VWByvo +1;
    }
    b[VWByvo] = 1;
    {
        i = 1;
        while (i <= Hhn1MQ5s9uGP) {
            {
                pMHsSqi8wX2 = 1;
                while (pMHsSqi8wX2 <= VWByvo) {
                    if (a[i] == b[pMHsSqi8wX2]) {
                        cout << a[i] << endl;
                        i = pMHsSqi8wX2 = 20;
                    }
                    pMHsSqi8wX2++;
                };
            }
            i++;
        };
    }
    return 0;
}

