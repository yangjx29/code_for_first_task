int main () {
    int PDR3va, rOVLszMC, VwIaxi8 [1000], mn0NCspfva, vpjcECxA4KI;
    scanf ("%d %d", &PDR3va, &rOVLszMC);
    for (mn0NCspfva = 0; mn0NCspfva < PDR3va; mn0NCspfva = mn0NCspfva + 1) {
        scanf ("%d", &VwIaxi8[mn0NCspfva]);
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
    for (mn0NCspfva = 0; mn0NCspfva < PDR3va; mn0NCspfva++) {
        for (vpjcECxA4KI = 0; vpjcECxA4KI < mn0NCspfva; vpjcECxA4KI = vpjcECxA4KI + 1) {
            if (VwIaxi8[mn0NCspfva] + VwIaxi8[vpjcECxA4KI] == rOVLszMC) {
                printf ("yes");
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                return 0;
            };
        }
        for (vpjcECxA4KI = mn0NCspfva + 1; vpjcECxA4KI < PDR3va; vpjcECxA4KI++) {
            if (VwIaxi8[mn0NCspfva] + VwIaxi8[vpjcECxA4KI] == rOVLszMC) {
                printf ("yes");
                return 0;
            };
        };
    }
    printf ("no");
    return 0;
}

