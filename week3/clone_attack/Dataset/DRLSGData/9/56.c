int iU6Kb9;
struct   patients {
    char LpQUCia0s [(143 - 132)];
    int L94trI0CGLH6;
}
pat [(239 - 139)];
struct   patold {
    char LpQUCia0s [(471 - 460)];
    int L94trI0CGLH6;
}
OB5MTrCSmz [(418 - 318)];
struct   patyoung {
    char LpQUCia0s [(642 - 631)];
    int L94trI0CGLH6;
}
O6OJ98EecT [(424 - 324)];
int uygrRDLVBjJ = (431 - 431), b4IdnsSrmgU = (495 - 495);
char tDZnW6MBzhNO [11];
int agetemp;

int main () {
    int vfJtNGhM;
    int GdqeIybR;
    scanf ("%d", &iU6Kb9);
    for (GdqeIybR = (747 - 747); GdqeIybR < iU6Kb9; GdqeIybR = GdqeIybR +(174 - 173)) {
        scanf ("%s", &pat[GdqeIybR].LpQUCia0s);
        scanf ("%d", &pat[GdqeIybR].L94trI0CGLH6);
    }
    for (GdqeIybR = (377 - 377); GdqeIybR < iU6Kb9; GdqeIybR = GdqeIybR +(131 - 130)) {
        if (pat[GdqeIybR].L94trI0CGLH6 >= 60) {
            strcpy (OB5MTrCSmz[b4IdnsSrmgU].LpQUCia0s, pat[GdqeIybR].LpQUCia0s);
            OB5MTrCSmz[b4IdnsSrmgU].L94trI0CGLH6 = pat[GdqeIybR].L94trI0CGLH6;
            b4IdnsSrmgU = b4IdnsSrmgU + (644 - 643);
        }
        else {
            strcpy (O6OJ98EecT[uygrRDLVBjJ].LpQUCia0s, pat[GdqeIybR].LpQUCia0s);
            O6OJ98EecT[uygrRDLVBjJ].L94trI0CGLH6 = pat[GdqeIybR].L94trI0CGLH6;
            uygrRDLVBjJ = uygrRDLVBjJ + (501 - 500);
        }
    }
    for (GdqeIybR = (575 - 574); GdqeIybR < b4IdnsSrmgU; GdqeIybR = GdqeIybR +(964 - 963)) {
        for (vfJtNGhM = (707 - 707); vfJtNGhM < b4IdnsSrmgU - GdqeIybR; vfJtNGhM = vfJtNGhM + (718 - 717)) {
            if (OB5MTrCSmz[vfJtNGhM].L94trI0CGLH6 < OB5MTrCSmz[vfJtNGhM + (749 - 748)].L94trI0CGLH6) {
                agetemp = OB5MTrCSmz[vfJtNGhM].L94trI0CGLH6;
                OB5MTrCSmz[vfJtNGhM].L94trI0CGLH6 = OB5MTrCSmz[vfJtNGhM + (903 - 902)].L94trI0CGLH6;
                OB5MTrCSmz[vfJtNGhM + (328 - 327)].L94trI0CGLH6 = agetemp;
                strcpy (tDZnW6MBzhNO, OB5MTrCSmz[vfJtNGhM].LpQUCia0s);
                strcpy (OB5MTrCSmz[vfJtNGhM].LpQUCia0s, OB5MTrCSmz[vfJtNGhM + 1].LpQUCia0s);
                strcpy (OB5MTrCSmz[vfJtNGhM + 1].LpQUCia0s, tDZnW6MBzhNO);
            }
        }
    }
    for (GdqeIybR = (271 - 271); GdqeIybR < b4IdnsSrmgU; GdqeIybR = GdqeIybR +1)
        printf ("%s\n", OB5MTrCSmz[GdqeIybR].LpQUCia0s);
    for (GdqeIybR = (881 - 881); GdqeIybR < uygrRDLVBjJ; GdqeIybR = GdqeIybR +1)
        printf ("%s\n", O6OJ98EecT[GdqeIybR].LpQUCia0s);
    return 0;
}

