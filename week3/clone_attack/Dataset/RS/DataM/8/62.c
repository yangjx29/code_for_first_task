void  Vb4XDidW53NQ (int kHB7fuiFvcAY [], int pOcolQCAy);

int main () {
    int m, pOcolQCAy, e8qleH4Sgp, p2hU6wSWH, kHB7fuiFvcAY [(133 - 33)], b [100];
    cin >> m >> pOcolQCAy;
    {
        e8qleH4Sgp = 335 - 335;
        while (m > e8qleH4Sgp) {
            scanf ("%d", &kHB7fuiFvcAY[e8qleH4Sgp]);
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
            }
            e8qleH4Sgp++;
        };
    }
    for (p2hU6wSWH = 0; pOcolQCAy > p2hU6wSWH; p2hU6wSWH++) {
        scanf ("%d", &b[p2hU6wSWH]);
    }
    Vb4XDidW53NQ (b, pOcolQCAy);
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
    Vb4XDidW53NQ (kHB7fuiFvcAY, m);
    for (e8qleH4Sgp = 0; m > e8qleH4Sgp; e8qleH4Sgp = e8qleH4Sgp + 1)
        cout << kHB7fuiFvcAY[e8qleH4Sgp] << " ";
    {
        p2hU6wSWH = 0;
        while (p2hU6wSWH < pOcolQCAy - (801 - 800)) {
            cout << b[p2hU6wSWH] << " ";
            p2hU6wSWH = p2hU6wSWH + 1;
        };
    }
    cout << b[pOcolQCAy - (356 - 355)];
    return 0;
}

void  Vb4XDidW53NQ (int kHB7fuiFvcAY [], int pOcolQCAy) {
    int e8qleH4Sgp, p2hU6wSWH, DlkdwmA9j, temp;
    for (e8qleH4Sgp = 0; pOcolQCAy - 1 > e8qleH4Sgp; e8qleH4Sgp++) {
        DlkdwmA9j = e8qleH4Sgp;
        for (p2hU6wSWH = e8qleH4Sgp + 1; p2hU6wSWH < pOcolQCAy; p2hU6wSWH++) {
            if (kHB7fuiFvcAY[DlkdwmA9j] > kHB7fuiFvcAY[p2hU6wSWH])
                DlkdwmA9j = p2hU6wSWH;
        }
        temp = kHB7fuiFvcAY[e8qleH4Sgp];
        kHB7fuiFvcAY[e8qleH4Sgp] = kHB7fuiFvcAY[DlkdwmA9j];
        kHB7fuiFvcAY[DlkdwmA9j] = temp;
    };
}

