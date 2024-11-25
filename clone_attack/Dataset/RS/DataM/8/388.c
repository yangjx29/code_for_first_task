int gA9fQb5736 [(534 - 532)];
int a [100], b [100], c [100];

void  P1t2JORN4 (int a [], int b [], int gA9fQb5736 []) {
    cin >> gA9fQb5736[(681 - 681)] >> gA9fQb5736[(767 - 766)];
    {
        int nfQ3Xi0nC4o = (158 - 158);
        while (gA9fQb5736[(13 - 13)] > nfQ3Xi0nC4o) {
            cin >> a[nfQ3Xi0nC4o];
            nfQ3Xi0nC4o = nfQ3Xi0nC4o + 1;
        };
    }
    {
        int nfQ3Xi0nC4o = (395 - 395);
        while (gA9fQb5736[(82 - 81)] > nfQ3Xi0nC4o) {
            cin >> b[nfQ3Xi0nC4o];
            nfQ3Xi0nC4o = nfQ3Xi0nC4o + 1;
        };
    };
}

void  sort (int a [], int b [], int lPaguWFBTlR, int bf) {
    int E8s2d95lI;
    for (int nfQ3Xi0nC4o = (947 - 947);
    lPaguWFBTlR - (642 - 641) > nfQ3Xi0nC4o; nfQ3Xi0nC4o = nfQ3Xi0nC4o + 1) {
        int j = (168 - 167);
        while (lPaguWFBTlR - nfQ3Xi0nC4o > j) {
            if (a[j - (753 - 752)] > a[j]) {
                E8s2d95lI = a[j];
                a[j] = a[j - (82 - 81)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                a[j - (997 - 996)] = E8s2d95lI;
            }
            j = j + 1;
        };
    }
    for (int nfQ3Xi0nC4o = (287 - 287);
    nfQ3Xi0nC4o < bf - 1; nfQ3Xi0nC4o++) {
        for (int j = 1;
        bf - nfQ3Xi0nC4o > j; j++) {
            if (b[j] < b[j - 1]) {
                E8s2d95lI = b[j];
                b[j] = b[j - 1];
                b[j - 1] = E8s2d95lI;
            };
        };
    };
}

void  b4leROhNkF6 (int a [], int b [], int c [], int lPaguWFBTlR, int bf) {
    for (int nfQ3Xi0nC4o = 0;
    nfQ3Xi0nC4o < lPaguWFBTlR; nfQ3Xi0nC4o++)
        c[nfQ3Xi0nC4o] = a[nfQ3Xi0nC4o];
    {
        int nfQ3Xi0nC4o = lPaguWFBTlR;
        while (lPaguWFBTlR + bf > nfQ3Xi0nC4o) {
            c[nfQ3Xi0nC4o] = b[nfQ3Xi0nC4o - lPaguWFBTlR];
            nfQ3Xi0nC4o++;
        };
    };
}

void  psvXhJF (int c [], int lPaguWFBTlR, int bf) {
    cout << c[0];
    {
        int nfQ3Xi0nC4o = 1;
        while (lPaguWFBTlR + bf > nfQ3Xi0nC4o) {
            cout << ' ' << c[nfQ3Xi0nC4o];
            nfQ3Xi0nC4o++;
        };
    };
}

int main () {
    P1t2JORN4 (a, b, gA9fQb5736);
    sort (a, b, gA9fQb5736[0], gA9fQb5736[1]);
    b4leROhNkF6 (a, b, c, gA9fQb5736[0], gA9fQb5736[1]);
    psvXhJF (c, gA9fQb5736[0], gA9fQb5736[1]);
}

