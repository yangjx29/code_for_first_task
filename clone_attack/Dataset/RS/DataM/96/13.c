int main () {
    char AGRD5cfUT [110] = {'\0'}, bnH5E2r [110] = {'\0'};
    int cEADnJQUlzj, c2HaN94Me, UFQJWL2Y9Gh, f0peQx, WiXhGPrcyaeD, BK9oThyWVZG;
    scanf ("%s", AGRD5cfUT);
    UFQJWL2Y9Gh = strlen (AGRD5cfUT);
    c2HaN94Me = AGRD5cfUT[0] - '0';
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
    for (BK9oThyWVZG = 0; UFQJWL2Y9Gh -1 > BK9oThyWVZG; BK9oThyWVZG++) {
        c2HaN94Me = c2HaN94Me * 10 + AGRD5cfUT[BK9oThyWVZG +1] - '0';
        bnH5E2r[BK9oThyWVZG] = (c2HaN94Me / 13) + '0';
        c2HaN94Me = c2HaN94Me % 13;
    }
    if (!('0' != bnH5E2r[0])) {
        BK9oThyWVZG = 0;
        while (UFQJWL2Y9Gh > BK9oThyWVZG) {
            bnH5E2r[BK9oThyWVZG] = bnH5E2r[BK9oThyWVZG +1];
            BK9oThyWVZG = BK9oThyWVZG +1;
        };
    }
    if (bnH5E2r[0] == '\0') {
        bnH5E2r[0] = '0';
    }
    printf ("%s\n%d\n", bnH5E2r, c2HaN94Me);
}

