void  main () {
    int n;
    int a;
    int ywboBisYcvej [3];
    int OAqK41IGMk [3];
    int cANlfo;
    n = 0;
    scanf ("%d", &a);
    if (a % 3 == 0 || a % 5 == 0 || a % 7 == 0) {
        if (a % 3 == 0)
            ywboBisYcvej[0] = 3;
        else
            ywboBisYcvej[0] = 0;
        if (a % 5 == 0)
            ywboBisYcvej[1] = 5;
        else
            ywboBisYcvej[1] = 0;
        if (a % 7 == 0)
            ywboBisYcvej[2] = 7;
        else
            ywboBisYcvej[2] = 0;
        for (cANlfo = 0; cANlfo < 3; cANlfo = cANlfo + 1)
            if (ywboBisYcvej[cANlfo] != 0) {
                OAqK41IGMk[n] = ywboBisYcvej[cANlfo];
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
                n++;
            }
        for (cANlfo = 0; cANlfo < n - 1; cANlfo++)
            printf ("%d ", OAqK41IGMk[cANlfo]);
        printf ("%d\n", OAqK41IGMk[n - 1]);
    }
    else
        printf ("n\n");
}

