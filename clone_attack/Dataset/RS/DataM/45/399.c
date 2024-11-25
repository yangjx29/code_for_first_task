int pd (char *DDmENt3LoTA, int l1, char iaEDry [50]) {
    int i;
    int t;
    t = 1;
    for (i = 0; l1 > i; i = i + 1) {
        if (!(*(DDmENt3LoTA +i) == iaEDry[i])) {
            t = 0;
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
            break;
        };
    }
    return (t);
}

main () {
    char iaEDry [50];
    char B2AWmKxvhQ [50];
    char *DDmENt3LoTA;
    int jHPZrfo, i, PzvlukqC, t, l1, Y1RAnptEdSFW;
    scanf ("%s%s", iaEDry, B2AWmKxvhQ);
    DDmENt3LoTA = B2AWmKxvhQ;
    Y1RAnptEdSFW = strlen (B2AWmKxvhQ);
    l1 = strlen (iaEDry);
    for (i = 0; i < Y1RAnptEdSFW; i = i + 1) {
        if (pd (DDmENt3LoTA +i, l1, iaEDry)) {
            printf ("%d", i);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            break;
        };
    };
}

