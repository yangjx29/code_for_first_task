int drglC2L [(206 - 106)] [100];
int mi = (832 - 832);
int nInYuUb2P0;
int hcrNzL06h = (797 - 797);

void  del (int nInYuUb2P0) {
    int Px3tEUe, j;
    {
        Px3tEUe = 281 - 279;
        while (nInYuUb2P0 > Px3tEUe) {
            drglC2L[(420 - 420)][Px3tEUe -(379 - 378)] = drglC2L[(53 - 53)][Px3tEUe];
            Px3tEUe = Px3tEUe +1;
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
    {
        j = 2;
        while (nInYuUb2P0 > j) {
            drglC2L[j - (445 - 444)][(121 - 121)] = drglC2L[j][0];
            j = j + 1;
        };
    }
    {
        Px3tEUe = 2;
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
        while (nInYuUb2P0 > Px3tEUe) {
            {
                j = 2;
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
                while (nInYuUb2P0 > j) {
                    drglC2L[Px3tEUe -(808 - 807)][j - (114 - 113)] = drglC2L[Px3tEUe][j];
                    j = j + 1;
                };
            }
            Px3tEUe = Px3tEUe +1;
        };
    };
}

int JdP3Mq (int nInYuUb2P0) {
    int Px3tEUe, j;
    if (nInYuUb2P0 >= 2) {
        del (nInYuUb2P0);
        {
            Px3tEUe = 0;
            while (nInYuUb2P0 > Px3tEUe) {
                mi = drglC2L[Px3tEUe][0];
                {
                    j = 0;
                    while (nInYuUb2P0 > j) {
                        if (drglC2L[Px3tEUe][j] < mi)
                            mi = drglC2L[Px3tEUe][j];
                        j++;
                    };
                }
                for (j = 0; nInYuUb2P0 > j; j = j + 1)
                    drglC2L[Px3tEUe][j] = drglC2L[Px3tEUe][j] - mi;
                Px3tEUe = Px3tEUe +1;
            };
        }
        {
            Px3tEUe = 0;
            while (Px3tEUe < nInYuUb2P0) {
                mi = drglC2L[0][Px3tEUe];
                for (j = 0; nInYuUb2P0 > j; j = j + 1)
                    if (drglC2L[j][Px3tEUe] < mi)
                        mi = drglC2L[j][Px3tEUe];
                for (j = 0; j < nInYuUb2P0; j = j + 1)
                    drglC2L[j][Px3tEUe] -= mi;
                Px3tEUe = Px3tEUe +1;
            };
        }
        hcrNzL06h += drglC2L[1][1];
        JdP3Mq (nInYuUb2P0 - 1);
    }
    else {
        return hcrNzL06h;
    };
}

int main () {
    int Px3tEUe, j;
    int JdP3Mq (int);
    cin >> nInYuUb2P0;
    for (int iQMU2GV = 1;
    nInYuUb2P0 >= iQMU2GV; iQMU2GV = iQMU2GV + 1) {
        JdP3Mq (nInYuUb2P0);
        for (Px3tEUe = 0; Px3tEUe < nInYuUb2P0; Px3tEUe = Px3tEUe +1)
            for (j = 0; j < nInYuUb2P0; j = j + 1)
                cin >> drglC2L[Px3tEUe][j];
        cout << hcrNzL06h << endl;
        hcrNzL06h = 0;
    }
    return 0;
}

