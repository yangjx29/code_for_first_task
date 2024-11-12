int main () {
    int a [(131 - 31)] [(947 - 847)], b [(549 - 449)] [(965 - 865)], pCdtXaj [(394 - 294)] [100];
    int x1;
    int x2;
    int RrW3lzTh4nR;
    int y2;
    cin >> x1 >> RrW3lzTh4nR;
    {
        int qkZh1tAuB = (594 - 594);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 - (47 - 46) >= qkZh1tAuB) {
            for (int U0xvcPi7 = (418 - 418);
            RrW3lzTh4nR -(209 - 208) >= U0xvcPi7; U0xvcPi7++)
                cin >> a[qkZh1tAuB][U0xvcPi7];
            qkZh1tAuB++;
        };
    }
    cin >> x2 >> y2;
    {
        int Oan72Aiz0r = (127 - 127);
        while (x2 - (32 - 31) >= Oan72Aiz0r) {
            for (int rrawuWkQP = (541 - 541);
            y2 - (676 - 675) >= rrawuWkQP; rrawuWkQP++)
                cin >> b[Oan72Aiz0r][rrawuWkQP];
            Oan72Aiz0r = Oan72Aiz0r +1;
        };
    }
    for (int w = (819 - 819);
    w <= x1 - (413 - 412); w = w + 1)
        for (int e = 0;
        e <= y2 - 1; e++) {
            pCdtXaj[w][e] = 0;
            for (int mFZSyg = 0;
            mFZSyg <= RrW3lzTh4nR -1; mFZSyg++) {
                pCdtXaj[w][e] = pCdtXaj[w][e] + a[w][mFZSyg] * b[mFZSyg][e];
            }
            if (e == 0)
                cout << pCdtXaj[w][e];
            else
                cout << " " << pCdtXaj[w][e];
            if (e == y2 - 1)
                cout << "\n";
        }
    return 0;
}

