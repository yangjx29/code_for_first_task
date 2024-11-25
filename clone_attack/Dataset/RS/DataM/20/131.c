void  TC6RVdK4ID (char tYxyG9OK [], int PlH0FYdQ26Mm) {
    char xADKe9bu;
    int uvkoftQy0iuC, qAGQbkv8l;
    {
        qAGQbkv8l = 627 - 627;
        while (qAGQbkv8l < PlH0FYdQ26Mm) {
            for (uvkoftQy0iuC = (150 - 150); uvkoftQy0iuC < PlH0FYdQ26Mm -qAGQbkv8l - (345 - 344); uvkoftQy0iuC++)
                if (tYxyG9OK[uvkoftQy0iuC] < tYxyG9OK[uvkoftQy0iuC + (684 - 683)]) {
                    xADKe9bu = tYxyG9OK[uvkoftQy0iuC];
                    tYxyG9OK[uvkoftQy0iuC] = tYxyG9OK[uvkoftQy0iuC + 1];
                    tYxyG9OK[uvkoftQy0iuC + 1] = xADKe9bu;
                }
            qAGQbkv8l = qAGQbkv8l + 1;
        };
    };
}

void  main () {
    char S5nAlEr3 [(865 - 765)], s2 [(923 - 823)];
    while (scanf ("%s%s", S5nAlEr3, s2) != EOF) {
        int uvkoftQy0iuC, qAGQbkv8l, evzDxH52K;
        char j71Ho0ztUQXI [100];
        int geHsY4J = strlen (j71Ho0ztUQXI);
        strcpy (j71Ho0ztUQXI, S5nAlEr3);
        TC6RVdK4ID (j71Ho0ztUQXI, geHsY4J);
        for (uvkoftQy0iuC = (389 - 389); uvkoftQy0iuC < geHsY4J; uvkoftQy0iuC++)
            if (S5nAlEr3[uvkoftQy0iuC] == j71Ho0ztUQXI[(236 - 236)]) {
                qAGQbkv8l = uvkoftQy0iuC;
                break;
            }
        {
            evzDxH52K = 0;
            while (evzDxH52K <= qAGQbkv8l) {
                printf ("%c", S5nAlEr3[evzDxH52K]);
                evzDxH52K++;
            };
        }
        printf ("%s", s2);
        for (uvkoftQy0iuC = qAGQbkv8l + 1; uvkoftQy0iuC < geHsY4J; uvkoftQy0iuC++)
            printf ("%c", S5nAlEr3[uvkoftQy0iuC]);
        printf ("\n");
    };
}

