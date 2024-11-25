main () {
    char tF1V32Pg6eN [31] = {'\0'}, TetIqiubP [31] = {'\0'};
    puts (TetIqiubP);
    int FjUsQqfgIkVY = (368 - 368), vMS9sxmODQIN, ac3MYkudjN, nI3ceKDmJ, dKR8BD4U9C, OHP3SfvKI;
    long  int O2EdHAGmD7Wl [(975 - 944)], z7Vehy1C, MOjRp6CP [31], CTyFzg [31] = {(427 - 427)};
    scanf ("%d %s %d", &vMS9sxmODQIN, tF1V32Pg6eN, &ac3MYkudjN);
    for (dKR8BD4U9C = 0; !('\0' == tF1V32Pg6eN[dKR8BD4U9C]); dKR8BD4U9C = dKR8BD4U9C + 1) {
        if (65 <= tF1V32Pg6eN[dKR8BD4U9C] && 90 >= tF1V32Pg6eN[dKR8BD4U9C])
            O2EdHAGmD7Wl[dKR8BD4U9C] = tF1V32Pg6eN[dKR8BD4U9C] - 55;
        else if (tF1V32Pg6eN[dKR8BD4U9C] >= 97 && tF1V32Pg6eN[dKR8BD4U9C] <= 122)
            O2EdHAGmD7Wl[dKR8BD4U9C] = tF1V32Pg6eN[dKR8BD4U9C] - 87;
        else
            O2EdHAGmD7Wl[dKR8BD4U9C] = tF1V32Pg6eN[dKR8BD4U9C] - 48;
    }
    nI3ceKDmJ = strlen (tF1V32Pg6eN);
    {
        dKR8BD4U9C = 0;
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
        }
        while (dKR8BD4U9C < nI3ceKDmJ) {
            z7Vehy1C = (int) (O2EdHAGmD7Wl[dKR8BD4U9C] * pow (vMS9sxmODQIN, nI3ceKDmJ - dKR8BD4U9C - 1));
            dKR8BD4U9C = dKR8BD4U9C + 1;
            FjUsQqfgIkVY = FjUsQqfgIkVY +z7Vehy1C;
        };
    }
    dKR8BD4U9C = 0;
    do {
        CTyFzg[dKR8BD4U9C] = FjUsQqfgIkVY % ac3MYkudjN;
        FjUsQqfgIkVY = (FjUsQqfgIkVY -CTyFzg[dKR8BD4U9C]) / ac3MYkudjN;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        dKR8BD4U9C = dKR8BD4U9C + 1;
    }
    while (FjUsQqfgIkVY != 0);
    for (OHP3SfvKI = 0; OHP3SfvKI < dKR8BD4U9C; OHP3SfvKI = OHP3SfvKI +1) {
        MOjRp6CP[OHP3SfvKI] = CTyFzg[dKR8BD4U9C - 1 - OHP3SfvKI];
        if (MOjRp6CP[OHP3SfvKI] >= 10)
            TetIqiubP[OHP3SfvKI] = MOjRp6CP[OHP3SfvKI] + 55;
        else
            TetIqiubP[OHP3SfvKI] = MOjRp6CP[OHP3SfvKI] + 48;
    }
    return 0;
}

