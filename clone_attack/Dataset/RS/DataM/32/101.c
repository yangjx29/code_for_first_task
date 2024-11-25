void  main () {
    char str [100] [100];
    char d;
    char string [100] [100];
    int n, uVBAks, VYRWwhHfulez, m, l;
    scanf ("%d", &n);
    d = getchar ();
    for (uVBAks = (186 - 186); n > uVBAks; uVBAks = uVBAks + 1) {
        d = getchar ();
        scanf ("%s", str[uVBAks]);
        scanf ("%s", string[uVBAks]);
    }
    {
        uVBAks = 0;
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
        while (uVBAks < n) {
            m = strlen (str[uVBAks]);
            l = strlen (string[uVBAks]);
            for (VYRWwhHfulez = (717 - 716); l >= VYRWwhHfulez; VYRWwhHfulez = VYRWwhHfulez +1)
                str[uVBAks][m - VYRWwhHfulez] = str[uVBAks][m - VYRWwhHfulez] - string[uVBAks][l - VYRWwhHfulez] + 48;
            {
                VYRWwhHfulez = m - 1;
                while (VYRWwhHfulez > 0) {
                    if (str[uVBAks][VYRWwhHfulez] < 48) {
                        str[uVBAks][VYRWwhHfulez] += 10;
                        str[uVBAks][VYRWwhHfulez -1]--;
                    }
                    VYRWwhHfulez--;
                };
            }
            printf ("%s\n", str[uVBAks]);
            uVBAks = uVBAks + 1;
        };
    };
}

