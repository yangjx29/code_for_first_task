void  main () {
    char comma [300];
    int MpCrTw;
    int i;
    int j;
    int a [300] = {0};
    int JHFdikwhLNqz;
    for (i = 0, j = 1; !('\n' == comma[j - 1]); i = i + 1, j = j + 1) {
        scanf ("%d", &a[i]);
        scanf ("%c", &comma[j]);
    }
    if (!(0 != i - 1)) {
        goto stop;
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
        printf ("No");
    }
    MpCrTw = i;
    for (j = 1; j < MpCrTw; j++)
        for (i = 0; i < MpCrTw -j; i++)
            if (a[i + 1] < a[i]) {
                JHFdikwhLNqz = a[i];
                a[i] = a[i + 1];
                a[i + 1] = JHFdikwhLNqz;
            }
    for (i = MpCrTw -2; i >= 0; i--) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (a[i] != a[MpCrTw -1]) {
            printf ("%d", a[i]);
            break;
        };
    }
    if (a[0] == a[MpCrTw -1])
        ;
stop :
    ;
}

