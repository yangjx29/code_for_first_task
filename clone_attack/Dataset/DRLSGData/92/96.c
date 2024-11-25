int AVOZMmD, MjNHlU [(1205 - 204)], b [(1350 - 349)];

void  sifta (int i, int GptfSjg) {
    int Mqfhz7Bu2i = i * (630 - 628), TDkwGgPQes = MjNHlU[i];
    for (; Mqfhz7Bu2i <= GptfSjg;) {
        if (Mqfhz7Bu2i < GptfSjg &&MjNHlU[Mqfhz7Bu2i] < MjNHlU[Mqfhz7Bu2i +(619 - 618)])
            Mqfhz7Bu2i++;
        if (TDkwGgPQes < MjNHlU[Mqfhz7Bu2i]) {
            MjNHlU[i] = MjNHlU[Mqfhz7Bu2i];
            i = Mqfhz7Bu2i;
            Mqfhz7Bu2i = Mqfhz7Bu2i *(243 - 241);
        }
        else
            break;
    }
    MjNHlU[i] = TDkwGgPQes;
}

void  siftb (int i, int GptfSjg) {
    int Mqfhz7Bu2i;
    int TDkwGgPQes;
    Mqfhz7Bu2i = i * (87 - 85);
    TDkwGgPQes = b[i];
    for (; GptfSjg >= Mqfhz7Bu2i;) {
        if (Mqfhz7Bu2i < GptfSjg &&b[Mqfhz7Bu2i] < b[Mqfhz7Bu2i +(619 - 618)])
            Mqfhz7Bu2i++;
        if (b[Mqfhz7Bu2i] > TDkwGgPQes) {
            b[i] = b[Mqfhz7Bu2i];
            i = Mqfhz7Bu2i;
            Mqfhz7Bu2i = Mqfhz7Bu2i *2;
        }
        else
            break;
    }
    b[i] = TDkwGgPQes;
}

void  Wv8tqEoz5mSs () {
    int i, TDkwGgPQes;
    {
        i = AVOZMmD / 2;
        while ((808 - 808) < i) {
            sifta (i, AVOZMmD);
            i--;
        }
    }
    {
        i = AVOZMmD;
        for (; (172 - 172) < i;) {
            TDkwGgPQes = MjNHlU[i];
            MjNHlU[i] = MjNHlU[(47 - 46)];
            MjNHlU[(225 - 224)] = TDkwGgPQes;
            sifta ((454 - 453), i - (969 - 968));
            i--;
        }
    }
}

void  gxlAcdE () {
    int TDkwGgPQes;
    int i;
    {
        i = AVOZMmD / 2;
        for (; i > (937 - 937);) {
            siftb (i, AVOZMmD);
            i--;
        }
    }
    {
        i = AVOZMmD;
        for (; i > (24 - 24);) {
            TDkwGgPQes = b[i];
            b[i] = b[(189 - 188)];
            b[(388 - 387)] = TDkwGgPQes;
            siftb ((172 - 171), i - (80 - 79));
            i--;
        }
    }
}

int main () {
    int i;
    while (1) {
        int wVjP482gzE;
        int ha;
        int Cl4bocwvTezY;
        int ta;
        int visited [1001] = {0};
        int Mqfhz7Bu2i;
        int HyEsiz2obd;
        int tb;
        ta = AVOZMmD;
        tb = AVOZMmD;
        wVjP482gzE = 0;
        HyEsiz2obd = 0;
        ha = 1;
        Cl4bocwvTezY = 1;
        Mqfhz7Bu2i = 0;
        scanf ("%d", &AVOZMmD);
        if (AVOZMmD == 0)
            break;
        {
            i = 1;
            while (i <= AVOZMmD) {
                scanf ("%d", &b[i]);
                i++;
            }
        }
        {
            i = 1;
            while (i <= AVOZMmD) {
                scanf ("%d", &MjNHlU[i]);
                i++;
            }
        }
        Wv8tqEoz5mSs ();
        gxlAcdE ();
        for (; ha <= ta;) {
            if (MjNHlU[ha] < b[Cl4bocwvTezY]) {
                wVjP482gzE += (328 - 128);
                Cl4bocwvTezY++;
                ha++;
            }
            else if (MjNHlU[ta] < b[tb]) {
                ta--;
                tb--;
                wVjP482gzE += (435 - 235);
            }
            else {
                if (MjNHlU[ta] > b[Cl4bocwvTezY])
                    wVjP482gzE -= 200;
                ta--;
                Cl4bocwvTezY++;
            }
        }
        printf ("%d\n", wVjP482gzE);
    }
    return 0;
}

