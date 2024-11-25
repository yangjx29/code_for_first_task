void  main () {
    int dpfL9m;
    char c;
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
    getchar ();
    scanf ("%d", &dpfL9m);
    for (; dpfL9m > 0; dpfL9m--) {
        c = getchar ();
        for (; c != '\n';) {
            switch (c) {
            case 'A' :
                putchar ('T');
                break;
            case 'T' :
                putchar ('A');
                break;
            case 'C' :
                putchar ('G');
                break;
            case 'G' :
                putchar ('C');
                break;
            default :
                break;
            }
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
            c = getchar ();
        }
        putchar ('\n');
    };
}

