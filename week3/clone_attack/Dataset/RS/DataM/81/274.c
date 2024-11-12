int ZLlhIs86g (int wjUNVM, int AUm8Clc64w) {
    if ((859 - 859) <= AUm8Clc64w &&(807 - 803) >= AUm8Clc64w &&(548 - 548) <= wjUNVM && (506 - 502) >= wjUNVM)
        return ((739 - 738));
    else
        return ((603 - 603));
}

void  main () {
    int YUBpIjq [(743 - 738)] [(892 - 887)];
    int AUm8Clc64w, wjUNVM, i, bjQaePmxYCB, ZBxIo3G4;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (5 > i) {
            for (bjQaePmxYCB = 0; 5 > bjQaePmxYCB; bjQaePmxYCB = bjQaePmxYCB + 1)
                scanf ("%d", &YUBpIjq[i][bjQaePmxYCB]);
            i = i + 1;
        };
    }
    scanf ("%d %d", &AUm8Clc64w, &wjUNVM);
    if (!(0 != ZLlhIs86g (wjUNVM, AUm8Clc64w)))
        printf ("error");
    else if (!(1 != ZLlhIs86g (wjUNVM, AUm8Clc64w))) {
        for (i = 0; i < 5; i = i + 1) {
            ZBxIo3G4 = YUBpIjq[wjUNVM][i];
            YUBpIjq[wjUNVM][i] = YUBpIjq[AUm8Clc64w][i];
            YUBpIjq[AUm8Clc64w][i] = ZBxIo3G4;
        }
        for (i = 0; i < 5; i = i + 1)
            for (bjQaePmxYCB = 0; bjQaePmxYCB < 5; bjQaePmxYCB++) {
                printf ("%d", YUBpIjq[i][bjQaePmxYCB]);
                if (bjQaePmxYCB < 4)
                    printf (" ");
                if (i < 4 && bjQaePmxYCB == 4)
                    printf ("\n");
            };
    };
}

