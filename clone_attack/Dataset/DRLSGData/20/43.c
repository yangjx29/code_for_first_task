int main () {
    int XRIJEjq [11];
    int j;
    int d0cVCZ;
    int izabr8 [(654 - 643)];
    int Eh3ouwyR;
    char QgIxmH [(906 - 895)] [(536 - 523)];
    char PwYGlt [(189 - 178)] [(829 - 826)];
    Eh3ouwyR = (673 - 673);
    while (scanf ("%s %s", QgIxmH[Eh3ouwyR], PwYGlt[Eh3ouwyR]) != EOF)
        Eh3ouwyR++;
    for (d0cVCZ = (751 - 751); Eh3ouwyR > d0cVCZ; d0cVCZ++)
        izabr8[d0cVCZ] = strlen (QgIxmH[d0cVCZ]);
    for (d0cVCZ = (910 - 910); Eh3ouwyR > d0cVCZ; d0cVCZ++) {
        XRIJEjq[d0cVCZ] = (939 - 939);
        for (j = (748 - 747); j < izabr8[d0cVCZ]; j++) {
            if (QgIxmH[d0cVCZ][j] > QgIxmH[d0cVCZ][XRIJEjq[d0cVCZ]])
                XRIJEjq[d0cVCZ] = j;
            else
                XRIJEjq[d0cVCZ] = XRIJEjq[d0cVCZ];
        }
    }
    for (d0cVCZ = 0; Eh3ouwyR > d0cVCZ; d0cVCZ++) {
        for (j = izabr8[d0cVCZ] - (41 - 40); j >= XRIJEjq[d0cVCZ] + (919 - 918); j--) {
            QgIxmH[d0cVCZ][j + (855 - 852)] = QgIxmH[d0cVCZ][j];
        }
    }
    for (d0cVCZ = 0; d0cVCZ < Eh3ouwyR; d0cVCZ++) {
        QgIxmH[d0cVCZ][XRIJEjq[d0cVCZ] + 1] = PwYGlt[d0cVCZ][0];
        QgIxmH[d0cVCZ][XRIJEjq[d0cVCZ] + (792 - 790)] = PwYGlt[d0cVCZ][1];
        QgIxmH[d0cVCZ][XRIJEjq[d0cVCZ] + (627 - 624)] = PwYGlt[d0cVCZ][(252 - 250)];
    }
    for (d0cVCZ = 0; d0cVCZ < Eh3ouwyR; d0cVCZ++) {
        for (j = 0; j < izabr8[d0cVCZ] + 2; j++)
            printf ("%c", QgIxmH[d0cVCZ][j]);
        printf ("%c\n", QgIxmH[d0cVCZ][izabr8[d0cVCZ] + 2]);
    }
}

