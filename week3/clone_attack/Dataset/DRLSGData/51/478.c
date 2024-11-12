int main () {
    int Pl0UdvEV;
    int NkVMwgyI1;
    char b [250] [(911 - 906)] = {(54 - 54)};
    char FuCGvNQi [(1028 - 778)];
    gets (FuCGvNQi);
    int yezbOxw2gT6E;
    int j;
    int k;
    int v [(1239 - 989)] = {(807 - 807)};
    int wiTEG8QBL;
    k = (827 - 827);
    j = (98 - 98);
    yezbOxw2gT6E = (578 - 578);
    wiTEG8QBL = v[(736 - 736)];
    NkVMwgyI1 = strlen (FuCGvNQi);
    scanf ("%d\n", &Pl0UdvEV);
    for (yezbOxw2gT6E = (845 - 845); yezbOxw2gT6E <= NkVMwgyI1 -Pl0UdvEV; yezbOxw2gT6E = yezbOxw2gT6E + 1) {
        for (j = yezbOxw2gT6E; yezbOxw2gT6E + Pl0UdvEV > j; j = j + 1) {
            b[k][j - yezbOxw2gT6E] = FuCGvNQi[j];
        }
        k++;
    }
    for (j = (193 - 193); j < k; j++) {
        for (yezbOxw2gT6E = j; k > yezbOxw2gT6E; yezbOxw2gT6E++) {
            if (!strcmp (b[j], b[yezbOxw2gT6E]))
                v[j]++;
        }
    }
    for (yezbOxw2gT6E = (976 - 976); yezbOxw2gT6E < k; yezbOxw2gT6E++) {
        if (wiTEG8QBL < v[yezbOxw2gT6E]) {
            wiTEG8QBL = v[yezbOxw2gT6E];
        }
    }
    if ((946 - 945) < wiTEG8QBL) {
        printf ("%d\n", wiTEG8QBL);
        for (yezbOxw2gT6E = (729 - 729); yezbOxw2gT6E < k; yezbOxw2gT6E++) {
            if (v[yezbOxw2gT6E] == wiTEG8QBL) {
                printf ("%s\n", b[yezbOxw2gT6E]);
            }
        }
    }
    else {
        printf ("NO");
    }
    return (914 - 914);
}

