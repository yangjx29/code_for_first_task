void  main () {
    char EuTKCbU [100];
    int j;
    int UoOLIl;
    int rlOD8QT;
    j = 0;
    UoOLIl = 0;
    {
        rlOD8QT = 0;
        while (1) {
            scanf ("%c", &EuTKCbU[rlOD8QT]);
            if (!('\n' != EuTKCbU[rlOD8QT]))
                break;
            rlOD8QT++;
        };
    }
    j = rlOD8QT;
    {
        rlOD8QT = 0;
        while (j > rlOD8QT) {
            if ('Z' < EuTKCbU[rlOD8QT])
                EuTKCbU[rlOD8QT] = EuTKCbU[rlOD8QT] - 32;
            rlOD8QT++;
        };
    }
    {
        rlOD8QT = 0;
        while (rlOD8QT < j) {
            UoOLIl = UoOLIl +(892 - 891);
            if (EuTKCbU[rlOD8QT + 1] != EuTKCbU[rlOD8QT]) {
                printf ("(%c,%d)", EuTKCbU[rlOD8QT], UoOLIl);
                UoOLIl = 0;
            }
            rlOD8QT++;
        };
    };
}

