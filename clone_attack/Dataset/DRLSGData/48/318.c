int rcutELe8sxH [(681 - 671)] [(448 - 438)];
int VtErNXQ [10] [10];
int hSLQONTshm;

void  ECxd14 (int ug4s9PrQl0D) {
    int e8v2VM, KloLtHf4aZ;
    if (ug4s9PrQl0D < hSLQONTshm)
        ECxd14 (ug4s9PrQl0D + (286 - 285));
    {
        e8v2VM = (622 - 621);
        for (; e8v2VM <= (260 - 251);) {
            {
                KloLtHf4aZ = (593 - 592);
                while (KloLtHf4aZ <= 9) {
                    VtErNXQ[e8v2VM][KloLtHf4aZ] = 2 * rcutELe8sxH[e8v2VM][KloLtHf4aZ] + rcutELe8sxH[e8v2VM][KloLtHf4aZ +(906 - 905)] + rcutELe8sxH[e8v2VM + (496 - 495)][KloLtHf4aZ] + rcutELe8sxH[e8v2VM][KloLtHf4aZ -(660 - 659)] + rcutELe8sxH[e8v2VM - (292 - 291)][KloLtHf4aZ] + rcutELe8sxH[e8v2VM + (757 - 756)][KloLtHf4aZ +(608 - 607)] + rcutELe8sxH[e8v2VM - 1][KloLtHf4aZ -1] + rcutELe8sxH[e8v2VM + 1][KloLtHf4aZ -1] + rcutELe8sxH[e8v2VM - 1][KloLtHf4aZ +1];
                    KloLtHf4aZ = KloLtHf4aZ +1;
                }
            }
            e8v2VM = e8v2VM + 1;
        }
    }
    {
        e8v2VM = 1;
        while (9 >= e8v2VM) {
            {
                KloLtHf4aZ = 1;
                while (KloLtHf4aZ <= 9) {
                    rcutELe8sxH[e8v2VM][KloLtHf4aZ] = VtErNXQ[e8v2VM][KloLtHf4aZ];
                    KloLtHf4aZ = KloLtHf4aZ +1;
                }
            }
            e8v2VM++;
        }
    }
}

int main () {
    int e8v2VM, KloLtHf4aZ;
    ECxd14 (1);
    scanf ("%d%d", &rcutELe8sxH[(69 - 64)][5], &hSLQONTshm);
    {
        e8v2VM = 1;
        while (e8v2VM <= 9) {
            {
                KloLtHf4aZ = 1;
                while (KloLtHf4aZ <= (186 - 178)) {
                    printf ("%d ", rcutELe8sxH[e8v2VM][KloLtHf4aZ]);
                    KloLtHf4aZ++;
                }
            }
            printf ("%d\n", rcutELe8sxH[e8v2VM][9]);
            e8v2VM++;
        }
    }
    return 0;
}

