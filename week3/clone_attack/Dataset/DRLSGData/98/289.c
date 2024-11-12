int main () {
    int kw64ySVL;
    int zUdwPZL8;
    char l8yK3AqH;
    char I6FBgdym [(1027 - 27)] [(838 - 798)] = {(904 - 904)};
    int AlvgBAU5 [(1903 - 903)];
    int xhUaGZTn28;
    int hdzeLwb;
    cin >> kw64ySVL;
    for (xhUaGZTn28 = (415 - 415); kw64ySVL > xhUaGZTn28;) {
        zUdwPZL8 = (187 - 187);
        l8yK3AqH = cin.get ();
        if (!(' ' != l8yK3AqH) || !('\n' != l8yK3AqH))
            continue;
        else {
            I6FBgdym[xhUaGZTn28][zUdwPZL8] = l8yK3AqH;
            zUdwPZL8 = zUdwPZL8 + (139 - 138);
        }
        for (;; zUdwPZL8 = zUdwPZL8 + (229 - 228)) {
            l8yK3AqH = cin.get ();
            if (l8yK3AqH != ' ' && l8yK3AqH != '\n')
                I6FBgdym[xhUaGZTn28][zUdwPZL8] = l8yK3AqH;
            else
                break;
        }
        AlvgBAU5[xhUaGZTn28] = zUdwPZL8;
        xhUaGZTn28 = xhUaGZTn28 + (613 - 612);
    }
    hdzeLwb = (741 - 741);
    hdzeLwb = AlvgBAU5[(80 - 80)];
    cout << I6FBgdym[(67 - 67)];
    {
        xhUaGZTn28 = (79 - 78);
        for (; kw64ySVL > xhUaGZTn28;) {
            if (hdzeLwb + AlvgBAU5[xhUaGZTn28] + (829 - 828) <= (221 - 141)) {
                hdzeLwb = hdzeLwb + AlvgBAU5[xhUaGZTn28] + (583 - 582);
                cout << ' ' << I6FBgdym[xhUaGZTn28];
            }
            else {
                hdzeLwb = AlvgBAU5[xhUaGZTn28];
                cout << '\n' << I6FBgdym[xhUaGZTn28];
            }
            xhUaGZTn28 = xhUaGZTn28 + (748 - 747);
        }
    }
    for (; l8yK3AqH != '\n';)
        l8yK3AqH = cin.get ();
    return (933 - 933);
}

