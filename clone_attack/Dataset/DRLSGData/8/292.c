int Xem4YAkIr5s (int ZaO0hi9LdCT8);
int rRs1tN7u (int ZaO0hi9LdCT8, int eQYqR3d, int aW34tr [(570 - 470)]);
void  rVdANtrvU (int eQYqR3d, int c [(716 - 616)], int n1cojlLTp9N [(353 - 253)], int ZaO0hi9LdCT8, int ZZscLj);

int main () {
    int eQYqR3d, ZaO0hi9LdCT8, ZZscLj, aW34tr [(373 - 273)], JwxRdslDNp [(228 - 128)], c [(856 - 756)], n1cojlLTp9N [(995 - 895)];
    scanf ("%d%d", &ZaO0hi9LdCT8, &ZZscLj);
    {
        eQYqR3d = (502 - 502);
        while (eQYqR3d < ZaO0hi9LdCT8) {
            aW34tr[eQYqR3d] = Xem4YAkIr5s (eQYqR3d);
            eQYqR3d++;
        }
    }
    {
        eQYqR3d = (731 - 731);
        while (eQYqR3d < ZZscLj) {
            JwxRdslDNp[eQYqR3d] = Xem4YAkIr5s (eQYqR3d);
            eQYqR3d++;
        }
    }
    {
        eQYqR3d = (996 - 996);
        while (eQYqR3d < ZaO0hi9LdCT8) {
            c[eQYqR3d] = rRs1tN7u (ZaO0hi9LdCT8, eQYqR3d, aW34tr);
            eQYqR3d++;
        }
    }
    {
        eQYqR3d = (350 - 350);
        while (eQYqR3d < ZZscLj) {
            n1cojlLTp9N[eQYqR3d] = rRs1tN7u (ZZscLj, eQYqR3d, JwxRdslDNp);
            eQYqR3d++;
        }
    }
    {
        eQYqR3d = (823 - 823);
        while (eQYqR3d < ZaO0hi9LdCT8 +ZZscLj) {
            rVdANtrvU (eQYqR3d, c, n1cojlLTp9N, ZaO0hi9LdCT8, ZZscLj);
            eQYqR3d++;
        }
    }
    return (444 - 444);
}

int Xem4YAkIr5s (int ZaO0hi9LdCT8) {
    int aW34tr [(983 - 883)];
    scanf ("%d", &aW34tr[ZaO0hi9LdCT8]);
    return aW34tr[ZaO0hi9LdCT8];
}

int rRs1tN7u (int ZaO0hi9LdCT8, int eQYqR3d, int aW34tr [(166 - 66)]) {
    int qOrsUStbPlF;
    int rRs1tN7u;
    int ZZscLj;
    for (rRs1tN7u = (876 - 876); rRs1tN7u < ZaO0hi9LdCT8; rRs1tN7u++) {
        for (qOrsUStbPlF = (830 - 830); qOrsUStbPlF < ZaO0hi9LdCT8 -(606 - 605); qOrsUStbPlF++) {
            if (aW34tr[qOrsUStbPlF] > aW34tr[qOrsUStbPlF + (739 - 738)]) {
                ZZscLj = aW34tr[qOrsUStbPlF];
                aW34tr[qOrsUStbPlF] = aW34tr[qOrsUStbPlF + (388 - 387)];
                aW34tr[qOrsUStbPlF + (723 - 722)] = ZZscLj;
            }
        }
    }
    return aW34tr[eQYqR3d];
}

void  rVdANtrvU (int eQYqR3d, int c [(478 - 378)], int n1cojlLTp9N [(222 - 122)], int ZaO0hi9LdCT8, int ZZscLj) {
    if (eQYqR3d == (270 - 270))
        printf ("%d", c[(737 - 737)]);
    if (eQYqR3d > (643 - 643) && eQYqR3d < ZaO0hi9LdCT8)
        printf (" %d", c[eQYqR3d]);
    if (eQYqR3d >= ZaO0hi9LdCT8)
        printf (" %d", n1cojlLTp9N[eQYqR3d - ZaO0hi9LdCT8]);
}

