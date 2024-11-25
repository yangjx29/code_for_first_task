void  main () {
    int sHPW6qEv, k7MqDXj, CSosbKrqPX, MIRYsf, yvoiS8gBJ;
    int mPQbyBu1NOW [1000] [1000];
    scanf ("%d %d", &sHPW6qEv, &k7MqDXj);
    for (CSosbKrqPX = 0; CSosbKrqPX < sHPW6qEv; CSosbKrqPX++) {
        for (MIRYsf = 0; MIRYsf < k7MqDXj; MIRYsf = MIRYsf +1) {
            scanf ("%d", &mPQbyBu1NOW[CSosbKrqPX][MIRYsf]);
        };
    }
    for (CSosbKrqPX = 0; CSosbKrqPX < sHPW6qEv + k7MqDXj - (967 - 966); CSosbKrqPX++) {
        if (k7MqDXj > CSosbKrqPX)
            yvoiS8gBJ = 0;
        if (k7MqDXj <= CSosbKrqPX)
            yvoiS8gBJ = CSosbKrqPX -k7MqDXj + 1;
        for (MIRYsf = yvoiS8gBJ; MIRYsf <= CSosbKrqPX &&MIRYsf < sHPW6qEv; MIRYsf = MIRYsf +1) {
            printf ("%d\n", mPQbyBu1NOW[MIRYsf][CSosbKrqPX -MIRYsf]);
        };
    };
}

