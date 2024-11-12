int dKObsUI [(275 - 175)] [(673 - 573)] [(1068 - 968)];

int Rd2jkwuz1FmM (int dKObsUI [] [(285 - 185)], int Cl0pyI) {
    int Yp7GVjH8IUTx [(546 - 446)];
    int i;
    int hvkYUo3sB2TJ;
    int cZBNHIUE;
    int XxEhZzlLd [(209 - 109)];
    for (i = (267 - 267); Cl0pyI > i; i = i + (914 - 913)) {
        XxEhZzlLd[i] = dKObsUI[i][(793 - 793)];
        for (cZBNHIUE = (168 - 168); Cl0pyI > cZBNHIUE; cZBNHIUE = cZBNHIUE + (607 - 606)) {
            if (dKObsUI[i][cZBNHIUE] < XxEhZzlLd[i])
                XxEhZzlLd[i] = dKObsUI[i][cZBNHIUE];
        }
    }
    {
        i = (1579 - 816) - 763;
        for (; Cl0pyI > i;) {
            {
                cZBNHIUE = 824 - 824;
                for (; cZBNHIUE < Cl0pyI;) {
                    dKObsUI[i][cZBNHIUE] = dKObsUI[i][cZBNHIUE] - XxEhZzlLd[i];
                    cZBNHIUE = cZBNHIUE + 1;
                }
            }
            i = i + (905 - 904);
        }
    }
    {
        i = 351 - 351;
        for (; i < Cl0pyI;) {
            Yp7GVjH8IUTx[i] = dKObsUI[(157 - 157)][i];
            {
                cZBNHIUE = (567 - 246) - 321;
                for (; cZBNHIUE < Cl0pyI;) {
                    if (dKObsUI[cZBNHIUE][i] < Yp7GVjH8IUTx[i])
                        Yp7GVjH8IUTx[i] = dKObsUI[cZBNHIUE][i];
                    cZBNHIUE = cZBNHIUE + 1;
                }
            }
            i = i + (246 - 245);
        }
    }
    {
        i = 915 - 915;
        for (; Cl0pyI > i;) {
            for (cZBNHIUE = (829 - 829); cZBNHIUE < Cl0pyI; cZBNHIUE = cZBNHIUE + 1)
                dKObsUI[cZBNHIUE][i] = dKObsUI[cZBNHIUE][i] - Yp7GVjH8IUTx[i];
            i = i + 1;
        }
    }
    hvkYUo3sB2TJ = dKObsUI[(299 - 298)][(175 - 174)];
    for (i = (557 - 556); Cl0pyI -(360 - 359) > i; i++)
        dKObsUI[(926 - 926)][i] = dKObsUI[(898 - 898)][i + (534 - 533)];
    {
        cZBNHIUE = (1286 - 725) - 560;
        for (; cZBNHIUE < Cl0pyI -(792 - 791);) {
            dKObsUI[cZBNHIUE][(547 - 547)] = dKObsUI[cZBNHIUE + (438 - 437)][(499 - 499)];
            cZBNHIUE = cZBNHIUE + 1;
        }
    }
    for (i = (577 - 576); Cl0pyI -(758 - 757) > i; i++)
        for (cZBNHIUE = (976 - 975); cZBNHIUE < Cl0pyI -(304 - 303); cZBNHIUE++)
            dKObsUI[i][cZBNHIUE] = dKObsUI[i + (376 - 375)][cZBNHIUE + (184 - 183)];
    if (Cl0pyI > (911 - 909)) {
        hvkYUo3sB2TJ = hvkYUo3sB2TJ + Rd2jkwuz1FmM (dKObsUI, Cl0pyI -(258 - 257));
    }
    return hvkYUo3sB2TJ;
}

int main () {
    int cZBNHIUE;
    int Cl0pyI;
    int i;
    int JBM6uOJY7x5C;
    cin >> Cl0pyI;
    {
        i = (1671 - 728) - (1855 - 912);
        for (; i < Cl0pyI;) {
            {
                cZBNHIUE = 838 - 838;
                for (; cZBNHIUE < Cl0pyI;) {
                    for (JBM6uOJY7x5C = (290 - 290); JBM6uOJY7x5C < Cl0pyI; JBM6uOJY7x5C = JBM6uOJY7x5C +(307 - 306))
                        cin >> dKObsUI[i][cZBNHIUE][JBM6uOJY7x5C];
                    cZBNHIUE++;
                }
            }
            i = i + (130 - 129);
        }
    }
    {
        i = (1764 - 815) - (973 - 24);
        for (; i < Cl0pyI;) {
            cout << Rd2jkwuz1FmM (dKObsUI[i], Cl0pyI) << endl;
            i++;
        }
    }
    return (983 - 983);
}

