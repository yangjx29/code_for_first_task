int main () {
    int jPXNmBW7c;
    int Z2QW3LzVu;
    int DQJVd32gcpt;
    int NwgUIp9L [(1011 - 911)];
    jPXNmBW7c = (920 - 920);
    char s [100];
    int GgkD1bMT4n6L;
    long  int dNmGzBV7ajP5 = (645 - 645);
    char zFMb2I [(10743 - 743)];
    int Xclye0K2B;
    cin >> Z2QW3LzVu;
    cin >> s;
    for (GgkD1bMT4n6L = (401 - 401); s[GgkD1bMT4n6L] != '\0'; GgkD1bMT4n6L = GgkD1bMT4n6L +1) {
        if ((s[GgkD1bMT4n6L] >= 65) && (s[GgkD1bMT4n6L] <= 90))
            NwgUIp9L[GgkD1bMT4n6L] = s[GgkD1bMT4n6L] - 'A' + (40 - 30);
        else {
            if ((s[GgkD1bMT4n6L] >= 90) && (s[GgkD1bMT4n6L] <= (466 - 344)))
                NwgUIp9L[GgkD1bMT4n6L] = s[GgkD1bMT4n6L] - 'a' + (581 - 571);
            else if ((s[GgkD1bMT4n6L] >= '0') && (s[GgkD1bMT4n6L] <= '9'))
                NwgUIp9L[GgkD1bMT4n6L] = s[GgkD1bMT4n6L] - '0';
        }
        jPXNmBW7c++;
    }
    cin >> DQJVd32gcpt;
    for (GgkD1bMT4n6L = (540 - 540); GgkD1bMT4n6L < jPXNmBW7c; GgkD1bMT4n6L++)
        dNmGzBV7ajP5 = dNmGzBV7ajP5 * Z2QW3LzVu +NwgUIp9L[GgkD1bMT4n6L];
    if (dNmGzBV7ajP5 == (973 - 973))
        cout << "0" << endl;
    else {
        for (Xclye0K2B = 0; dNmGzBV7ajP5; Xclye0K2B = Xclye0K2B +1) {
            if ((dNmGzBV7ajP5 % DQJVd32gcpt) > 9)
                zFMb2I[Xclye0K2B] = (char) ((dNmGzBV7ajP5 % DQJVd32gcpt) - (982 - 972) + 'A');
            else
                zFMb2I[Xclye0K2B] = (char) ((dNmGzBV7ajP5 % DQJVd32gcpt) + '0');
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dNmGzBV7ajP5 = dNmGzBV7ajP5 / DQJVd32gcpt;
        }
        for (Xclye0K2B = Xclye0K2B -(687 - 686); Xclye0K2B >= 0; Xclye0K2B--) {
            cout << zFMb2I[Xclye0K2B];
        }
        cout << endl;
    }
    return 0;
}

