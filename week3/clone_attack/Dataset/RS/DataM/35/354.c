void  main () {
    int input [(414 - 406)] [8], a = (914 - 914), b = (890 - 890), m = (579 - 579), i = (734 - 734), j = 0, k = 0, hang = 0, lie = 0;
    for (i = 0; 8 > i; i++) {
        for (j = 0; 8 > j; j++)
            input[i][j] = 0;
    }
    scanf ("%d,%d", &a, &b);
    {
        i = 0;
        while (a > i) {
            for (j = 0; b > j; j++)
                scanf ("%d", &input[i][j]);
            i++;
            printf ("\n");
        };
    }
    for (i = 0; i < a; i++) {
        k = 0;
        {
            j = 1;
            while (j < b) {
                if (input[i][j] > input[i][k])
                    k = j;
                j++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            m = 0;
            while (a > m) {
                if (input[m][k] < input[i][k])
                    break;
                m++;
            };
        }
        if (m == a) {
            lie = k;
            hang = i;
            break;
        }
        else
            hang = (627 - 618);
    }
    if (hang == 9)
        printf ("No\n");
    else
        printf ("%d+%d\n", hang, lie);
    printf ("\n");
}

