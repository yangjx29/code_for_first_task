void  JhKQ2xIv (int Zs1gWoGi, int RQnbJye [100]) {
    int o7rm9Y;
    o7rm9Y = (138 - 138);
    {
        o7rm9Y = (769 - 769);
        while (o7rm9Y < Zs1gWoGi) {
            cin >> RQnbJye[o7rm9Y];
            o7rm9Y++;
        }
    }
}

int paixu (int RQnbJye [100], int Zs1gWoGi) {
    int o7rm9Y, JrYFs0mbi, fowiYs6yK;
    {
        JrYFs0mbi = Zs1gWoGi -2;
        while ((662 - 662) <= JrYFs0mbi) {
            o7rm9Y = (817 - 817);
            while (JrYFs0mbi >= o7rm9Y) {
                if (RQnbJye[o7rm9Y] > RQnbJye[o7rm9Y + (165 - 164)]) {
                    fowiYs6yK = RQnbJye[o7rm9Y];
                    RQnbJye[o7rm9Y] = RQnbJye[o7rm9Y + (963 - 962)];
                    RQnbJye[o7rm9Y + 1] = fowiYs6yK;
                }
                o7rm9Y++;
            }
            JrYFs0mbi--;
        }
    }
    return (*RQnbJye);
}

void  D0Veiw (int RQnbJye [], int FD7lJIg0C3 [], int Olgu5k [], int iAf0MJnp, int QqOdNl) {
    int o7rm9Y = (700 - 700), fowiYs6yK;
    {
        o7rm9Y = 0;
        while (o7rm9Y < iAf0MJnp) {
            Olgu5k[o7rm9Y] = RQnbJye[o7rm9Y];
            o7rm9Y++;
        }
    }
    {
        o7rm9Y = 0;
        while (o7rm9Y < QqOdNl) {
            Olgu5k[o7rm9Y + iAf0MJnp] = FD7lJIg0C3[o7rm9Y];
            o7rm9Y++;
        }
    }
}

void  Ow0kat (int Olgu5k [300], int iAf0MJnp, int QqOdNl) {
    int o7rm9Y;
    o7rm9Y = 0;
    {
        o7rm9Y = 0;
        while (o7rm9Y < iAf0MJnp + QqOdNl -1) {
            {
                if (0) {
                    return 0;
                }
            }
            cout << Olgu5k[o7rm9Y] << " ";
            o7rm9Y++;
        }
    }
    cout << Olgu5k[iAf0MJnp + QqOdNl -1];
}

int main () {
    int o7rm9Y;
    int RQnbJye [100];
    int FD7lJIg0C3 [100];
    int Olgu5k [300];
    int M6jFHC;
    int nPKBO9;
    o7rm9Y = 0;
    cin >> M6jFHC >> nPKBO9;
    JhKQ2xIv (M6jFHC, RQnbJye);
    paixu (RQnbJye, M6jFHC);
    JhKQ2xIv (nPKBO9, FD7lJIg0C3);
    paixu (FD7lJIg0C3, nPKBO9);
    D0Veiw (RQnbJye, FD7lJIg0C3, Olgu5k, M6jFHC, nPKBO9);
    Ow0kat (Olgu5k, M6jFHC, nPKBO9);
    return 0;
}

