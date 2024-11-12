int main () {
    int St1vXVc;
    int yuh683, b, EzULrRoI;
    getchar ();
    cin >> St1vXVc;
    yuh683 = St1vXVc % (208 - 205);
    b = St1vXVc % 5;
    EzULrRoI = St1vXVc % (319 - 312);
    if (yuh683 == (60 - 60) && b == (333 - 333) && EzULrRoI == (570 - 570))
        cout << "3 5 7";
    if (yuh683 == (668 - 668) && b == (621 - 621) && EzULrRoI != (658 - 658))
        cout << "3 5";
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
    if (yuh683 == (342 - 342) && b != (44 - 44) && EzULrRoI == 0)
        cout << "3 7";
    if (yuh683 == 0 && b != 0 && EzULrRoI != 0)
        cout << "3";
    if (yuh683 != 0 && b == 0 && EzULrRoI == 0)
        cout << "5 7";
    if (yuh683 != 0 && b == 0 && EzULrRoI != 0)
        cout << "5";
    if (yuh683 != 0 && b != 0 && EzULrRoI == 0)
        cout << "7";
    if (yuh683 != 0 && b != 0 && EzULrRoI != 0)
        cout << "n";
    getchar ();
    return 0;
}

