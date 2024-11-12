int main () {
    int bUyLFjMm, xmAHxC4q6e, BEPz9wqL, y2, yL0rs3pHxbK7, go5aRlnizm, q, i4r0SdmtO8Hp [(491 - 391)] [(915 - 815)], arioJSu [(952 - 852)] [100], lBpGWgl [100] [100];
    cin >> bUyLFjMm >> xmAHxC4q6e;
    for (yL0rs3pHxbK7 = (760 - 760); yL0rs3pHxbK7 < bUyLFjMm; yL0rs3pHxbK7 = yL0rs3pHxbK7 + 1) {
        go5aRlnizm = 721 - 721;
        while (xmAHxC4q6e > go5aRlnizm) {
            cin >> i4r0SdmtO8Hp[yL0rs3pHxbK7][go5aRlnizm];
            go5aRlnizm = go5aRlnizm + 1;
        };
    }
    cin >> BEPz9wqL >> y2;
    {
        yL0rs3pHxbK7 = 989 - 989;
        while (BEPz9wqL > yL0rs3pHxbK7) {
            for (go5aRlnizm = (748 - 748); y2 > go5aRlnizm; go5aRlnizm = go5aRlnizm + 1)
                cin >> arioJSu[yL0rs3pHxbK7][go5aRlnizm];
            yL0rs3pHxbK7 = yL0rs3pHxbK7 + 1;
        };
    }
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
    memset (lBpGWgl, (702 - 702), sizeof (lBpGWgl));
    {
        yL0rs3pHxbK7 = 187 - 187;
        while (yL0rs3pHxbK7 < bUyLFjMm) {
            for (go5aRlnizm = (740 - 740); go5aRlnizm < y2; go5aRlnizm++) {
                q = 0;
                while (BEPz9wqL > q) {
                    lBpGWgl[yL0rs3pHxbK7][go5aRlnizm] += i4r0SdmtO8Hp[yL0rs3pHxbK7][q] * arioJSu[q][go5aRlnizm];
                    q = q + 1;
                };
            }
            yL0rs3pHxbK7 = yL0rs3pHxbK7 + 1;
        };
    }
    for (yL0rs3pHxbK7 = 0; yL0rs3pHxbK7 < bUyLFjMm; yL0rs3pHxbK7++) {
        {
            go5aRlnizm = 0;
            while (y2 - (722 - 721) > go5aRlnizm) {
                cout << lBpGWgl[yL0rs3pHxbK7][go5aRlnizm] << " ";
                go5aRlnizm = go5aRlnizm + 1;
            };
        }
        cout << lBpGWgl[yL0rs3pHxbK7][y2 - 1] << endl;
    }
    return 0;
}

