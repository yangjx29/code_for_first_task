struct   {
    int tgra;
    char name [(109 - 88)];
    int Z2cf7XjgM;
    char D7qRf4;
    char west;
    int p49o51TgpAw;
}
ZrJRhN [100];

void  main () {
    char a;
    char media [21];
    int N, P3KlfRy4Odp, uZ6QAkM3TBo, IiaBZLDvG, scholar [100] = {0}, temp, HW07MvcS9 = 1, total = 0;
    IiaBZLDvG = 0;
    scanf ("%d\n", &N);
    {
        P3KlfRy4Odp = 0;
        while (P3KlfRy4Odp < N) {
            {
                uZ6QAkM3TBo = 0;
                while (!(' ' == (a = getchar ()))) {
                    ZrJRhN[P3KlfRy4Odp].name[uZ6QAkM3TBo] = a;
                    uZ6QAkM3TBo++;
                };
            }
            ZrJRhN[P3KlfRy4Odp].name[uZ6QAkM3TBo] = '\0';
            scanf ("%d %d %c %c %d", &ZrJRhN[P3KlfRy4Odp].tgra, &ZrJRhN[P3KlfRy4Odp].Z2cf7XjgM, &ZrJRhN[P3KlfRy4Odp].D7qRf4, &ZrJRhN[P3KlfRy4Odp].west, &ZrJRhN[P3KlfRy4Odp].p49o51TgpAw);
            P3KlfRy4Odp++;
        };
    }
    {
        P3KlfRy4Odp = 0;
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
        while (P3KlfRy4Odp < N) {
            if ((ZrJRhN[P3KlfRy4Odp].tgra > 80) && (ZrJRhN[P3KlfRy4Odp].p49o51TgpAw >= 1))
                scholar[P3KlfRy4Odp] = scholar[P3KlfRy4Odp] + 8000;
            if ((85 < ZrJRhN[P3KlfRy4Odp].tgra) && (80 < ZrJRhN[P3KlfRy4Odp].Z2cf7XjgM))
                scholar[P3KlfRy4Odp] = scholar[P3KlfRy4Odp] + 4000;
            if (ZrJRhN[P3KlfRy4Odp].tgra > 90)
                scholar[P3KlfRy4Odp] = scholar[P3KlfRy4Odp] + 2000;
            if (ZrJRhN[P3KlfRy4Odp].tgra > 85 && ZrJRhN[P3KlfRy4Odp].west == 'Y')
                scholar[P3KlfRy4Odp] = scholar[P3KlfRy4Odp] + 1000;
            if (ZrJRhN[P3KlfRy4Odp].Z2cf7XjgM > 80 && ZrJRhN[P3KlfRy4Odp].D7qRf4 == 'Y')
                scholar[P3KlfRy4Odp] = scholar[P3KlfRy4Odp] + 850;
            P3KlfRy4Odp++;
        };
    }
    {
        uZ6QAkM3TBo = 1;
        while (uZ6QAkM3TBo < N) {
            if (scholar[IiaBZLDvG] < scholar[uZ6QAkM3TBo]) {
                IiaBZLDvG = uZ6QAkM3TBo;
            }
            uZ6QAkM3TBo++;
        };
    }
    {
        P3KlfRy4Odp = 0;
        while (P3KlfRy4Odp < strlen (ZrJRhN[IiaBZLDvG].name)) {
            if (ZrJRhN[IiaBZLDvG].name[P3KlfRy4Odp] != 10)
                printf ("%c", ZrJRhN[IiaBZLDvG].name[P3KlfRy4Odp]);
            P3KlfRy4Odp++;
        };
    }
    printf ("\n%d\n", scholar[IiaBZLDvG]);
    {
        P3KlfRy4Odp = 0;
        while (P3KlfRy4Odp < N) {
            total = total + scholar[P3KlfRy4Odp];
            P3KlfRy4Odp++;
        };
    }
    printf ("%d\n", total);
}

