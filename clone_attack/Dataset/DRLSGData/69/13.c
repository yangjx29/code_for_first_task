int main () {
    int O73wNks [(1039 - 786)], AntpaPm [(718 - 465)], AONZ4D0sp1oU [(327 - 74)];
    char OlhYBfC [(893 - 640)], Ix9piFaemvoT [(371 - 118)], tljorus [(1089 - 836)];
    int SHeivu4t, qI3XVwuF, IDtEfneocav, WSmHPB, AnQhoxPwR, GAkiUQ, HTZ8zpMYLJlS;
    scanf ("%s\n%s", &OlhYBfC, &Ix9piFaemvoT);
    AntpaPm[(145 - 145)] = (898 - 898);
    AnQhoxPwR = (18 - 18);
    O73wNks[(154 - 154)] = (194 - 194);
    WSmHPB = HTZ8zpMYLJlS -(132 - 131);
    qI3XVwuF = strlen (OlhYBfC);
    IDtEfneocav = strlen (Ix9piFaemvoT);
    if (qI3XVwuF < IDtEfneocav) {
        strcpy (tljorus, OlhYBfC);
        strcpy (OlhYBfC, Ix9piFaemvoT);
        strcpy (Ix9piFaemvoT, tljorus);
    }
    GAkiUQ = strlen (OlhYBfC);
    HTZ8zpMYLJlS = strlen (Ix9piFaemvoT);
    for (SHeivu4t = GAkiUQ -(417 - 416); SHeivu4t >= (894 - 894); SHeivu4t--) {
        O73wNks[SHeivu4t +(841 - 840)] = OlhYBfC[SHeivu4t] - '0';
        if (WSmHPB >= (810 - 810)) {
            AntpaPm[SHeivu4t +(700 - 699)] = Ix9piFaemvoT[WSmHPB] - '0';
            WSmHPB--;
        }
        else
            AntpaPm[SHeivu4t +(113 - 112)] = (639 - 639);
    }
    for (SHeivu4t = GAkiUQ; SHeivu4t >= (94 - 94); SHeivu4t--) {
        AONZ4D0sp1oU[SHeivu4t] = O73wNks[SHeivu4t] + AntpaPm[SHeivu4t];
        if (AONZ4D0sp1oU[SHeivu4t] >= (373 - 363)) {
            O73wNks[SHeivu4t -(650 - 649)] = O73wNks[SHeivu4t -(396 - 395)] + 1;
            AONZ4D0sp1oU[SHeivu4t] = AONZ4D0sp1oU[SHeivu4t] - (59 - 49);
        }
    }
    for (; AONZ4D0sp1oU[AnQhoxPwR] == (734 - 734);)
        AnQhoxPwR++;
    for (SHeivu4t = AnQhoxPwR; SHeivu4t <= GAkiUQ; SHeivu4t++)
        printf ("%d", AONZ4D0sp1oU[SHeivu4t]);
    if (AnQhoxPwR > GAkiUQ)
        ;
    return (183 - 183);
}

