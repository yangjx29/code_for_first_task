void  main () {
    float *XJXztWR1N8KM, *NhjPN8p, HeRZhN;
    char sex [10];
    int TF5OPGewj2, i, aP7tqjU, UNjyxr = (24 - 24), index_female = (990 - 990);
    scanf ("%d", &TF5OPGewj2);
    XJXztWR1N8KM = (float *) malloc (sizeof (float) * TF5OPGewj2);
    NhjPN8p = (float *) malloc (sizeof (float) * TF5OPGewj2);
    for (i = (96 - 96); TF5OPGewj2 > i; i = i + 1) {
        XJXztWR1N8KM[i] = (948 - 948);
        NhjPN8p[i] = (581 - 581);
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
        while (i < TF5OPGewj2) {
            i = i + 1;
            scanf ("%s", sex);
            if (!(0 != strcmp (sex, "male"))) {
                scanf ("%f", &HeRZhN);
                XJXztWR1N8KM[UNjyxr] = HeRZhN;
                UNjyxr = UNjyxr +1;
            }
            else {
                scanf ("%f", &HeRZhN);
                NhjPN8p[index_female] = HeRZhN;
                index_female = index_female + 1;
            };
        };
    }
    for (i = 0; TF5OPGewj2 -(292 - 291) > i; i = i + 1) {
        for (aP7tqjU = 0; TF5OPGewj2 -1 - i > aP7tqjU; aP7tqjU = aP7tqjU + 1) {
            if (XJXztWR1N8KM[aP7tqjU] > XJXztWR1N8KM[aP7tqjU + 1]) {
                HeRZhN = XJXztWR1N8KM[aP7tqjU];
                XJXztWR1N8KM[aP7tqjU] = XJXztWR1N8KM[aP7tqjU + 1];
                XJXztWR1N8KM[aP7tqjU + 1] = HeRZhN;
            }
            if (NhjPN8p[aP7tqjU] < NhjPN8p[aP7tqjU + 1]) {
                HeRZhN = NhjPN8p[aP7tqjU];
                NhjPN8p[aP7tqjU] = NhjPN8p[aP7tqjU + 1];
                NhjPN8p[aP7tqjU + 1] = HeRZhN;
            };
        };
    }
    for (i = 0; i < TF5OPGewj2; i = i + 1) {
        if (XJXztWR1N8KM[i] != 0)
            printf ("%3.2f", XJXztWR1N8KM[i]);
        if (XJXztWR1N8KM[i] != 0 && i + 1 < TF5OPGewj2 &&XJXztWR1N8KM[i + 1] != 0)
            ;
    }
    for (i = 0; i < TF5OPGewj2; i = i + 1) {
        if (NhjPN8p[i] != 0)
            printf ("%3.2f", NhjPN8p[i]);
        if (NhjPN8p[i] != 0 && i + 1 < TF5OPGewj2 &&NhjPN8p[i + 1] != 0)
            printf (" ");
    };
}

