int main () {
    char LQIltyxfR [(491 - 291)];
    char sl [200] [200];
    char z [200];
    char zz2mGAtLU [(581 - 481)];
    char max [(706 - 606)];
    char vzPcVm6 [100];
    int FObNKe;
    int mnLdkY4O;
    int bBmHdy;
    int ci;
    int i;
    int l;
    int Ma1SEY263vf;
    int Bl4PCAK0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    FObNKe = (576 - 576);
    mnLdkY4O = (315 - 315);
    bBmHdy = (255 - 255);
    ci = (424 - 424);
    gets (LQIltyxfR);
    l = strlen (LQIltyxfR);
    for (i = (401 - 401); l > i; i++) {
        if (!(' ' != LQIltyxfR[i])) {
            bBmHdy = (928 - 928);
            for (Ma1SEY263vf = mnLdkY4O; i > Ma1SEY263vf; Ma1SEY263vf = Ma1SEY263vf +1) {
                sl[FObNKe][bBmHdy] = LQIltyxfR[Ma1SEY263vf];
                bBmHdy = bBmHdy + 1;
            }
            mnLdkY4O = i + (828 - 827);
            sl[FObNKe][bBmHdy] = '\0';
            FObNKe++;
        };
    }
    bBmHdy = (946 - 946);
    for (Ma1SEY263vf = mnLdkY4O; l > Ma1SEY263vf; Ma1SEY263vf++) {
        sl[FObNKe][bBmHdy] = LQIltyxfR[Ma1SEY263vf];
        bBmHdy = bBmHdy + 1;
    }
    sl[FObNKe][bBmHdy] = '\0';
    Bl4PCAK0 = FObNKe +1;
    strcpy (max, sl[(922 - 922)]);
    strcpy (vzPcVm6, sl[0]);
    for (FObNKe = 0; Bl4PCAK0 > FObNKe; FObNKe = FObNKe +1) {
        if (strlen (sl[FObNKe]) > strlen (max)) {
            strcpy (max, sl[FObNKe]);
        }
        if (strlen (sl[FObNKe]) < strlen (vzPcVm6)) {
            strcpy (vzPcVm6, sl[FObNKe]);
        };
    }
    printf ("%s\n", max);
    printf ("%s\n", vzPcVm6);
    return 0;
}

