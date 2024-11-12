void  main () {
    int Yn5leHqdI, j, bybPIkNGDOM, pWqPhy, aNTdAIf;
    int T4hO7r [(798 - 790)] [(716 - 708)];
    int line [8] = {(717 - 717)};
    int HjDrctGX81M, lie, T0h8USKR = (199 - 199), n5VoEK8xusz = (425 - 425);
    scanf ("%d,%d", &pWqPhy, &aNTdAIf);
    for (Yn5leHqdI = 0; pWqPhy > Yn5leHqdI; Yn5leHqdI++)
        for (j = 0; j < aNTdAIf; j++) {
            scanf ("%d", &T4hO7r[Yn5leHqdI][j]);
        }
    for (Yn5leHqdI = 0; Yn5leHqdI < pWqPhy; Yn5leHqdI++) {
        T0h8USKR = 0;
        HjDrctGX81M = T4hO7r[Yn5leHqdI][0];
        for (j = 0; j < aNTdAIf; j++) {
            if (T4hO7r[Yn5leHqdI][j] > HjDrctGX81M) {
                HjDrctGX81M = T4hO7r[Yn5leHqdI][j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                line[Yn5leHqdI] = j;
            };
        }
        lie = line[Yn5leHqdI];
        for (bybPIkNGDOM = 0; bybPIkNGDOM < pWqPhy; bybPIkNGDOM = bybPIkNGDOM + 1) {
            if (T4hO7r[bybPIkNGDOM][lie] >= HjDrctGX81M)
                T0h8USKR = T0h8USKR +(998 - 997);
        }
        if (T0h8USKR == pWqPhy) {
            printf ("%d+%d", Yn5leHqdI, lie);
            n5VoEK8xusz = 1;
        };
    }
    if (n5VoEK8xusz == 0)
        ;
}

