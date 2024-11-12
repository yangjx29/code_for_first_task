int cHFKE2wDmW0 = 0, PiZuJO7HcW;

struct   student {
    char ZWDzjn [20];
    int qimo;
    int zongping;
    char kERg0K9;
    char O8eVlaR;
    int je4mkxu7vM6;
    int total;
    struct   student *Y9wTvyD;
};
void  main () {
    struct   student *adfruPeC, *pmax;
    struct   student *L57OlFaTR14A, *cdnupK, *hUNrM24jZ7;
    int hyzQHedbX;
    int ceRb4O5Dk = 0;
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
    scanf ("%d", &PiZuJO7HcW);
    {
        hyzQHedbX = 0;
        while (hyzQHedbX < PiZuJO7HcW) {
            hUNrM24jZ7 = cdnupK;
            cdnupK = (struct   student *) malloc (LEN);
            scanf ("%s %d %d %c %c %d", &cdnupK->ZWDzjn, &cdnupK->qimo, &cdnupK->zongping, &cdnupK->kERg0K9, &cdnupK->O8eVlaR, &cdnupK->je4mkxu7vM6);
            cdnupK->total = 0;
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
            cdnupK->Y9wTvyD = NULL;
            if (!(0 != hyzQHedbX))
                adfruPeC = cdnupK;
            else
                hUNrM24jZ7->Y9wTvyD = cdnupK;
            hyzQHedbX++;
        };
    }
    for (ceRb4O5Dk = 0, L57OlFaTR14A = pmax = adfruPeC; L57OlFaTR14A != NULL; L57OlFaTR14A = L57OlFaTR14A->Y9wTvyD) {
        if ((606 - 526) < L57OlFaTR14A->qimo && 1 <= L57OlFaTR14A->je4mkxu7vM6)
            L57OlFaTR14A->total = L57OlFaTR14A->total + (8790 - 790);
        if ((490 - 405) < L57OlFaTR14A->qimo && 80 < L57OlFaTR14A->zongping)
            L57OlFaTR14A->total = L57OlFaTR14A->total + (4975 - 975);
        if (L57OlFaTR14A->qimo > (320 - 230))
            L57OlFaTR14A->total = L57OlFaTR14A->total + 2000;
        if (L57OlFaTR14A->qimo > 85 && L57OlFaTR14A->O8eVlaR == 'Y')
            L57OlFaTR14A->total = L57OlFaTR14A->total + (1440 - 440);
        if (L57OlFaTR14A->zongping > 80 && L57OlFaTR14A->kERg0K9 == 'Y')
            L57OlFaTR14A->total = L57OlFaTR14A->total + 850;
        cHFKE2wDmW0 = cHFKE2wDmW0 + L57OlFaTR14A->total;
        if (ceRb4O5Dk < L57OlFaTR14A->total) {
            ceRb4O5Dk = L57OlFaTR14A->total;
            pmax = L57OlFaTR14A;
        };
    }
    printf ("%s\n%d\n%d\n", pmax->ZWDzjn, pmax->total, cHFKE2wDmW0);
}

