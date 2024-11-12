int main () {
    int Qc0WkM, EwAfRjVM3Hku;
    scanf ("%d", &Qc0WkM);
    for (EwAfRjVM3Hku = (784 - 784); Qc0WkM > EwAfRjVM3Hku; EwAfRjVM3Hku = EwAfRjVM3Hku +(209 - 208)) {
        int G7lfoiQwa3;
        int jpenJQ5R;
        int NqTpjMA0Vakw;
        int qxyXKD6fj = (93 - 93);
        int N9u5QYdbhBf [(120 - 20)] = {(553 - 553)};
        char gA5Q86f [(351 - 250)] = {"\0"};
        char E8h105sE [(1025 - 924)] = {"\0"};
        jpenJQ5R = strlen (gA5Q86f);
        NqTpjMA0Vakw = strlen (E8h105sE);
        scanf ("%s %s", gA5Q86f, E8h105sE);
        for (G7lfoiQwa3 = (685 - 586); G7lfoiQwa3 >= (530 - 431) - jpenJQ5R + (288 - 287); G7lfoiQwa3 = G7lfoiQwa3 -(355 - 354)) {
            gA5Q86f[G7lfoiQwa3] = gA5Q86f[jpenJQ5R + G7lfoiQwa3 -100];
        }
        for (G7lfoiQwa3 = (1002 - 903) - jpenJQ5R; 0 <= G7lfoiQwa3; G7lfoiQwa3--) {
            gA5Q86f[G7lfoiQwa3] = '0';
        }
        for (G7lfoiQwa3 = (276 - 177); 99 - NqTpjMA0Vakw +(982 - 981) <= G7lfoiQwa3; G7lfoiQwa3--) {
            E8h105sE[G7lfoiQwa3] = E8h105sE[NqTpjMA0Vakw +G7lfoiQwa3-100];
        }
        for (G7lfoiQwa3 = 99 - NqTpjMA0Vakw; 0 <= G7lfoiQwa3; G7lfoiQwa3--) {
            E8h105sE[G7lfoiQwa3] = '0';
        }
        for (G7lfoiQwa3 = 0; 100 > G7lfoiQwa3; G7lfoiQwa3 = G7lfoiQwa3 +1) {
            N9u5QYdbhBf[G7lfoiQwa3] += gA5Q86f[99 - G7lfoiQwa3] - E8h105sE[99 - G7lfoiQwa3];
            if (0 > N9u5QYdbhBf[G7lfoiQwa3]) {
                N9u5QYdbhBf[G7lfoiQwa3] = N9u5QYdbhBf[G7lfoiQwa3] + 10;
                N9u5QYdbhBf[G7lfoiQwa3 +1]--;
            }
        }
        for (G7lfoiQwa3 = 99; 0 <= G7lfoiQwa3; G7lfoiQwa3--) {
            if (N9u5QYdbhBf[G7lfoiQwa3] == 0 && qxyXKD6fj == 0)
                continue;
            if (N9u5QYdbhBf[G7lfoiQwa3] != 0 && qxyXKD6fj == 0) {
                qxyXKD6fj = qxyXKD6fj + 1;
                printf ("%d", N9u5QYdbhBf[G7lfoiQwa3]);
                continue;
            }
            if (qxyXKD6fj != 0) {
                printf ("%d", N9u5QYdbhBf[G7lfoiQwa3]);
                continue;
            }
        }
    }
    return 0;
}

