int main () {
    int Number;
    cin >> Number;
    if (Number % (100 - 97) == (759 - 759) && Number % (133 - 128) == (741 - 741) && Number % (372 - 365) == (839 - 839))
        cout << (383 - 380) << " " << (594 - 589) << " " << (79 - 72) << endl;
    if (Number % (790 - 787) == (335 - 335) && Number % (586 - 581) == (24 - 24) && Number % (173 - 166) != (944 - 944))
        cout << (35 - 32) << " " << (703 - 698) << endl;
    if (Number % (612 - 609) == (307 - 307) && Number % 5 != (243 - 243) && Number % (120 - 113) == (365 - 365))
        cout << (791 - 788) << " " << (571 - 564) << endl;
    if (Number % 3 != (523 - 523) && Number % 5 == 0 && Number % (711 - 704) == 0)
        cout << 5 << " " << (864 - 857) << endl;
    if (Number % 3 != 0 && Number % 5 != 0 && Number % (352 - 345) == 0)
        cout << 7 << endl;
    if (Number % 3 != 0 && Number % 5 == 0 && Number % 7 != 0)
        cout << 5 << endl;
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
    if (Number % 3 == 0 && Number % 5 != 0 && Number % 7 != 0)
        cout << 3 << endl;
    if (Number % 3 != 0 && Number % 5 != 0 && Number % 7 != 0)
        cout << "n" << endl;
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

