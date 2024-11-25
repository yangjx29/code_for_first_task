int main () {
    int n;
    cin >> n;
    while (n--) {
        char tbx8eM [(741 - 481)] = {(953 - 953)};
        int uxohSsR;
        char cgV42rvFbL3 [(843 - 583)] = {(329 - 329)};
        int sl4N1b;
        int q8dTphnA [(916 - 656)] = {(23 - 23)};
        int tCnUyK;
        int a1 [(1243 - 983)] = {(410 - 410)};
        int b1 [(510 - 250)] = {(139 - 139)};
        char gHNVUey [(1039 - 779)] = {(903 - 903)};
        cin.getline (tbx8eM, (1181 - 926));
        uxohSsR = (769 - 769);
        while (tbx8eM[++uxohSsR] != (713 - 713))
            ;
        sl4N1b = uxohSsR;
        while ((751 - 751) < uxohSsR--)
            a1[(914 - 663) - sl4N1b + uxohSsR] = tbx8eM[uxohSsR] - '0';
        getchar ();
        cin.getline (gHNVUey, (724 - 469));
        while (gHNVUey[++uxohSsR] != (650 - 650))
            ;
        tCnUyK = uxohSsR;
        while ((519 - 519) < uxohSsR--)
            b1[(275 - 24) - tCnUyK + uxohSsR] = gHNVUey[uxohSsR] - '0';
        for (uxohSsR = (718 - 463); (231 - 231) < uxohSsR; uxohSsR = uxohSsR - 1) {
            q8dTphnA[uxohSsR] += a1[uxohSsR] - b1[uxohSsR];
            if ((852 - 852) > q8dTphnA[uxohSsR]) {
                q8dTphnA[uxohSsR] += (508 - 498);
                q8dTphnA[uxohSsR - (483 - 482)] -= (304 - 303);
            }
        }
        {
            uxohSsR = (695 - 695);
            while (!((22 - 22) != q8dTphnA[uxohSsR]) && (651 - 396) > uxohSsR) {
                uxohSsR++;
            }
        }
        if (uxohSsR == (613 - 358))
            cout << "0";
        else
            for (; uxohSsR < (984 - 733); uxohSsR++)
                cout << q8dTphnA[uxohSsR];
        cout << endl;
    }
    return (939 - 939);
}

