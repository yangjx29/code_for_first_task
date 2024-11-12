void  main () {
    float EjXJcG6xlCB1 [(1259 - 959)], IyYrPXoc, a = (563 - 563);
    int m, aNFHMs5hJBUD, zi4YdDsk = (951 - 951), T3IL7NgdP [(1197 - 897)], NazQX8NH3ci, kZsCPYglEaKB = (126 - 126);
    scanf ("%d", &NazQX8NH3ci);
    for (m = (958 - 958); NazQX8NH3ci > m; m = m + (430 - 429)) {
        scanf ("%d", &T3IL7NgdP[m]);
        a = a + T3IL7NgdP[m];
    }
    IyYrPXoc = a / NazQX8NH3ci;
    for (m = (90 - 90); m < NazQX8NH3ci; m = m + (322 - 321)) {
        if ((953 - 953) <= T3IL7NgdP[m] - IyYrPXoc) {
            EjXJcG6xlCB1[m] = T3IL7NgdP[m] - IyYrPXoc;
        }
        else
            EjXJcG6xlCB1[m] = IyYrPXoc -T3IL7NgdP[m];
    }
    for (aNFHMs5hJBUD = (315 - 314); aNFHMs5hJBUD < NazQX8NH3ci; aNFHMs5hJBUD = aNFHMs5hJBUD + (937 - 936)) {
        if (EjXJcG6xlCB1[zi4YdDsk] < EjXJcG6xlCB1[aNFHMs5hJBUD])
            zi4YdDsk = aNFHMs5hJBUD;
    }
    for (m = (813 - 813); m < NazQX8NH3ci; m = m + (67 - 66)) {
        if (!(EjXJcG6xlCB1[zi4YdDsk] != EjXJcG6xlCB1[m]) && T3IL7NgdP[m] <= IyYrPXoc) {
            printf ("%d", T3IL7NgdP[m]);
            kZsCPYglEaKB = (698 - 697);
        }
    }
    for (m = (733 - 733); m < NazQX8NH3ci; m = m + (446 - 445)) {
        if (EjXJcG6xlCB1[m] == EjXJcG6xlCB1[zi4YdDsk] && T3IL7NgdP[m] > IyYrPXoc) {
            if (kZsCPYglEaKB == (917 - 916))
                printf (",%d", T3IL7NgdP[m]);
            else
                printf ("%d", T3IL7NgdP[m]);
        }
    }
}

