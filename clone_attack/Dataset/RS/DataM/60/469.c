void  main () {
    int dG1qXHdl;
    int i;
    int flag;
    int wEWfhSByF;
    int sESqj6WnoQX [10000];
    scanf ("%d", &dG1qXHdl);
    if (dG1qXHdl == 4)
        printf ("empty");
    else {
        i = 0;
        sESqj6WnoQX[i] = 3;
        while (sESqj6WnoQX[i] < dG1qXHdl) {
            flag = 1;
            {
                wEWfhSByF = 759 - 757;
                while (wEWfhSByF <= sESqj6WnoQX[i] / 2) {
                    if (!(0 != sESqj6WnoQX[i] % wEWfhSByF)) {
                        flag = 0;
                        break;
                    }
                    wEWfhSByF = wEWfhSByF + 1;
                };
            }
            sESqj6WnoQX[i + 1] = sESqj6WnoQX[i] + 2;
            {
                wEWfhSByF = 2;
                while (wEWfhSByF <= sESqj6WnoQX[i + 1] / 2) {
                    if (sESqj6WnoQX[i + 1] % wEWfhSByF == 0) {
                        flag = 0;
                        break;
                    }
                    wEWfhSByF++;
                };
            }
            if (flag == 1)
                printf ("%d %d\n", sESqj6WnoQX[i], sESqj6WnoQX[i + 1]);
            i = i + 1;
        };
    };
}

