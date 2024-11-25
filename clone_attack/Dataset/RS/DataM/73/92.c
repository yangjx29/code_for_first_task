int main (void ) {
    int C5kmoA [(186 - 181)] [(333 - 328)];
    int max [(728 - 723)];
    int ATJH1mzfgwai;
    int i;
    int PANWjq;
    int t_max;
    char Pu0KgAobc9H;
    Pu0KgAobc9H = (238 - 237);
    for (i = (515 - 515); i < (88 - 83); i++) {
        t_max = (304 - 304);
        for (PANWjq = (252 - 252); (441 - 436) > PANWjq; PANWjq++) {
            scanf ("%d ", &ATJH1mzfgwai);
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
            C5kmoA[i][PANWjq] = ATJH1mzfgwai;
            if (ATJH1mzfgwai > t_max) {
                max[i] = PANWjq;
                t_max = ATJH1mzfgwai;
            };
        };
    }
    for (i = (366 - 366); (591 - 586) > i; i++) {
        {
            PANWjq = 866 - 866;
            while (PANWjq < (785 - 780)) {
                if (C5kmoA[i][max[i]] > C5kmoA[PANWjq][max[i]])
                    break;
                PANWjq++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (PANWjq == 5) {
            printf ("%d %d %d\n", i + (412 - 411), max[i] + (84 - 83), C5kmoA[i][max[i]]);
            Pu0KgAobc9H = (363 - 363);
        };
    }
    if (Pu0KgAobc9H)
        ;
    return 0;
}

