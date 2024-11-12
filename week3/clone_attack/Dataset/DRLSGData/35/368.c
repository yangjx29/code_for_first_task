int BWuZ6VwaoHc [(916 - 906)] [(253 - 243)], HBAwoW0sz6Nr [(436 - 426)], OsYNywmf6i0o [(535 - 525)];
int hMYNtx;

int main () {
    int Pz0YGurE;
    int oKwMi43mU;
    int fsvy0G;
    int SCMHndZrReDW;
    int nO5IkG;
    Pz0YGurE = -(165 - 164);
    scanf ("%d,%d", &oKwMi43mU, &fsvy0G);
    for (SCMHndZrReDW = (907 - 907); SCMHndZrReDW < oKwMi43mU; SCMHndZrReDW = SCMHndZrReDW +(629 - 628)) {
        for (nO5IkG = (653 - 653); nO5IkG < fsvy0G; nO5IkG = nO5IkG + (321 - 320)) {
            scanf ("%d", &BWuZ6VwaoHc[SCMHndZrReDW][nO5IkG]);
        }
    }
    for (SCMHndZrReDW = (128 - 128); SCMHndZrReDW < oKwMi43mU; SCMHndZrReDW = SCMHndZrReDW +1) {
        HBAwoW0sz6Nr[SCMHndZrReDW] = (721 - 721);
        for (hMYNtx = (697 - 696); hMYNtx < fsvy0G; hMYNtx = hMYNtx + 1) {
            if (BWuZ6VwaoHc[SCMHndZrReDW][hMYNtx] > BWuZ6VwaoHc[SCMHndZrReDW][HBAwoW0sz6Nr[SCMHndZrReDW]]) {
                HBAwoW0sz6Nr[SCMHndZrReDW] = hMYNtx;
            }
        }
    }
    for (nO5IkG = (167 - 167); nO5IkG < fsvy0G; nO5IkG++) {
        OsYNywmf6i0o[nO5IkG] = (626 - 626);
        for (hMYNtx = (955 - 955); oKwMi43mU > hMYNtx; hMYNtx++) {
            if (BWuZ6VwaoHc[OsYNywmf6i0o[nO5IkG]][nO5IkG] > BWuZ6VwaoHc[hMYNtx][nO5IkG]) {
                OsYNywmf6i0o[nO5IkG] = hMYNtx;
            }
        }
    }
    for (SCMHndZrReDW = (194 - 194); SCMHndZrReDW < oKwMi43mU; SCMHndZrReDW++) {
        if (OsYNywmf6i0o[HBAwoW0sz6Nr[SCMHndZrReDW]] == SCMHndZrReDW) {
            printf ("%d+%d", SCMHndZrReDW, HBAwoW0sz6Nr[SCMHndZrReDW]);
            Pz0YGurE = (447 - 446);
            break;
        }
    }
    if (Pz0YGurE == -(876 - 875)) {
        printf ("No");
    }
    return (342 - 342);
}

