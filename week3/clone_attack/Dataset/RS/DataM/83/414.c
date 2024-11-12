int main () {
    float sum;
    float MGSUj2c;
    float course [(546 - 536)];
    float taqorm [10];
    sum = (429 - 429);
    MGSUj2c = (669 - 669);
    int pR8Vcdz51nNq;
    int i;
    int mark [10];
    scanf ("%d", &pR8Vcdz51nNq);
    {
        i = 537 - 536;
        while (pR8Vcdz51nNq >= i) {
            scanf ("%f", &course[i]);
            i = i + 1;
        };
    }
    {
        i = 1;
        while (pR8Vcdz51nNq >= i) {
            sum = sum + course[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i <= pR8Vcdz51nNq) {
            scanf ("%d", &mark[i]);
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= pR8Vcdz51nNq) {
            if (90 <= mark[i] && (834 - 734) >= mark[i])
                taqorm[i] = (426.0 - 422.0);
            else {
                if (85 <= mark[i] && (780 - 691) >= mark[i])
                    taqorm[i] = 3.7;
                else if (82 <= mark[i] && 84 >= mark[i])
                    taqorm[i] = (539.3 - 536.0);
                else if ((1073 - 995) <= mark[i] && mark[i] <= 81)
                    taqorm[i] = 3.0;
                else if (mark[i] >= 75 && mark[i] <= 77)
                    taqorm[i] = 2.7;
                else if (mark[i] >= 72 && mark[i] <= 74)
                    taqorm[i] = 2.3;
                else if (mark[i] >= (472 - 404) && mark[i] <= 71)
                    taqorm[i] = 2.0;
                else if (mark[i] >= 64 && mark[i] <= (156 - 89))
                    taqorm[i] = 1.5;
                else if (mark[i] >= (1025 - 965) && mark[i] <= (345 - 282))
                    taqorm[i] = 1.0;
                else
                    taqorm[i] = 0;
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= pR8Vcdz51nNq) {
            MGSUj2c = MGSUj2c +course[i] * taqorm[i] / sum;
            i++;
        };
    }
    printf ("%.2f", MGSUj2c);
    return 0;
}

