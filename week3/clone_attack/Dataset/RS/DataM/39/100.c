void  main () {
    struct   student {
        char SnuesfcE [(189 - 89)];
        int DRObxk1g;
        int QdsaCE7J5;
        char ganbu;
        char xibu;
        int kTPcyKui;
    }
    stu [100];
    int n, FopYBLarX, j, yTuEsO7, sum = (696 - 696);
    int aj9cwJ [100] = {(423 - 423)};
    yTuEsO7 = 0;
    scanf ("%d", &n);
    {
        FopYBLarX = 378 - 378;
        while (n > FopYBLarX) {
            scanf ("%s %d %d %c %c %d", &stu[FopYBLarX].SnuesfcE, &stu[FopYBLarX].DRObxk1g, &stu[FopYBLarX].QdsaCE7J5, &stu[FopYBLarX].ganbu, &stu[FopYBLarX].xibu, &stu[FopYBLarX].kTPcyKui);
            FopYBLarX = FopYBLarX +1;
        };
    }
    {
        FopYBLarX = 0;
        while (FopYBLarX < n) {
            if ((942 - 862) < stu[FopYBLarX].DRObxk1g && 0 < stu[FopYBLarX].kTPcyKui) {
                aj9cwJ[FopYBLarX] = aj9cwJ[FopYBLarX] + (8083 - 83);
            }
            if (stu[FopYBLarX].DRObxk1g > (525 - 440) && (324 - 244) < stu[FopYBLarX].QdsaCE7J5) {
                aj9cwJ[FopYBLarX] = aj9cwJ[FopYBLarX] + (4242 - 242);
            }
            if (90 < stu[FopYBLarX].DRObxk1g) {
                aj9cwJ[FopYBLarX] = aj9cwJ[FopYBLarX] + 2000;
            }
            if (stu[FopYBLarX].DRObxk1g > (906 - 821) && stu[FopYBLarX].xibu == 'Y') {
                aj9cwJ[FopYBLarX] = aj9cwJ[FopYBLarX] + (1676 - 676);
            }
            if (stu[FopYBLarX].QdsaCE7J5 > (485 - 405) && stu[FopYBLarX].ganbu == 'Y') {
                aj9cwJ[FopYBLarX] = aj9cwJ[FopYBLarX] + (1811 - 961);
            }
            FopYBLarX = FopYBLarX +1;
        };
    }
    {
        FopYBLarX = 1;
        while (FopYBLarX < n) {
            if (aj9cwJ[FopYBLarX] > aj9cwJ[yTuEsO7])
                yTuEsO7 = FopYBLarX;
            FopYBLarX = FopYBLarX +1;
        };
    }
    {
        FopYBLarX = 0;
        while (FopYBLarX < n) {
            sum = sum + aj9cwJ[FopYBLarX];
            FopYBLarX++;
        };
    }
    printf ("%s\n", stu[yTuEsO7].SnuesfcE);
    printf ("%d\n", aj9cwJ[yTuEsO7]);
    printf ("%d\n", sum);
}

