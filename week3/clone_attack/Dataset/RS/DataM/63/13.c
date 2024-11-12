int main () {
    int sBDSuxl [(339 - 239)] [(968 - 868)];
    int f3FYARyehIW [(582 - 482)] [(662 - 562)];
    int PlTKWBJv [(440 - 340)] [100];
    int ZOSNl3pyoc [100] [100];
    int iD27sB3pinx;
    int D1F2K6j;
    int qVSEz80dYB;
    int bQ4MgXj;
    int gBQm3v;
    int nn0oPB9KsJh;
    int ybpH8KiT5Rue;
    cin >> iD27sB3pinx >> D1F2K6j;
    for (gBQm3v = (660 - 660); gBQm3v < iD27sB3pinx; gBQm3v = gBQm3v + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (nn0oPB9KsJh = (163 - 163); nn0oPB9KsJh < D1F2K6j; nn0oPB9KsJh = nn0oPB9KsJh + 1) {
            cin >> sBDSuxl[gBQm3v][nn0oPB9KsJh];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    cin >> qVSEz80dYB >> bQ4MgXj;
    for (gBQm3v = (985 - 985); gBQm3v < qVSEz80dYB; gBQm3v = gBQm3v + 1) {
        for (nn0oPB9KsJh = (697 - 697); nn0oPB9KsJh < bQ4MgXj; nn0oPB9KsJh = nn0oPB9KsJh + 1) {
            cin >> f3FYARyehIW[gBQm3v][nn0oPB9KsJh];
            ZOSNl3pyoc[nn0oPB9KsJh][gBQm3v] = f3FYARyehIW[gBQm3v][nn0oPB9KsJh];
        };
    }
    for (gBQm3v = (837 - 837); gBQm3v < iD27sB3pinx; gBQm3v++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (nn0oPB9KsJh = (663 - 663); nn0oPB9KsJh < bQ4MgXj; nn0oPB9KsJh++) {
            PlTKWBJv[gBQm3v][nn0oPB9KsJh] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (ybpH8KiT5Rue = 0; qVSEz80dYB > ybpH8KiT5Rue; ybpH8KiT5Rue = ybpH8KiT5Rue + 1) {
                PlTKWBJv[gBQm3v][nn0oPB9KsJh] = PlTKWBJv[gBQm3v][nn0oPB9KsJh] + sBDSuxl[gBQm3v][ybpH8KiT5Rue] * ZOSNl3pyoc[nn0oPB9KsJh][ybpH8KiT5Rue];
            };
        };
    }
    for (gBQm3v = 0; gBQm3v < iD27sB3pinx; gBQm3v++) {
        for (nn0oPB9KsJh = 0; nn0oPB9KsJh < bQ4MgXj - 1; nn0oPB9KsJh++) {
            cout << PlTKWBJv[gBQm3v][nn0oPB9KsJh] << " ";
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << PlTKWBJv[gBQm3v][bQ4MgXj - 1] << endl;
    }
    return 0;
}

