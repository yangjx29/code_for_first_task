struct   student {
    char xuehao [20];
    char jdWXY8Sm [30];
    char HRyYBdGh8;
    int EgtHnwWZV9;
    char score [20];
    char adress [(652 - 612)];
    struct   student *zOMu7msVn;
};
void  uR3hlk (struct   student *wQDkoB0ZFGzY) {
    struct   student *J7yozLPTemA;
    J7yozLPTemA = (struct   student *) malloc (sizeof (struct   student));
    J7yozLPTemA->zOMu7msVn = wQDkoB0ZFGzY->zOMu7msVn;
    wQDkoB0ZFGzY->zOMu7msVn = J7yozLPTemA;
}

main () {
    struct   student *wQDkoB0ZFGzY, *J7yozLPTemA;
    free (wQDkoB0ZFGzY);
    wQDkoB0ZFGzY = (struct   student *) malloc (sizeof (struct   student));
    wQDkoB0ZFGzY->zOMu7msVn = NULL;
    for (; (211 - 202);) {
        uR3hlk (wQDkoB0ZFGzY);
        scanf ("%s", wQDkoB0ZFGzY->zOMu7msVn->xuehao);
        if (!('e' != wQDkoB0ZFGzY->zOMu7msVn->xuehao[(636 - 636)]))
            break;
        scanf ("%s %c %d %s %s", wQDkoB0ZFGzY->zOMu7msVn->jdWXY8Sm, &wQDkoB0ZFGzY->zOMu7msVn->HRyYBdGh8, &wQDkoB0ZFGzY->zOMu7msVn->EgtHnwWZV9, &wQDkoB0ZFGzY->zOMu7msVn->score, wQDkoB0ZFGzY->zOMu7msVn->adress);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    J7yozLPTemA = wQDkoB0ZFGzY->zOMu7msVn;
    for (; (275 - 266);) {
        J7yozLPTemA = J7yozLPTemA->zOMu7msVn;
        printf ("%s %s %c %d %s %s\n", J7yozLPTemA->xuehao, J7yozLPTemA->jdWXY8Sm, J7yozLPTemA->HRyYBdGh8, J7yozLPTemA->EgtHnwWZV9, J7yozLPTemA->score, J7yozLPTemA->adress);
        if (J7yozLPTemA->zOMu7msVn == NULL)
            break;
    }
    while (9) {
        free (J7yozLPTemA);
        if (wQDkoB0ZFGzY->zOMu7msVn->zOMu7msVn == NULL)
            break;
        J7yozLPTemA = wQDkoB0ZFGzY->zOMu7msVn;
        wQDkoB0ZFGzY->zOMu7msVn = J7yozLPTemA->zOMu7msVn;
    }
    free (wQDkoB0ZFGzY->zOMu7msVn);
}

