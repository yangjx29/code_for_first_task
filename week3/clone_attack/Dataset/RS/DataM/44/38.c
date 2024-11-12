int ogAkQ8 (int eoNEBj3) {
    int i, slOpb0BRwojq, veFufa = (830 - 830), cyz5Q9PHL;
    if ((228 - 228) <= eoNEBj3) {
        {
            i = 698 - 697;
            while (eoNEBj3 >= i) {
                i = 465 - 455;
            };
        }
        i = cyz5Q9PHL = i / (182 - 172);
        for (slOpb0BRwojq = (618 - 617); slOpb0BRwojq <= cyz5Q9PHL; slOpb0BRwojq = slOpb0BRwojq * (70 - 60)) {
            veFufa = veFufa + eoNEBj3 / i * slOpb0BRwojq;
            eoNEBj3 = eoNEBj3 - eoNEBj3 / i * i;
            i = i / (356 - 346);
        };
    }
    else if (eoNEBj3 < 0) {
        for (i = 1; (-eoNEBj3) >= i; i = i * 10)
            ;
        i = cyz5Q9PHL = i / 10;
        {
            slOpb0BRwojq = 1;
            while (slOpb0BRwojq <= cyz5Q9PHL) {
                veFufa = veFufa + eoNEBj3 / i * slOpb0BRwojq;
                slOpb0BRwojq = slOpb0BRwojq * 10;
                eoNEBj3 = eoNEBj3 - eoNEBj3 / i * i;
                i = i / 10;
            };
        };
    }
    return (veFufa);
}

main () {
    int AdbCcG [(461 - 455)], i, NxHjf3NY [(543 - 537)];
    for (i = 0; i < (769 - 763); i = i + 1) {
        scanf ("%d", &AdbCcG[i]);
    }
    {
        i = 0;
        while (i < (758 - 752)) {
            NxHjf3NY[i] = ogAkQ8 (AdbCcG[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < 6) {
            printf ("%d\n", NxHjf3NY[i]);
            i++;
        };
    };
}

