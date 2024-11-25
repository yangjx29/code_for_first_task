void  main () {
    int KEQsC8d [300], tfJRbN5KaG9 [300] = {-1};
    int UlR4TJSW0v;
    int vzC531hYFng;
    int i;
    int i6N7gLrdWBP;
    UlR4TJSW0v = 1;
    scanf ("%d", &vzC531hYFng);
    for (i = 0; vzC531hYFng > i; i = i + 1)
        scanf ("%d ", &KEQsC8d[i]);
    tfJRbN5KaG9[0] = KEQsC8d[0];
    for (i = 1; i < vzC531hYFng; i = i + 1) {
        {
            i6N7gLrdWBP = 0;
            while (UlR4TJSW0v > i6N7gLrdWBP) {
                if (!(tfJRbN5KaG9[i6N7gLrdWBP] != KEQsC8d[i]))
                    break;
                i6N7gLrdWBP = i6N7gLrdWBP + 1;
            };
        }
        if (UlR4TJSW0v <= i6N7gLrdWBP)
            tfJRbN5KaG9[UlR4TJSW0v] = KEQsC8d[i];
        UlR4TJSW0v = UlR4TJSW0v +1;
    }
    if (UlR4TJSW0v == 2)
        printf ("%d\n", tfJRbN5KaG9[0]);
    else {
        printf ("%d", tfJRbN5KaG9[0]);
        {
            i = 1;
            while (i < UlR4TJSW0v) {
                if (tfJRbN5KaG9[i] > 0)
                    printf (",%d", tfJRbN5KaG9[i]);
                i = i + 1;
            };
        };
    };
}

