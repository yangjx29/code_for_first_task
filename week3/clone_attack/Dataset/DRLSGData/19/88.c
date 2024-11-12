int main () {
    char D70QDSMGIC [50] [(1080 - 980)];
    int rRjFah3Vog, j, aRdoc1Wh4E9 = 0;
    for (; cin >> D70QDSMGIC[aRdoc1Wh4E9++];)
        ;
    aRdoc1Wh4E9 = aRdoc1Wh4E9 - (766 - 765);
    for (rRjFah3Vog = 0; rRjFah3Vog < aRdoc1Wh4E9 - (793 - 791); rRjFah3Vog = rRjFah3Vog + 1) {
        if (strcmp (D70QDSMGIC[rRjFah3Vog], D70QDSMGIC[aRdoc1Wh4E9 - 2]) == 0) {
            for (j = 0; j <= strlen (D70QDSMGIC[aRdoc1Wh4E9 - 1]); j++)
                D70QDSMGIC[rRjFah3Vog][j] = D70QDSMGIC[aRdoc1Wh4E9 - 1][j];
        }
    }
    for (rRjFah3Vog = 0; rRjFah3Vog < aRdoc1Wh4E9 - 3; rRjFah3Vog++)
        cout << D70QDSMGIC[rRjFah3Vog] << ' ';
    cout << D70QDSMGIC[aRdoc1Wh4E9 - 3];
    return 0;
}

