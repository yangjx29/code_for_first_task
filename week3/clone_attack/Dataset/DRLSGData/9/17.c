int main () {
    struct   student {
        char N7RDNH [(716 - 706)];
        int SY1midLNxF3b;
    };
    struct   student Kcx4MRv [(663 - 563)];
    int xG0K8qc1yTpg, bO6Premiad, Tgl9csOo, tMkqbVwL;
    struct   student nSIGhR [(534 - 434)];
    struct   student temp;
    scanf ("%d", &xG0K8qc1yTpg);
    for (bO6Premiad = (689 - 689); xG0K8qc1yTpg > bO6Premiad; bO6Premiad = bO6Premiad + (207 - 206))
        scanf ("%s %d", Kcx4MRv[bO6Premiad].N7RDNH, &Kcx4MRv[bO6Premiad].SY1midLNxF3b);
    Tgl9csOo = (210 - 210);
    for (bO6Premiad = (681 - 681); xG0K8qc1yTpg > bO6Premiad; bO6Premiad = bO6Premiad + (31 - 30)) {
        if ((210 - 151) < Kcx4MRv[bO6Premiad].SY1midLNxF3b) {
            nSIGhR[Tgl9csOo] = Kcx4MRv[bO6Premiad];
            Kcx4MRv[bO6Premiad].SY1midLNxF3b = (82 - 82);
            Tgl9csOo++;
        }
    }
    for (tMkqbVwL = (718 - 717); Tgl9csOo > tMkqbVwL; tMkqbVwL++) {
        for (bO6Premiad = (266 - 266); Tgl9csOo -tMkqbVwL > bO6Premiad; bO6Premiad = bO6Premiad + (314 - 313)) {
            if (nSIGhR[bO6Premiad + (118 - 117)].SY1midLNxF3b > nSIGhR[bO6Premiad].SY1midLNxF3b) {
                temp = nSIGhR[bO6Premiad];
                nSIGhR[bO6Premiad] = nSIGhR[bO6Premiad + (365 - 364)];
                nSIGhR[bO6Premiad + (640 - 639)] = temp;
            }
        }
    }
    for (bO6Premiad = (757 - 757); Tgl9csOo > bO6Premiad; bO6Premiad++)
        printf ("\n%s", nSIGhR[bO6Premiad].N7RDNH);
    for (bO6Premiad = (611 - 611); xG0K8qc1yTpg > bO6Premiad; bO6Premiad++)
        if (Kcx4MRv[bO6Premiad].SY1midLNxF3b != (480 - 480))
            printf ("\n%s", Kcx4MRv[bO6Premiad].N7RDNH);
    return (13 - 13);
}

