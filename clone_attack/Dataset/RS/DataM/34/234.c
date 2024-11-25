void  main () {
    int YHJ4itj;
    scanf ("%d", &YHJ4itj);
    for (; YHJ4itj != 1;) {
        printf ("%d", YHJ4itj);
        if (YHJ4itj % 2 == 1) {
            YHJ4itj = YHJ4itj *3 + 1;
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
            printf ("*3+1=%d\n", YHJ4itj);
        }
        else {
            YHJ4itj = YHJ4itj / 2;
            printf ("/2=%d\n", YHJ4itj);
        };
    };
}

