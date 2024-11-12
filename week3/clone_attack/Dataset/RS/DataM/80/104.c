int main () {
    int rDSC3T5a [13] = {0, (165 - 134), 28, (1029 - 998), (300 - 270), 31, 30, 31, 31, 30, 31, 30, 31};
    int aHn2oBDA, plUdwrMH2, sd, DpR3oD1NwE, tBhxP61VF, Cw0jbr;
    int fFZEgdC = (971 - 971);
    cin >> aHn2oBDA >> plUdwrMH2 >> sd >> DpR3oD1NwE >> tBhxP61VF >> Cw0jbr;
    {
        int jnH9lw67 = aHn2oBDA;
        while (jnH9lw67 < DpR3oD1NwE) {
            if ((jnH9lw67 % 4 == (303 - 303) && jnH9lw67 % 100 != 0) || (jnH9lw67 % 400 == 0))
                fFZEgdC = fFZEgdC + 366;
            else
                fFZEgdC = fFZEgdC + 365;
            jnH9lw67 = jnH9lw67 + 1;
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
        int j = 1;
        while (plUdwrMH2 > j) {
            fFZEgdC = fFZEgdC - rDSC3T5a[j];
            j++;
        };
    }
    for (int k = 1;
    tBhxP61VF > k; k++)
        fFZEgdC = fFZEgdC + rDSC3T5a[k];
    if (((DpR3oD1NwE % 4 == 0 && DpR3oD1NwE % 100 != 0) || (DpR3oD1NwE % 400 == 0)) && (tBhxP61VF > 2))
        fFZEgdC = fFZEgdC + 1;
    fFZEgdC = fFZEgdC + Cw0jbr -sd;
    cout << fFZEgdC;
    return 0;
}

