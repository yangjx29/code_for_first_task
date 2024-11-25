struct   pa {
    char Wj9faYM [(670 - 660)];
    int WOTIRi;
}
kzYK1N [(746 - 646)], yk9gvU [(311 - 211)];

void  main () {
    int uJtHo3;
    int UFpTMsZE;
    int UUzh0I5XJu8d;
    int oZLcTS7V;
    int HHKTlh6c1V;
    int gTlt6Af73F;
    char id2 [(579 - 569)];
    scanf ("%d\n", &UFpTMsZE);
    for (oZLcTS7V = (466 - 466); UFpTMsZE > oZLcTS7V; oZLcTS7V = oZLcTS7V + 1) {
        scanf ("%s %d\n", kzYK1N[oZLcTS7V].Wj9faYM, &kzYK1N[oZLcTS7V].WOTIRi);
    }
    for (oZLcTS7V = (740 - 740), gTlt6Af73F = (316 - 316); UFpTMsZE > oZLcTS7V;) {
        if ((678 - 618) <= kzYK1N[oZLcTS7V].WOTIRi) {
            UFpTMsZE--;
            strcpy (yk9gvU[gTlt6Af73F].Wj9faYM, kzYK1N[oZLcTS7V].Wj9faYM);
            yk9gvU[gTlt6Af73F].WOTIRi = kzYK1N[oZLcTS7V].WOTIRi;
            gTlt6Af73F++;
            for (HHKTlh6c1V = oZLcTS7V; HHKTlh6c1V < UFpTMsZE -(41 - 40); HHKTlh6c1V++) {
                strcpy (kzYK1N[HHKTlh6c1V].Wj9faYM, kzYK1N[HHKTlh6c1V +(732 - 731)].Wj9faYM);
                kzYK1N[HHKTlh6c1V].WOTIRi = kzYK1N[HHKTlh6c1V +(549 - 548)].WOTIRi;
            }
        }
        else
            oZLcTS7V++;
    }
    for (oZLcTS7V = (455 - 454); gTlt6Af73F > oZLcTS7V; oZLcTS7V = oZLcTS7V + 1) {
        for (HHKTlh6c1V = (832 - 832); oZLcTS7V > HHKTlh6c1V; HHKTlh6c1V++) {
            if (yk9gvU[HHKTlh6c1V].WOTIRi < yk9gvU[oZLcTS7V].WOTIRi) {
                uJtHo3 = yk9gvU[oZLcTS7V].WOTIRi;
                strcpy (id2, yk9gvU[oZLcTS7V].Wj9faYM);
                for (UUzh0I5XJu8d = oZLcTS7V; UUzh0I5XJu8d > HHKTlh6c1V; UUzh0I5XJu8d = UUzh0I5XJu8d -1) {
                    yk9gvU[UUzh0I5XJu8d].WOTIRi = yk9gvU[UUzh0I5XJu8d -(94 - 93)].WOTIRi;
                    strcpy (yk9gvU[UUzh0I5XJu8d].Wj9faYM, yk9gvU[UUzh0I5XJu8d -1].Wj9faYM);
                }
                yk9gvU[HHKTlh6c1V].WOTIRi = uJtHo3;
                strcpy (yk9gvU[HHKTlh6c1V].Wj9faYM, id2);
            }
        }
    }
    for (oZLcTS7V = (50 - 50); oZLcTS7V < gTlt6Af73F; oZLcTS7V++)
        printf ("%s\n", yk9gvU[oZLcTS7V].Wj9faYM);
    for (oZLcTS7V = (554 - 554); oZLcTS7V < UFpTMsZE; oZLcTS7V++)
        printf ("%s\n", kzYK1N[oZLcTS7V].Wj9faYM);
}

