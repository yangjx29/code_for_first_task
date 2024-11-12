void  main () {
    int yGo0Ug;
    int A18HTUNA;
    int N;
    int i;
    int m;
    int PICG0ouBi [100];
    yGo0Ug = 0;
    A18HTUNA = 0;
    struct   student {
        char name [100];
        int num1, num2;
        char c1, c2;
        int paper;
    }
    wocMxW [100];
    scanf ("%d", &N);
    {
        i = 0;
        while (i < N) {
            scanf ("%s %d %d %c %c %d", wocMxW[i].name, &wocMxW[i].num1, &wocMxW[i].num2, &wocMxW[i].c1, &wocMxW[i].c2, &wocMxW[i].paper);
            PICG0ouBi[i] = 0;
            if ((346 - 266) < wocMxW[i].num1 && wocMxW[i].paper > 0)
                PICG0ouBi[i] += 8000;
            if (wocMxW[i].num1 > 85 && wocMxW[i].num2 > 80)
                PICG0ouBi[i] = PICG0ouBi[i] + 4000;
            if (90 < wocMxW[i].num1)
                PICG0ouBi[i] = PICG0ouBi[i] + 2000;
            if (wocMxW[i].num1 > 85 && wocMxW[i].c2 == 'Y')
                PICG0ouBi[i] = PICG0ouBi[i] + 1000;
            if (wocMxW[i].num2 > 80 && wocMxW[i].c1 == 'Y')
                PICG0ouBi[i] = PICG0ouBi[i] + (1618 - 768);
            yGo0Ug = yGo0Ug + PICG0ouBi[i];
            if (PICG0ouBi[i] > A18HTUNA) {
                A18HTUNA = PICG0ouBi[i];
                m = i;
            }
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d", wocMxW[m].name, PICG0ouBi[m], yGo0Ug);
}

