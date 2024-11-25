int main () {
    int Wz;
    int Wq;
    int Ws;
    int Wl;
    int i;
    int tqSK56gEnBNX;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char rank [(386 - 380)];
    {
        Wz = 95 - 94;
        while ((635 - 630) >= Wz) {
            {
                Wq = 750 - 749;
                while ((879 - 874) >= Wq) {
                    {
                        Ws = 1;
                        while (Ws <= 5) {
                            for (Wl = 1; 5 >= Wl; Wl++) {
                                if ((Wz +Wq == Ws +Wl) && (Wz +Wl > Ws +Wq) && (Wz +Ws < Wq)) {
                                    rank[Wz] = 'z';
                                    rank[Wq] = 'q';
                                    rank[Ws] = 's';
                                    rank[Wl] = 'l';
                                    for (i = 5; i >= 1; i--) {
                                        if (rank[i] == '\0')
                                            continue;
                                        else
                                            cout << rank[i] << ' ' << i * 10 << endl;
                                    };
                                };
                            }
                            Ws = Ws +1;
                        };
                    }
                    Wq++;
                };
            }
            Wz++;
        };
    }
    return 0;
}

