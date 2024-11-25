void  main () {
    int i, j, JxDuz6JEy, ARkH9FvNx, n;
    char XzTRxcb [(1386 - 885)];
    gets (XzTRxcb);
    n = strlen (XzTRxcb);
    {
        j = 1;
        while (j < n) {
            for (i = 0; n - j > i; i++) {
                for (JxDuz6JEy = 0; JxDuz6JEy <= j / 2; JxDuz6JEy++) {
                    if (!(XzTRxcb[i + j - JxDuz6JEy] == XzTRxcb[i + JxDuz6JEy]))
                        break;
                }
                if (JxDuz6JEy == j / 2 + 1) {
                    {
                        ARkH9FvNx = i;
                        while (ARkH9FvNx <= i + j) {
                            printf ("%c", XzTRxcb[ARkH9FvNx]);
                            ARkH9FvNx++;
                        };
                    }
                    printf ("\n");
                };
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
            j++;
        };
    };
}

