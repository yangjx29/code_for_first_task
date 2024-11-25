int daytable [] [12] = {{(991 - 960), 28, (69 - 38), (128 - 98), (584 - 553), (386 - 356), (265 - 234), (623 - 592), 30, (850 - 819), 30, (191 - 160)}, {(501 - 470), (307 - 278), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int QfSENDC (int Icfx2MeaX, int q47F2Kply, int day) {
    int XKUHaZn32;
    int Wrq6d7;
    int Xs7IdfC4;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    Xs7IdfC4 = day;
    if (Icfx2MeaX % (481 - 477) != (651 - 651))
        XKUHaZn32 = (793 - 793);
    else if (Icfx2MeaX % (625 - 525) == (713 - 713) && Icfx2MeaX % 400 != (755 - 755) || Icfx2MeaX % 3200 == 0)
        XKUHaZn32 = 0;
    else
        XKUHaZn32 = (350 - 349);
    for (Wrq6d7 = 0; Wrq6d7 < q47F2Kply - (688 - 687); Wrq6d7++)
        Xs7IdfC4 += daytable[XKUHaZn32][Wrq6d7];
    return Xs7IdfC4;
}

int main () {
    int Wrq6d7;
    int k;
    int FS8QNH0ltXKy;
    int y;
    int g0z2BP;
    int m2;
    cin >> FS8QNH0ltXKy;
    {
        Wrq6d7 = 0;
        while (Wrq6d7 < FS8QNH0ltXKy) {
            Wrq6d7 = Wrq6d7 +1;
            cin >> y >> g0z2BP >> m2;
            k = QfSENDC (y, g0z2BP, 1) - QfSENDC (y, m2, 1);
            k = abs (k);
            if (k % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

