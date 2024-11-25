struct   p {
    int DEUQoAizPyXR;
    int XF5PB1RYst0;
}
a [20];

int main () {
    int uV3kdnLf;
    int DEUQoAizPyXR;
    int XF5PB1RYst0;
    int SKzTxtdb;
    int j;
    int pcXqlI [(782 - 760)] [22];
    int iampZs;
    int xjxPIiHp1m;
    uV3kdnLf = (241 - 241);
    cin >> DEUQoAizPyXR >> XF5PB1RYst0;
    {
        iampZs = 773 - 773;
        while (iampZs < 22) {
            {
                xjxPIiHp1m = 747 - 747;
                while (xjxPIiHp1m < 22) {
                    pcXqlI[iampZs][xjxPIiHp1m] = (448 - 448);
                    xjxPIiHp1m = xjxPIiHp1m + 1;
                };
            }
            iampZs = iampZs + 1;
        };
    }
    for (SKzTxtdb = (881 - 880); DEUQoAizPyXR >= SKzTxtdb; SKzTxtdb++) {
        j = 465 - 464;
        while (XF5PB1RYst0 >= j) {
            cin >> pcXqlI[SKzTxtdb][j];
            j = j + 1;
        };
    }
    {
        SKzTxtdb = 199 - 198;
        while (SKzTxtdb <= DEUQoAizPyXR) {
            {
                j = 803 - 802;
                while (j <= XF5PB1RYst0) {
                    if (pcXqlI[SKzTxtdb][j] >= pcXqlI[SKzTxtdb -1][j] && pcXqlI[SKzTxtdb][j] >= pcXqlI[SKzTxtdb][j - 1] && pcXqlI[SKzTxtdb][j] >= pcXqlI[SKzTxtdb][j + 1] && pcXqlI[SKzTxtdb][j] >= pcXqlI[SKzTxtdb +1][j]) {
                        a[uV3kdnLf].DEUQoAizPyXR = SKzTxtdb -1;
                        a[uV3kdnLf].XF5PB1RYst0 = j - 1;
                        uV3kdnLf = uV3kdnLf + 1;
                    }
                    j = j + 1;
                };
            }
            SKzTxtdb = SKzTxtdb +1;
        };
    }
    {
        SKzTxtdb = 925 - 925;
        while (SKzTxtdb < uV3kdnLf) {
            cout << a[SKzTxtdb].DEUQoAizPyXR << " " << a[SKzTxtdb].XF5PB1RYst0 << endl;
            SKzTxtdb++;
        };
    }
    return 0;
}

