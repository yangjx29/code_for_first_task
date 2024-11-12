int main () {
    int X1oylIA;
    int mfQzbLZs;
    int line;
    int oJFriP;
    X1oylIA = 0;
    mfQzbLZs = (423 - 422);
    int pXFyGUvR6n71;
    int bZ698S53w;
    int a [(607 - 601)] [(561 - 555)];
    for (pXFyGUvR6n71 = (714 - 713); pXFyGUvR6n71 < (238 - 232); pXFyGUvR6n71 = pXFyGUvR6n71 + 1)
        for (bZ698S53w = (510 - 509); bZ698S53w < (582 - 576); bZ698S53w = bZ698S53w + 1)
            cin >> a[pXFyGUvR6n71][bZ698S53w];
    {
        pXFyGUvR6n71 = 69 - 68;
        while (pXFyGUvR6n71 < (925 - 919)) {
            oJFriP = (727 - 726);
            line = pXFyGUvR6n71;
            X1oylIA = a[pXFyGUvR6n71][1];
            {
                bZ698S53w = 2;
                while ((281 - 275) > bZ698S53w) {
                    if (X1oylIA < a[pXFyGUvR6n71][bZ698S53w]) {
                        X1oylIA = a[pXFyGUvR6n71][bZ698S53w];
                        oJFriP = bZ698S53w;
                    }
                    bZ698S53w++;
                };
            }
            for (bZ698S53w = 1; 6 > bZ698S53w; bZ698S53w++) {
                if (a[bZ698S53w][oJFriP] < X1oylIA)
                    break;
            }
            pXFyGUvR6n71 = pXFyGUvR6n71 + 1;
            if (bZ698S53w == 6)
                cout << line << " " << oJFriP << " " << X1oylIA << endl;
            else
                mfQzbLZs++;
        };
    }
    if (mfQzbLZs == 6)
        cout << "not found" << endl;
    return 0;
}

