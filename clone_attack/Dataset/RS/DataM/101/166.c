int main () {
    int i;
    int ox1iY2;
    int m;
    int n;
    int a;
    int b;
    int c;
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
    char name [(925 - 921)] = {(301 - 301), 'A', 'B', 'C'};
    int fan [4] [2];
    for (i = 0; 4 > i; i = i + 1) {
        fan[i][0] = 0;
        fan[i][(403 - 402)] = i;
    }
    for (a = 0; (918 - 915) > a; a = a + 1) {
        for (b = 0; 3 > b; b = b + 1) {
            if (!(a != b))
                continue;
            c = 3 - a - b;
            if ((!(2 != ((a < b) + (c == a) + a))) && (!(2 != ((a > b) + (a > c) + b))) && (((c > b) + (b > a) + c) == 2)) {
                fan[(682 - 681)][0] = a;
                fan[(946 - 945)][1] = 1;
                fan[2][0] = b;
                fan[2][1] = 2;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                fan[3][0] = c;
                fan[3][1] = 3;
                for (i = 1; i < 4; i = i + 1) {
                    for (ox1iY2 = 1; ox1iY2 < 4 - i; ox1iY2 = ox1iY2 + 1) {
                        if (fan[ox1iY2 + 1][0] < fan[ox1iY2][0]) {
                            m = fan[ox1iY2 + 1][0];
                            n = fan[ox1iY2 + 1][1];
                            fan[ox1iY2 + 1][0] = fan[ox1iY2][0];
                            fan[ox1iY2 + 1][1] = fan[ox1iY2][1];
                            fan[ox1iY2][0] = m;
                            fan[ox1iY2][1] = n;
                        };
                    };
                }
                cout << name[fan[1][1]] << name[fan[2][1]] << name[fan[3][1]];
            };
        };
    }
    return 0;
}

