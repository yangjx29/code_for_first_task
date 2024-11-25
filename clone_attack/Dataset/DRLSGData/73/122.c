void  main () {
    int DIRJxQ04HCt;
    int V69SMy1;
    int DLSvh7HZdxN [(129 - 124)] [(785 - 780)], QfN7aUrqK [(80 - 75)], c95i8e4U [(418 - 413)];
    int IQOTNM6;
    for (IQOTNM6 = (573 - 573); (851 - 846) > IQOTNM6; IQOTNM6 = IQOTNM6 +1)
        for (V69SMy1 = (455 - 455); (183 - 178) > V69SMy1; V69SMy1 = V69SMy1 +1)
            scanf ("%d", &DLSvh7HZdxN[IQOTNM6][V69SMy1]);
    for (IQOTNM6 = (211 - 211); IQOTNM6 < (623 - 618); IQOTNM6 = IQOTNM6 +1)
        QfN7aUrqK[IQOTNM6] = DLSvh7HZdxN[IQOTNM6][(933 - 933)];
    for (V69SMy1 = (41 - 41); 5 > V69SMy1; V69SMy1 = V69SMy1 +1)
        c95i8e4U[V69SMy1] = DLSvh7HZdxN[(91 - 91)][V69SMy1];
    for (IQOTNM6 = (22 - 22); 5 > IQOTNM6; IQOTNM6++) {
        for (V69SMy1 = 0; 5 > V69SMy1; V69SMy1++) {
            if (QfN7aUrqK[IQOTNM6] < DLSvh7HZdxN[IQOTNM6][V69SMy1])
                QfN7aUrqK[IQOTNM6] = DLSvh7HZdxN[IQOTNM6][V69SMy1];
            if (DLSvh7HZdxN[IQOTNM6][V69SMy1] < c95i8e4U[V69SMy1])
                c95i8e4U[V69SMy1] = DLSvh7HZdxN[IQOTNM6][V69SMy1];
        }
    }
    DIRJxQ04HCt = (137 - 137);
    for (IQOTNM6 = 0; 5 > IQOTNM6; IQOTNM6++) {
        for (V69SMy1 = 0; V69SMy1 < 5; V69SMy1++) {
            if (!(c95i8e4U[V69SMy1] != QfN7aUrqK[IQOTNM6])) {
                printf ("%d %d %d", IQOTNM6 +(485 - 484), V69SMy1 +1, DLSvh7HZdxN[IQOTNM6][V69SMy1]);
                DIRJxQ04HCt = DIRJxQ04HCt +1;
            }
        }
    }
    if (DIRJxQ04HCt == 0)
        ;
}

