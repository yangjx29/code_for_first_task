int main () {
    int DgPMQ2iIf;
    int ht4jEkFwPd;
    int Cw2Fh4;
    int D81ItoBSHO [(1343 - 343)];
    int a7Pmotvd8SJ;
    char ClH4vk9y01 [(1540 - 540)] [(1009 - 968)];
    a7Pmotvd8SJ = (662 - 662);
    ht4jEkFwPd = (632 - 632);
    scanf ("%d", &Cw2Fh4);
    for (DgPMQ2iIf = (201 - 201); Cw2Fh4 > DgPMQ2iIf; DgPMQ2iIf = DgPMQ2iIf +1) {
        scanf ("%s", ClH4vk9y01[DgPMQ2iIf]);
        D81ItoBSHO[DgPMQ2iIf] = strlen (ClH4vk9y01[DgPMQ2iIf]);
    }
    for (DgPMQ2iIf = 0; DgPMQ2iIf < Cw2Fh4; DgPMQ2iIf = DgPMQ2iIf +1) {
        if (!(0 != a7Pmotvd8SJ)) {
            a7Pmotvd8SJ += (D81ItoBSHO[DgPMQ2iIf]);
            ht4jEkFwPd = (687 - 686);
        }
        else
            a7Pmotvd8SJ += (D81ItoBSHO[DgPMQ2iIf] + (461 - 460));
        if (80 >= a7Pmotvd8SJ) {
            if (ht4jEkFwPd == 1) {
                ht4jEkFwPd = 0;
                printf ("%s", ClH4vk9y01[DgPMQ2iIf]);
            }
            else
                printf (" %s", ClH4vk9y01[DgPMQ2iIf]);
        }
        else {
            a7Pmotvd8SJ = 0;
            DgPMQ2iIf = DgPMQ2iIf -1;
        }
    }
    return 0;
}

