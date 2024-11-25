int HTuDRa [(544 - 535)] [9];
int RIzqUy [9] [9];

void  Law8UAk4 () {
    int i;
    int Cg2wPO;
    for (i = (365 - 365); 9 > i; i = i + 1)
        for (Cg2wPO = 0; Cg2wPO < 9; Cg2wPO = Cg2wPO +1) {
            HTuDRa[i][Cg2wPO] = HTuDRa[i][Cg2wPO] + RIzqUy[i][Cg2wPO] * 2;
            HTuDRa[i - (213 - 212)][Cg2wPO] += RIzqUy[i][Cg2wPO];
            HTuDRa[i + (585 - 584)][Cg2wPO] = HTuDRa[i + (585 - 584)][Cg2wPO] + RIzqUy[i][Cg2wPO];
            HTuDRa[i][Cg2wPO -1] = HTuDRa[i][Cg2wPO -1] + RIzqUy[i][Cg2wPO];
            HTuDRa[i][Cg2wPO +1] += RIzqUy[i][Cg2wPO];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            HTuDRa[i - 1][Cg2wPO -1] = HTuDRa[i - 1][Cg2wPO -1] + RIzqUy[i][Cg2wPO];
            HTuDRa[i - 1][Cg2wPO +1] += RIzqUy[i][Cg2wPO];
            HTuDRa[i + 1][Cg2wPO -1] = HTuDRa[i + 1][Cg2wPO -1] + RIzqUy[i][Cg2wPO];
            HTuDRa[i + 1][Cg2wPO +1] = HTuDRa[i + 1][Cg2wPO +1] + RIzqUy[i][Cg2wPO];
        }
    {
        i = 0;
        while (9 > i) {
            for (Cg2wPO = 0; Cg2wPO < 9; Cg2wPO = Cg2wPO +1) {
                HTuDRa[i][Cg2wPO] = HTuDRa[i][Cg2wPO] - RIzqUy[i][Cg2wPO];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < 9; i = i + 1)
        for (Cg2wPO = 0; Cg2wPO < 9; Cg2wPO = Cg2wPO +1)
            RIzqUy[i][Cg2wPO] = HTuDRa[i][Cg2wPO];
}

int main () {
    int m;
    int n;
    int i, Cg2wPO;
    cin >> m >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < 9) {
            for (Cg2wPO = 0; Cg2wPO < 9; Cg2wPO = Cg2wPO +1) {
                HTuDRa[i][Cg2wPO] = 0;
                RIzqUy[i][Cg2wPO] = 0;
            }
            i = i + 1;
        };
    }
    HTuDRa[4][4] = RIzqUy[4][4] = m;
    while (n = n - 1) {
        Law8UAk4 ();
    }
    for (i = 0; i < 9; i = i + 1) {
        {
            Cg2wPO = 0;
            while (Cg2wPO < (621 - 613)) {
                cout << HTuDRa[i][Cg2wPO] << " ";
                Cg2wPO = Cg2wPO +1;
            };
        }
        cout << HTuDRa[i][8];
        cout << endl;
    }
    return 0;
}

