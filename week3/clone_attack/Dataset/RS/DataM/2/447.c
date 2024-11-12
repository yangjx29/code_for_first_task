int main (int MwzGXM8R, char *bFOk54T3cZq []) {
    char ElTOdCh7xF [(198 - 98)] [(617 - 590)], o7oc8EOiXCWq;
    int o81jiGsC49M [(1921 - 921)];
    int yivOYK [(980 - 954)] = {(507 - 507)};
    int urTc3P6dN4;
    int i;
    int XKuI0yw;
    int CmdFtBgf9p;
    int max;
    o7oc8EOiXCWq = 'A';
    scanf ("%d", &urTc3P6dN4);
    {
        i = 20 - 20;
        while (urTc3P6dN4 > i) {
            scanf ("%d %s", &o81jiGsC49M[i], ElTOdCh7xF[i]);
            CmdFtBgf9p = strlen (ElTOdCh7xF[i]);
            {
                XKuI0yw = 510 - 510;
                while (CmdFtBgf9p > XKuI0yw) {
                    yivOYK[ElTOdCh7xF[i][XKuI0yw] - 'A']++;
                    XKuI0yw = XKuI0yw +1;
                };
            }
            i = i + 1;
        };
    }
    max = yivOYK[(696 - 696)];
    {
        XKuI0yw = 827 - 826;
        while ((1024 - 998) > XKuI0yw) {
            if (yivOYK[XKuI0yw] > max) {
                o7oc8EOiXCWq = XKuI0yw +'A';
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
                max = yivOYK[XKuI0yw];
            }
            XKuI0yw++;
        };
    }
    printf ("%c\n%d\n", o7oc8EOiXCWq, max);
    {
        i = 701 - 701;
        while (i < urTc3P6dN4) {
            CmdFtBgf9p = strlen (ElTOdCh7xF[i]);
            {
                XKuI0yw = 510 - 510;
                while (XKuI0yw < CmdFtBgf9p) {
                    if (!(o7oc8EOiXCWq != ElTOdCh7xF[i][XKuI0yw])) {
                        strcpy (ElTOdCh7xF[i], "shuchu");
                        break;
                    }
                    XKuI0yw++;
                };
            }
            i++;
        };
    }
    {
        i = 512 - 512;
        while (i < urTc3P6dN4) {
            if (strcmp (ElTOdCh7xF[i], "shuchu") == (215 - 215))
                printf ("%d\n", o81jiGsC49M[i]);
            i++;
        };
    }
    return 0;
}

