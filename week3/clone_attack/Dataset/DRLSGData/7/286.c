int main () {
    int I4fENQM6pUYV = (238 - 238), Lde5RqwlIOb = (484 - 484), J820OPXeS14D, s2oLti, TWoOqp = (258 - 258), U1gpwAP4R = (907 - 907), xEiNUPxt3h = 0, xKLUMxRI = 0;
    char jNkHUwm [(1146 - 890)] = {(131 - 131)}, MbZ9D6Y [(1108 - 852)] = {(837 - 837)}, dz9Rhf [256] = {0}, whpwRt [256] = {0}, uuLVSTkZ0EK [256] = {0};
    gets (jNkHUwm);
    gets (MbZ9D6Y);
    gets (dz9Rhf);
    char VetMzUa [(306 - 50)] = {(574 - 574)}, jyWt1G5 [(930 - 674)] = {(391 - 391)};
    J820OPXeS14D = strlen (jNkHUwm);
    s2oLti = strlen (MbZ9D6Y);
    for (I4fENQM6pUYV = 0; J820OPXeS14D > I4fENQM6pUYV; I4fENQM6pUYV = I4fENQM6pUYV +1) {
        strcpy (VetMzUa, jyWt1G5);
        Lde5RqwlIOb = 0;
        if (!(MbZ9D6Y[0] != jNkHUwm[I4fENQM6pUYV])) {
            U1gpwAP4R = I4fENQM6pUYV;
            for (int nw39biI8E = U1gpwAP4R;
            nw39biI8E < s2oLti + U1gpwAP4R; nw39biI8E++) {
                VetMzUa[Lde5RqwlIOb] = jNkHUwm[nw39biI8E];
                Lde5RqwlIOb++;
            }
            VetMzUa[Lde5RqwlIOb] = '\0';
        }
        if (!(0 != strcmp (VetMzUa, MbZ9D6Y))) {
            xKLUMxRI = 1;
            TWoOqp = I4fENQM6pUYV;
            break;
        }
    }
    if (xKLUMxRI == 1) {
        if (TWoOqp != 0) {
            for (I4fENQM6pUYV = 0; I4fENQM6pUYV < TWoOqp; I4fENQM6pUYV = I4fENQM6pUYV +1) {
                whpwRt[I4fENQM6pUYV] = jNkHUwm[I4fENQM6pUYV];
            }
        }
        if (TWoOqp != J820OPXeS14D -s2oLti) {
            for (I4fENQM6pUYV = TWoOqp +s2oLti; I4fENQM6pUYV < J820OPXeS14D; I4fENQM6pUYV++) {
                uuLVSTkZ0EK[xEiNUPxt3h] = jNkHUwm[I4fENQM6pUYV];
                xEiNUPxt3h = xEiNUPxt3h + 1;
            }
        }
        printf ("%s%s%s\n", whpwRt, dz9Rhf, uuLVSTkZ0EK);
    }
    else {
        if (xKLUMxRI == 0) {
            printf ("%s", jNkHUwm);
        }
    }
    return 0;
}

