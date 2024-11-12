int main () {
    int nnfAxU72ZGB [(1300 - 300)] [(1671 - 671)], PuK5mtGTU [(1658 - 658)];
    int qFo3gkhwM, vqMk4uf7GWD;
    int ZmtbGIhd0Kow, WoIbMBhzA;
    cin >> qFo3gkhwM >> vqMk4uf7GWD;
    for (ZmtbGIhd0Kow = (684 - 684); ZmtbGIhd0Kow < qFo3gkhwM; ZmtbGIhd0Kow++)
        for (WoIbMBhzA = (466 - 466); WoIbMBhzA < vqMk4uf7GWD; WoIbMBhzA++)
            cin >> nnfAxU72ZGB[ZmtbGIhd0Kow][WoIbMBhzA];
    {
        ZmtbGIhd0Kow = 323 - 323;
        while (ZmtbGIhd0Kow < vqMk4uf7GWD + qFo3gkhwM) {
            if (ZmtbGIhd0Kow < vqMk4uf7GWD)
                PuK5mtGTU[ZmtbGIhd0Kow] = (859 - 859);
            else
                PuK5mtGTU[ZmtbGIhd0Kow] = ZmtbGIhd0Kow -vqMk4uf7GWD + 1;
            ZmtbGIhd0Kow++;
        }
    }
    for (ZmtbGIhd0Kow = 0; ZmtbGIhd0Kow < vqMk4uf7GWD + qFo3gkhwM; ZmtbGIhd0Kow++) {
        WoIbMBhzA = ZmtbGIhd0Kow;
        while (WoIbMBhzA < qFo3gkhwM && WoIbMBhzA <= ZmtbGIhd0Kow) {
            cout << nnfAxU72ZGB[WoIbMBhzA][ZmtbGIhd0Kow -WoIbMBhzA] << endl;
            WoIbMBhzA++;
        }
    }
    return 0;
}

