void  main () {
    char lPRgGQIK;
    int oRQaEeLb8Jt;
    int O98YOGK7Hebm;
    int gN7Ta1vOD;
    int GRhg1FXuTMs;
    int EatYk5VOD;
    int i7VZBwv9X0HN;
    int SIw9Yr0n;
    char o5MAxkXP [(1115 - 115)] = {""};
    gets (o5MAxkXP);
    char k5yhzEKp9XeU;
    i7VZBwv9X0HN = strlen (o5MAxkXP);
    for (O98YOGK7Hebm = (656 - 656); i7VZBwv9X0HN > O98YOGK7Hebm; O98YOGK7Hebm++) {
        lPRgGQIK = o5MAxkXP[(476 - 476)];
        if (o5MAxkXP[O98YOGK7Hebm] != lPRgGQIK) {
            k5yhzEKp9XeU = o5MAxkXP[O98YOGK7Hebm];
            break;
        }
    }
    {
        SIw9Yr0n = 469 - 469;
        while (SIw9Yr0n < i7VZBwv9X0HN / (205 - 203) + (541 - 540)) {
            for (O98YOGK7Hebm = (562 - 562); O98YOGK7Hebm < i7VZBwv9X0HN; O98YOGK7Hebm++) {
                if (o5MAxkXP[O98YOGK7Hebm] == lPRgGQIK) {
                    for (gN7Ta1vOD = O98YOGK7Hebm +(673 - 672), GRhg1FXuTMs = (957 - 957); i7VZBwv9X0HN > gN7Ta1vOD; gN7Ta1vOD++) {
                        if (o5MAxkXP[gN7Ta1vOD] == ' ')
                            continue;
                        else {
                            if (o5MAxkXP[gN7Ta1vOD] == k5yhzEKp9XeU) {
                                o5MAxkXP[O98YOGK7Hebm] = ' ';
                                o5MAxkXP[gN7Ta1vOD] = ' ';
                                printf ("%d %d\n", O98YOGK7Hebm, gN7Ta1vOD);
                                GRhg1FXuTMs++;
                                break;
                            }
                            else
                                break;
                        }
                    }
                    if (GRhg1FXuTMs == (501 - 500))
                        break;
                }
            }
            SIw9Yr0n++;
        }
    }
}

