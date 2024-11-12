int main () {
    int xVHhcF;
    int vKXDNB4gl0;
    int j;
    int x1;
    int aUZleHC4g2;
    int LWRZ9jvKz;
    int nTk95Xuj;
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
    int shuzu [1002] [1002];
    cin >> xVHhcF;
    {
        vKXDNB4gl0 = 973 - 972;
        while (xVHhcF >= vKXDNB4gl0) {
            {
                j = 542 - 541;
                while (xVHhcF >= j) {
                    cin >> shuzu[vKXDNB4gl0][j];
                    j = j + 1;
                };
            }
            vKXDNB4gl0 = vKXDNB4gl0 + 1;
        };
    }
    for (vKXDNB4gl0 = (313 - 312); vKXDNB4gl0 <= xVHhcF; vKXDNB4gl0 = vKXDNB4gl0 + 1) {
        j = 1;
        while (j <= xVHhcF) {
            if (!((285 - 285) != shuzu[vKXDNB4gl0][j]) && shuzu[vKXDNB4gl0][j + 1] == (552 - 552) && shuzu[vKXDNB4gl0 + 1][j] == (959 - 959)) {
                x1 = vKXDNB4gl0;
                aUZleHC4g2 = j;
            }
            if (shuzu[vKXDNB4gl0][j] == (40 - 40) && shuzu[vKXDNB4gl0][j - 1] == 0 && shuzu[vKXDNB4gl0 - 1][j] == 0) {
                nTk95Xuj = j;
                LWRZ9jvKz = vKXDNB4gl0;
            }
            j = j + 1;
        };
    }
    cout << (LWRZ9jvKz -x1 + 1) * (nTk95Xuj - aUZleHC4g2 + 1) - 2 * (LWRZ9jvKz -x1 + 1) - 2 * (nTk95Xuj - aUZleHC4g2 + 1) + 4 << endl;
    return 0;
}

