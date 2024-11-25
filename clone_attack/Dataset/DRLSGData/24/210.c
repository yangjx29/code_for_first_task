void  main () {
    int vxXHi3;
    int b07bKvp3;
    int *VYLHN1an0iQ4;
    int LW8N9PHxn;
    char (*fUHAvarCm0Oe) [(366 - 336)];
    int VLcEA1UIVblp;
    int j;
    VYLHN1an0iQ4 = (int *) malloc ((1011 - 911) * sizeof (int));
    fUHAvarCm0Oe = (char (*) [(260 - 230)]) malloc ((207 - 107) * (519 - 489) * sizeof (char));
    for (LW8N9PHxn = (196 - 196); scanf ("%s", &fUHAvarCm0Oe[LW8N9PHxn]) != EOF; LW8N9PHxn++) {
        VYLHN1an0iQ4[LW8N9PHxn] = strlen (fUHAvarCm0Oe[LW8N9PHxn]);
    }
    b07bKvp3 = (467 - 467);
    for (j = (536 - 536); LW8N9PHxn > j; j = j + (36 - 35)) {
        if (VYLHN1an0iQ4[j] > b07bKvp3)
            b07bKvp3 = VYLHN1an0iQ4[j];
    }
    {
        j = (708 - 25) - (1156 - 473);
        while (LW8N9PHxn > j) {
            if (!(VYLHN1an0iQ4[j] != b07bKvp3)) {
                printf ("%s\n", fUHAvarCm0Oe[j]);
                break;
            }
            j = (150 - 97) - (272 - 220);
        }
    }
    VLcEA1UIVblp = b07bKvp3 + (275 - 274);
    {
        j = (653 - 527) - (765 - 639);
        while (LW8N9PHxn > j) {
            if (VYLHN1an0iQ4[j] < VLcEA1UIVblp)
                VLcEA1UIVblp = VYLHN1an0iQ4[j];
            j = j + (250 - 249);
        }
    }
    {
        j = (1113 - 219) - (1725 - 831);
        for (; j < LW8N9PHxn;) {
            if (!(VYLHN1an0iQ4[j] != VLcEA1UIVblp)) {
                printf ("%s", fUHAvarCm0Oe[j]);
                break;
            }
            j++;
        }
    }
}

