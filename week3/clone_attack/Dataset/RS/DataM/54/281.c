char kFoATORC0839 (int WWsljcMe [], int tnaMq2Zo, int sadRni6KNeQx, int p0pxzmGHry) {
    int nZHBYg;
    WWsljcMe[sadRni6KNeQx] = tnaMq2Zo * sadRni6KNeQx + p0pxzmGHry;
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
    for (nZHBYg = sadRni6KNeQx - (411 - 410); nZHBYg >= 1; nZHBYg = nZHBYg - 1) {
        if (WWsljcMe[nZHBYg + 1] % (sadRni6KNeQx - 1) == 0)
            WWsljcMe[nZHBYg] = WWsljcMe[nZHBYg + 1] * sadRni6KNeQx / (sadRni6KNeQx - 1) + p0pxzmGHry;
        else
            return (1);
    }
    return (0);
}

void  main () {
    char JFnQE10N;
    int Up9FB8hDMw [N];
    int tnaMq2Zo;
    int sadRni6KNeQx, p0pxzmGHry;
    tnaMq2Zo = 1;
    scanf ("%d%d", &sadRni6KNeQx, &p0pxzmGHry);
    do {
        JFnQE10N = kFoATORC0839 (Up9FB8hDMw, tnaMq2Zo, sadRni6KNeQx, p0pxzmGHry);
        if (JFnQE10N)
            tnaMq2Zo++;
    }
    while (JFnQE10N);
    printf ("%d\n", Up9FB8hDMw[1]);
}

