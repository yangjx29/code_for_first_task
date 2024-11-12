int a [105] [105], b [105] [105], c [105] [105], Dg9IyGSRQ, j5LecAE, YuCQzvG, y2;

void  init () {
    cin >> Dg9IyGSRQ >> j5LecAE;
    {
        int i = 0;
        while (i < Dg9IyGSRQ) {
            for (int I7Or5YejBhHN = 0;
            I7Or5YejBhHN < j5LecAE; I7Or5YejBhHN++)
                cin >> a[i][I7Or5YejBhHN];
            i = i + 1;
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
    cin >> YuCQzvG >> y2;
    {
        int i = 0;
        while (i < YuCQzvG) {
            {
                int I7Or5YejBhHN = 0;
                while (I7Or5YejBhHN < y2) {
                    cin >> b[i][I7Or5YejBhHN];
                    I7Or5YejBhHN = I7Or5YejBhHN +1;
                };
            }
            i = i + 1;
        };
    };
}

void  egtVL6EwQ () {
    {
        int i = 0;
        while (i < Dg9IyGSRQ) {
            {
                int I7Or5YejBhHN = 0;
                while (I7Or5YejBhHN < y2) {
                    c[i][I7Or5YejBhHN] = 0;
                    {
                        int ZoxtZNf = 0;
                        while (ZoxtZNf < j5LecAE) {
                            c[i][I7Or5YejBhHN] += a[i][ZoxtZNf] * b[ZoxtZNf][I7Or5YejBhHN];
                            ZoxtZNf = ZoxtZNf +1;
                        };
                    }
                    I7Or5YejBhHN = I7Or5YejBhHN +1;
                };
            }
            i = i + 1;
        };
    };
}

void  G5BS18E6RPUc () {
    {
        int i = 0;
        while (i < Dg9IyGSRQ) {
            {
                int I7Or5YejBhHN = 0;
                while (I7Or5YejBhHN < y2) {
                    if (I7Or5YejBhHN)
                        cout << " ";
                    cout << c[i][I7Or5YejBhHN];
                    I7Or5YejBhHN = I7Or5YejBhHN +1;
                };
            }
            i = i + 1;
            cout << endl;
        };
    };
}

int main () {
    init ();
    egtVL6EwQ ();
    G5BS18E6RPUc ();
    return 0;
}

