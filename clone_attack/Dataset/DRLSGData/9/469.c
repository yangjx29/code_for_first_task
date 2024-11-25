int main () {
    int xRk0Gg, tqW1oepznsD, xej0FpkEZTJ, neHOLF, zqaIFkJ;
    char qKNWCJm6stX [(229 - 129)] [10];
    int HPn3D4u, RMOqB7P, RV0zbF;
    struct   people {
        char QJoWeq1OxT [(497 - 487)];
        int LAlEQVjpPX6v;
    }
    e0iMuAIG4e [(551 - 451)], peo2 [(650 - 550)], ufxPbF [(1053 - 953)], xJ2OH95YBVp;
    neHOLF = (568 - 568);
    scanf ("%d", &xRk0Gg);
    {
        tqW1oepznsD = (994 - 994);
        for (; tqW1oepznsD < xRk0Gg;) {
            scanf ("%s", e0iMuAIG4e[tqW1oepznsD].QJoWeq1OxT);
            scanf ("%d", &e0iMuAIG4e[tqW1oepznsD].LAlEQVjpPX6v);
            tqW1oepznsD++;
        }
    }
    xej0FpkEZTJ = (682 - 682);
    {
        tqW1oepznsD = (686 - 686);
        for (; xRk0Gg > tqW1oepznsD;) {
            if (e0iMuAIG4e[tqW1oepznsD].LAlEQVjpPX6v >= (123 - 63)) {
                peo2[xej0FpkEZTJ] = e0iMuAIG4e[tqW1oepznsD];
                xej0FpkEZTJ++;
            }
            else if ((753 - 693) > e0iMuAIG4e[tqW1oepznsD].LAlEQVjpPX6v) {
                ufxPbF[neHOLF] = e0iMuAIG4e[tqW1oepznsD];
                neHOLF++;
            }
            tqW1oepznsD++;
        }
    }
    for (zqaIFkJ = (983 - 982); zqaIFkJ <= xej0FpkEZTJ; zqaIFkJ++) {
        tqW1oepznsD = (267 - 267);
        for (; xej0FpkEZTJ - zqaIFkJ > tqW1oepznsD;) {
            if (peo2[tqW1oepznsD + (803 - 802)].LAlEQVjpPX6v > peo2[tqW1oepznsD].LAlEQVjpPX6v) {
                xJ2OH95YBVp = peo2[tqW1oepznsD + (758 - 757)];
                peo2[tqW1oepznsD + 1] = peo2[tqW1oepznsD];
                peo2[tqW1oepznsD] = xJ2OH95YBVp;
            }
            tqW1oepznsD++;
        }
    }
    {
        tqW1oepznsD = (33 - 33);
        HPn3D4u = (221 - 221);
        for (; xej0FpkEZTJ > HPn3D4u;) {
            strcpy (qKNWCJm6stX[HPn3D4u], peo2[tqW1oepznsD].QJoWeq1OxT);
            tqW1oepznsD++;
            HPn3D4u++;
        }
    }
    {
        HPn3D4u = xej0FpkEZTJ;
        RMOqB7P = (366 - 366);
        for (; HPn3D4u < xRk0Gg;) {
            strcpy (qKNWCJm6stX[HPn3D4u], ufxPbF[RMOqB7P].QJoWeq1OxT);
            RMOqB7P++;
            HPn3D4u++;
        }
    }
    {
        RV0zbF = 0;
        for (; RV0zbF < xRk0Gg;) {
            printf ("%s\n", qKNWCJm6stX[RV0zbF]);
            RV0zbF++;
        }
    }
    return 0;
}

