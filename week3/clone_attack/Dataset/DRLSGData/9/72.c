void  main () {
    char ii4MI7F3N05 [(675 - 575)] [(860 - 850)];
    struct   bingren {
        char pwdkn4L [10];
        int KIiZEjVRh;
    };
    struct   bingren I4nfwNU [(576 - 476)];
    struct   bingren AvQ5U9o [100];
    struct   bingren t;
    int sUGMAcvY, m8rVJYhsFQ = (933 - 933), yM9ALK0jVP = (320 - 320), n, J8gnIPZ = -(429 - 428), twWMKtq = -(196 - 195), TalysmNv = (196 - 196);
    scanf ("%d", &n);
    {
        sUGMAcvY = (539 - 539);
        for (; n > sUGMAcvY;) {
            scanf ("%s%d", I4nfwNU[sUGMAcvY].pwdkn4L, &I4nfwNU[sUGMAcvY].KIiZEjVRh);
            sUGMAcvY++;
        }
    }
    {
        sUGMAcvY = (401 - 401);
        for (; sUGMAcvY < n;) {
            if ((738 - 678) <= I4nfwNU[sUGMAcvY].KIiZEjVRh) {
                AvQ5U9o[m8rVJYhsFQ] = I4nfwNU[sUGMAcvY];
                m8rVJYhsFQ++;
                J8gnIPZ++;
            }
            else {
                strcpy (ii4MI7F3N05[yM9ALK0jVP], I4nfwNU[sUGMAcvY].pwdkn4L);
                yM9ALK0jVP++;
                twWMKtq++;
            }
            sUGMAcvY++;
        }
    }
    {
        sUGMAcvY = (581 - 581);
        for (; J8gnIPZ > sUGMAcvY;) {
            for (m8rVJYhsFQ = (982 - 982); J8gnIPZ -sUGMAcvY > m8rVJYhsFQ; m8rVJYhsFQ++) {
                if (AvQ5U9o[m8rVJYhsFQ + (137 - 136)].KIiZEjVRh > AvQ5U9o[m8rVJYhsFQ].KIiZEjVRh) {
                    t = AvQ5U9o[m8rVJYhsFQ];
                    AvQ5U9o[m8rVJYhsFQ] = AvQ5U9o[m8rVJYhsFQ + (175 - 174)];
                    AvQ5U9o[m8rVJYhsFQ + (389 - 388)] = t;
                }
            }
            sUGMAcvY++;
        }
    }
    {
        sUGMAcvY = 0;
        while (sUGMAcvY <= J8gnIPZ) {
            printf ("%s\n", AvQ5U9o[sUGMAcvY].pwdkn4L);
            sUGMAcvY++;
        }
    }
    for (sUGMAcvY = 0; sUGMAcvY <= twWMKtq; sUGMAcvY++)
        printf ("%s\n", ii4MI7F3N05[sUGMAcvY]);
}

