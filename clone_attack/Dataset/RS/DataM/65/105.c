int main () {
    int CDly0eoh [YDHxT7p], PTmsDOj94l [YDHxT7p];
    int c;
    int bOYNHc2g1E;
    c = 0;
    bOYNHc2g1E = 0;
    int g48697z;
    int IDBTZ6ly;
    scanf ("%d", &g48697z);
    {
        IDBTZ6ly = 0;
        while (g48697z > IDBTZ6ly) {
            scanf ("%d%d", &CDly0eoh[IDBTZ6ly], &PTmsDOj94l[IDBTZ6ly]);
            if (CDly0eoh[IDBTZ6ly] == PTmsDOj94l[IDBTZ6ly]) {
                c = c + 1;
            }
            else {
                if (!(0 != CDly0eoh[IDBTZ6ly]) && !(1 != PTmsDOj94l[IDBTZ6ly]) || !(1 != CDly0eoh[IDBTZ6ly]) && PTmsDOj94l[IDBTZ6ly] == 2 || CDly0eoh[IDBTZ6ly] == 2 && PTmsDOj94l[IDBTZ6ly] == 0) {
                    bOYNHc2g1E = bOYNHc2g1E + 1;
                };
            }
            IDBTZ6ly = IDBTZ6ly +1;
        };
    }
    if (g48697z - c < 2 * bOYNHc2g1E) {
    }
    else {
        if (g48697z - c > 2 * bOYNHc2g1E) {
            printf ("B");
        }
        else {
        };
    }
    return 0;
}

