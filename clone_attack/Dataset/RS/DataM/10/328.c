int main () {
    struct   {
        int V0OLwp, uXc9iMrGSm;
    }
    E3I7quz [(907 - 877)];
    int n41Pm7sw;
    int SOPsQjD6abB;
    int vfV49oOgLnp;
    int am8Kx5Ts;
    int UjdUlnR;
    n41Pm7sw = 1;
    scanf ("%d", &UjdUlnR);
    {
        SOPsQjD6abB = 689 - 689;
        while (SOPsQjD6abB < UjdUlnR) {
            scanf ("%d", &E3I7quz[SOPsQjD6abB].V0OLwp);
            E3I7quz[SOPsQjD6abB].uXc9iMrGSm = 1;
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
            SOPsQjD6abB = SOPsQjD6abB +1;
        };
    }
    for (SOPsQjD6abB = UjdUlnR -1; 0 <= SOPsQjD6abB; SOPsQjD6abB = SOPsQjD6abB -1) {
        vfV49oOgLnp = SOPsQjD6abB +1;
        while (vfV49oOgLnp < UjdUlnR) {
            if ((E3I7quz[SOPsQjD6abB].V0OLwp >= E3I7quz[vfV49oOgLnp].V0OLwp) && (E3I7quz[SOPsQjD6abB].uXc9iMrGSm <= (E3I7quz[vfV49oOgLnp].uXc9iMrGSm + 1)))
                E3I7quz[SOPsQjD6abB].uXc9iMrGSm = E3I7quz[vfV49oOgLnp].uXc9iMrGSm + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            vfV49oOgLnp++;
        };
    }
    for (SOPsQjD6abB = 0; SOPsQjD6abB < UjdUlnR; SOPsQjD6abB++) {
        if (n41Pm7sw <= E3I7quz[SOPsQjD6abB].uXc9iMrGSm)
            n41Pm7sw = E3I7quz[SOPsQjD6abB].uXc9iMrGSm;
    }
    printf ("%d\n", n41Pm7sw);
    return 0;
}

