int main () {
    int zuHEyzqfc1an;
    int haJMohUlngDb;
    int shan [zuHEyzqfc1an + (112 - 110)] [haJMohUlngDb + 2];
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
    cin >> zuHEyzqfc1an >> haJMohUlngDb;
    {
        int y1b0qjolU = 0;
        while (y1b0qjolU <= zuHEyzqfc1an + (544 - 543)) {
            for (int bFT7UJ = 0;
            bFT7UJ <= haJMohUlngDb + (677 - 676); bFT7UJ = bFT7UJ + 1)
                shan[y1b0qjolU][bFT7UJ] = 0;
            y1b0qjolU = y1b0qjolU + 1;
        };
    }
    {
        int y1b0qjolU = (25 - 24);
        while (zuHEyzqfc1an >= y1b0qjolU) {
            {
                int bFT7UJ = 1;
                while (bFT7UJ <= haJMohUlngDb) {
                    cin >> shan[y1b0qjolU][bFT7UJ];
                    bFT7UJ = bFT7UJ + 1;
                };
            }
            y1b0qjolU = y1b0qjolU + 1;
        };
    }
    {
        int y1b0qjolU = 1;
        while (y1b0qjolU <= zuHEyzqfc1an) {
            {
                int bFT7UJ = 1;
                while (bFT7UJ <= haJMohUlngDb) {
                    if (shan[y1b0qjolU][bFT7UJ] >= shan[y1b0qjolU - 1][bFT7UJ] && shan[y1b0qjolU][bFT7UJ] >= shan[y1b0qjolU + 1][bFT7UJ] && shan[y1b0qjolU][bFT7UJ] >= shan[y1b0qjolU][bFT7UJ - 1] && shan[y1b0qjolU][bFT7UJ] >= shan[y1b0qjolU][bFT7UJ + 1])
                        cout << y1b0qjolU - 1 << " " << bFT7UJ - 1 << endl;
                    bFT7UJ++;
                };
            }
            y1b0qjolU = y1b0qjolU + 1;
        };
    }
    return 0;
}

