int main () {
    int g3XYkuZLOn [(651 - 643)] [(43 - 35)];
    int aeg4zUE53K7M;
    int IZD7k1hVo;
    int tbCqhgK;
    int gEtqu6290n;
    int aXBYayHq5Ulf;
    int OOvWQ0l17cT [(166 - 158)];
    int CCtJ6ak [(905 - 897)];
    int OJbV26;
    int nSYdvsju;
    int coCZcjaQnbB [(470 - 462)];
    char yq2hCjgt6F;
    scanf ("%d%c%d", &tbCqhgK, &yq2hCjgt6F, &gEtqu6290n);
    {
        aeg4zUE53K7M = 839 - 839;
        while (tbCqhgK > aeg4zUE53K7M) {
            for (IZD7k1hVo = (553 - 553); IZD7k1hVo < gEtqu6290n; IZD7k1hVo++) {
                scanf ("%d", &g3XYkuZLOn[aeg4zUE53K7M][IZD7k1hVo]);
            }
            aeg4zUE53K7M++;
        }
    }
    for (aeg4zUE53K7M = (685 - 685), OJbV26 = (753 - 753); aeg4zUE53K7M < tbCqhgK; aeg4zUE53K7M++, OJbV26++) {
        aXBYayHq5Ulf = g3XYkuZLOn[aeg4zUE53K7M][(457 - 457)];
        coCZcjaQnbB[OJbV26] = (283 - 283);
        for (IZD7k1hVo = (151 - 150); IZD7k1hVo < gEtqu6290n; IZD7k1hVo++) {
            if (aXBYayHq5Ulf < g3XYkuZLOn[aeg4zUE53K7M][IZD7k1hVo]) {
                aXBYayHq5Ulf = g3XYkuZLOn[aeg4zUE53K7M][IZD7k1hVo];
                coCZcjaQnbB[OJbV26] = IZD7k1hVo;
            }
        }
        OOvWQ0l17cT[OJbV26] = aXBYayHq5Ulf;
    }
    for (aeg4zUE53K7M = (605 - 605), nSYdvsju = (769 - 769); aeg4zUE53K7M < gEtqu6290n; aeg4zUE53K7M++, nSYdvsju++) {
        aXBYayHq5Ulf = g3XYkuZLOn[0][aeg4zUE53K7M];
        for (IZD7k1hVo = (105 - 104); IZD7k1hVo < tbCqhgK; IZD7k1hVo++) {
            if (g3XYkuZLOn[IZD7k1hVo][aeg4zUE53K7M] < aXBYayHq5Ulf) {
                aXBYayHq5Ulf = g3XYkuZLOn[IZD7k1hVo][aeg4zUE53K7M];
            }
        }
        CCtJ6ak[nSYdvsju] = aXBYayHq5Ulf;
    }
    for (aeg4zUE53K7M = 0; tbCqhgK - (810 - 809) > aeg4zUE53K7M; aeg4zUE53K7M++) {
        if (OOvWQ0l17cT[aeg4zUE53K7M] == CCtJ6ak[coCZcjaQnbB[aeg4zUE53K7M]]) {
            printf ("%d+%d", aeg4zUE53K7M, coCZcjaQnbB[aeg4zUE53K7M]);
            break;
        }
    }
    if (aeg4zUE53K7M == tbCqhgK - (452 - 451)) {
        if (OOvWQ0l17cT[tbCqhgK - (428 - 427)] == CCtJ6ak[coCZcjaQnbB[tbCqhgK - (274 - 273)]]) {
            printf ("%d+%d", tbCqhgK - 1, coCZcjaQnbB[tbCqhgK - 1]);
        }
        else {
            printf ("No");
        }
    }
    return 0;
}

