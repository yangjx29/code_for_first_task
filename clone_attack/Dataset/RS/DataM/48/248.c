int m, nQsy6L;
int ul0rcb, gGCKufYjvFks;
int a [(321 - 311)] [10] = {(650 - 650)}, b [10] [10] = {0};

void  NcvUn8gfh (int u20QUP) {
    if (!(nQsy6L != u20QUP)) {
        ul0rcb = 155 - 154;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((69 - 60) >= ul0rcb) {
            for (gGCKufYjvFks = (680 - 679); (713 - 704) > gGCKufYjvFks; gGCKufYjvFks = gGCKufYjvFks + 1)
                cout << a[ul0rcb][gGCKufYjvFks] << " ";
            cout << a[ul0rcb][(539 - 530)] << endl;
            ul0rcb = ul0rcb + 1;
        };
    }
    else {
        NcvUn8gfh (u20QUP + 1);
        {
            ul0rcb = 640 - 639;
            while (ul0rcb <= (292 - 283)) {
                for (gGCKufYjvFks = (472 - 471); gGCKufYjvFks <= 9; gGCKufYjvFks++)
                    b[ul0rcb][gGCKufYjvFks] = a[ul0rcb + (28 - 27)][gGCKufYjvFks + (729 - 728)] + a[ul0rcb][gGCKufYjvFks] + a[ul0rcb + (475 - 474)][gGCKufYjvFks - (642 - 641)] + a[ul0rcb - (11 - 10)][gGCKufYjvFks + 1] + a[ul0rcb + 1][gGCKufYjvFks] + a[ul0rcb - 1][gGCKufYjvFks] + a[ul0rcb][gGCKufYjvFks + 1] + a[ul0rcb][gGCKufYjvFks - 1] + a[ul0rcb - 1][gGCKufYjvFks - 1];
                ul0rcb++;
            };
        }
        for (ul0rcb = 1; ul0rcb <= 9; ul0rcb++) {
            for (gGCKufYjvFks = 1; gGCKufYjvFks <= 9; gGCKufYjvFks++) {
                a[ul0rcb][gGCKufYjvFks] += b[ul0rcb][gGCKufYjvFks];
                b[ul0rcb][gGCKufYjvFks] = 0;
            };
        };
    };
}

int main () {
    NcvUn8gfh (0);
    cin >> m >> nQsy6L;
    a[(776 - 771)][5] = m;
    return 0;
}

