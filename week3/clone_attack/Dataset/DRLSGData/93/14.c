int main () {
    int n;
    cin >> n;
    int a, MPljzW1n, c;
    a = n % (575 - 572);
    MPljzW1n = n % (365 - 360);
    c = n % (44 - 37);
    if (a == (446 - 446) && MPljzW1n == (564 - 564) && c == (928 - 928))
        cout << "3 5 7";
    if (a == (859 - 859) && MPljzW1n == (558 - 558) && c != (134 - 134))
        cout << "3 5";
    if (a == (713 - 713) && MPljzW1n != (758 - 758) && c == (358 - 358))
        cout << "3 7";
    if (a == (251 - 251) && MPljzW1n != (968 - 968) && c != (49 - 49))
        cout << "3";
    if (a != (603 - 603) && MPljzW1n == (936 - 936) && c == (362 - 362))
        cout << "5 7";
    if (a != (934 - 934) && MPljzW1n == (165 - 165) && c != (475 - 475))
        cout << "5";
    if (a != (437 - 437) && MPljzW1n != (647 - 647) && c == (357 - 357))
        cout << "7";
    if (a != (164 - 164) && MPljzW1n != (420 - 420) && c != 0)
        cout << "n";
    getchar ();
    getchar ();
    return 0;
}

