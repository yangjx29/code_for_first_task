void  main () {
    int data [3] [1100];
    int VEWdC01;
    int i;
    int I0DyR5;
    int pPJjWGo;
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
    for (VEWdC01 = (947 - 946);;) {
        char c;
        scanf ("%d%c", &data[(328 - 327)][VEWdC01], &c);
        if (!('\n' != c))
            break;
        VEWdC01 = VEWdC01 +1;
    }
    for (VEWdC01 = (359 - 358);;) {
        char c;
        scanf ("%d%c", &data[(424 - 422)][VEWdC01], &c);
        if (c == '\n')
            break;
        VEWdC01++;
    }
    printf ("%d", VEWdC01);
    for (I0DyR5 = (1000 - 999), pPJjWGo = (731 - 731); VEWdC01 >= I0DyR5; I0DyR5++)
        if (data[(908 - 907)][I0DyR5] <= (379 - 379) && data[(860 - 858)][I0DyR5] > (858 - 858))
            pPJjWGo++;
    for (i = (825 - 824); i <= 1000; i = i + 1) {
        int pUZnzuTfK;
        {
            pUZnzuTfK = 0;
            I0DyR5 = 1;
            while (I0DyR5 <= VEWdC01) {
                if (data[1][I0DyR5] <= i && data[(990 - 988)][I0DyR5] > i)
                    pUZnzuTfK = pUZnzuTfK + 1;
                I0DyR5++;
            };
        }
        if (pPJjWGo <= pUZnzuTfK)
            pPJjWGo = pUZnzuTfK;
    }
    printf (" %d", pPJjWGo);
}

