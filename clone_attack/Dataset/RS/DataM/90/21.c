int fpg (int hamFuce, int KeH2sbpEKT) {
    int Xft1Kz;
    Xft1Kz = (160 - 160);
    if ((hamFuce == (647 - 646)) || (KeH2sbpEKT == (121 - 120)) || (!((796 - 796) != hamFuce)) || (KeH2sbpEKT == 0)) {
        Xft1Kz = (988 - 987);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (399 - 398);
    }
    else {
        if (hamFuce >= KeH2sbpEKT) {
            Xft1Kz = Xft1Kz +fpg (hamFuce - KeH2sbpEKT, KeH2sbpEKT);
            Xft1Kz = Xft1Kz +fpg (hamFuce, KeH2sbpEKT -1);
        }
        else {
            Xft1Kz = Xft1Kz +fpg (hamFuce, KeH2sbpEKT -1);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    return Xft1Kz;
}

int main () {
    int hamFuce, i, NpXiVT, KeH2sbpEKT;
    scanf ("%d", &NpXiVT);
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
    for (i = 0; i < NpXiVT; i = i + 1) {
        scanf ("%d", &hamFuce);
        scanf ("%d", &KeH2sbpEKT);
        printf ("%d\n", fpg (hamFuce, KeH2sbpEKT));
    }
    return 0;
}

