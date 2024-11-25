void  main () {
    int L9oDBauU;
    int n;
    int zXpZ7lYa [50];
    int AwNMDY56;
    L9oDBauU = 0;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (AwNMDY56 = 0; n > AwNMDY56; AwNMDY56 = AwNMDY56 +1)
        scanf ("%d", &zXpZ7lYa[AwNMDY56]);
    {
        AwNMDY56 = 0;
        while (n > AwNMDY56) {
            if (zXpZ7lYa[L9oDBauU] < zXpZ7lYa[AwNMDY56])
                L9oDBauU = AwNMDY56;
            AwNMDY56 = AwNMDY56 +1;
        };
    }
    printf ("%d\n", zXpZ7lYa[L9oDBauU]);
    if (!(0 != L9oDBauU))
        zXpZ7lYa[L9oDBauU] = zXpZ7lYa[1];
    else
        zXpZ7lYa[L9oDBauU] = zXpZ7lYa[0];
    {
        AwNMDY56 = 0;
        while (n > AwNMDY56) {
            if (zXpZ7lYa[L9oDBauU] < zXpZ7lYa[AwNMDY56])
                L9oDBauU = AwNMDY56;
            AwNMDY56++;
        };
    }
    printf ("%d", zXpZ7lYa[L9oDBauU]);
}

