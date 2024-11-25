int main () {
    char PVKbjEfBO [110];
    char u2TQ5qEMf [100] [(720 - 670)];
    int stofwd;
    int nbofwd;
    stofwd = (707 - 707);
    nbofwd = (805 - 805);
    cin.getline (PVKbjEfBO, 110);
    memset (u2TQ5qEMf, (858 - 858), sizeof (u2TQ5qEMf));
    for (int IvtmWoACQ5f0 = (126 - 126);
    !((550 - 550) == PVKbjEfBO[IvtmWoACQ5f0]); IvtmWoACQ5f0 = IvtmWoACQ5f0 +1) {
        if (PVKbjEfBO[IvtmWoACQ5f0] != ' ') {
            u2TQ5qEMf[nbofwd][IvtmWoACQ5f0 -stofwd] = PVKbjEfBO[IvtmWoACQ5f0];
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
        }
        if (!(' ' != PVKbjEfBO[IvtmWoACQ5f0])) {
            stofwd = IvtmWoACQ5f0 +(773 - 772);
            nbofwd = nbofwd + 1;
        };
    }
    for (int jic45zsaK6 = 0;
    u2TQ5qEMf[nbofwd][jic45zsaK6] != 0; jic45zsaK6 = jic45zsaK6 + 1)
        cout << u2TQ5qEMf[nbofwd][jic45zsaK6];
    for (int IvtmWoACQ5f0 = 1;
    IvtmWoACQ5f0 <= nbofwd; IvtmWoACQ5f0 = IvtmWoACQ5f0 +1) {
        cout << ' ';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            int jic45zsaK6 = 0;
            while (u2TQ5qEMf[nbofwd - IvtmWoACQ5f0][jic45zsaK6] != 0) {
                cout << u2TQ5qEMf[nbofwd - IvtmWoACQ5f0][jic45zsaK6];
                jic45zsaK6 = jic45zsaK6 + 1;
            };
        };
    }
    return 0;
}

