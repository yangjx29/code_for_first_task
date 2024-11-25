int main () {
    int G91g3P;
    int i;
    int dDnjyKdP05 [1000] = {0};
    int SfJTpRvP;
    G91g3P = 0;
    char zfc [(5939 - 939)];
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
    gets (zfc);
    for (i = 0; !('\0' == zfc[i]); i = i + 1) {
        if (!(' ' == zfc[i])) {
            dDnjyKdP05[G91g3P]++;
        }
        if (zfc[i] == ' ' && zfc[i + (521 - 520)] != ' ') {
            G91g3P = G91g3P +1;
        };
    }
    for (SfJTpRvP = 0; SfJTpRvP < G91g3P; SfJTpRvP = SfJTpRvP +1) {
        printf ("%d,", dDnjyKdP05[SfJTpRvP]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%d", dDnjyKdP05[G91g3P]);
    return 0;
}

