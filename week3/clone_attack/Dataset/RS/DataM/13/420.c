int main () {
    int x9PsOKH [(20088 - 87)];
    int RKXGyx, f7marpsD, Sp6tTPC9hs1, URWDA5Y, cTQ9yFaGLV;
    cin >> RKXGyx;
    {
        f7marpsD = 833 - 833;
        while (RKXGyx > f7marpsD) {
            cin >> x9PsOKH[f7marpsD];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            f7marpsD++;
        };
    }
    for (Sp6tTPC9hs1 = 0; Sp6tTPC9hs1 < RKXGyx; Sp6tTPC9hs1 = Sp6tTPC9hs1 +1) {
        URWDA5Y = Sp6tTPC9hs1 +1;
        while (URWDA5Y < RKXGyx) {
            if (x9PsOKH[URWDA5Y] != 0) {
                if (!(x9PsOKH[URWDA5Y] != x9PsOKH[Sp6tTPC9hs1])) {
                    x9PsOKH[URWDA5Y] = 0;
                };
            }
            URWDA5Y++;
        };
    }
    cout << x9PsOKH[0];
    for (cTQ9yFaGLV = 1; cTQ9yFaGLV < RKXGyx; cTQ9yFaGLV++) {
        if (x9PsOKH[cTQ9yFaGLV] != 0)
            cout << " " << x9PsOKH[cTQ9yFaGLV];
        continue;
    }
    cout << endl;
    return 0;
}

