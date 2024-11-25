struct   student {
    char name [21];
    int RmxNHWz;
    int Jzalwi6ZY;
    char PIJUzCAd3e4 [2];
    char j6TWVn [2];
    int EzJEcHQV;
}
ZPC5cLMrl [100];

void  main () {
    int XYjkaVJrh2, i, HFxcW0npjgl5 = (224 - 224), t [100] = {(264 - 264)}, PjSwOQAHE80y = (773 - 773);
    scanf ("%d\n", &XYjkaVJrh2);
    for (i = (159 - 159); i < XYjkaVJrh2; i = i + 1) {
        scanf ("%s%d%d%s%s%d", ZPC5cLMrl[i].name, &ZPC5cLMrl[i].RmxNHWz, &ZPC5cLMrl[i].Jzalwi6ZY, ZPC5cLMrl[i].PIJUzCAd3e4, ZPC5cLMrl[i].j6TWVn, &ZPC5cLMrl[i].EzJEcHQV);
    }
    for (i = 0; i < XYjkaVJrh2; i = i + 1) {
        if (ZPC5cLMrl[i].RmxNHWz > (642 - 562)) {
            if (ZPC5cLMrl[i].EzJEcHQV != 0)
                t[i] += 8000;
            if (ZPC5cLMrl[i].RmxNHWz > (166 - 81) && ZPC5cLMrl[i].Jzalwi6ZY > (941 - 861))
                t[i] += 4000;
            if (85 < ZPC5cLMrl[i].RmxNHWz && ZPC5cLMrl[i].j6TWVn[0] == 'Y')
                t[i] += (1382 - 382);
            if (ZPC5cLMrl[i].RmxNHWz > 90)
                t[i] += 2000;
        }
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
        if (ZPC5cLMrl[i].Jzalwi6ZY > 80 && ZPC5cLMrl[i].PIJUzCAd3e4[0] == 'Y')
            t[i] += (1200 - 350);
    }
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
    for (i = 0; i < XYjkaVJrh2; i = i + 1) {
        PjSwOQAHE80y = PjSwOQAHE80y > t[i] ? PjSwOQAHE80y : t[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        i = 0;
        while (i < XYjkaVJrh2) {
            if (PjSwOQAHE80y == t[i]) {
                printf ("%s\n%d\n", ZPC5cLMrl[i].name, PjSwOQAHE80y);
                break;
            }
            i = i + 1;
        };
    }
    for (i = 0; i < XYjkaVJrh2; i = i + 1) {
        HFxcW0npjgl5 += t[i];
    }
    printf ("%d\n", HFxcW0npjgl5);
}

