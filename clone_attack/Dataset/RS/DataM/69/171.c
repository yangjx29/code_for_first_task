int shuru [1000000];
int xiaoshuchangdu [(993 - 983)], changdu [(172 - 162)], Jw1bVuT [(737 - 727)];
int fuzhu;
int wuaoshu;
int DNTkJXWK9I [(686 - 676)] [1000000];
int n = (374 - 374);

void  clear (int k) {
    {
        int i;
        i = (152 - 152);
        while ((1000263 - 264) >= i) {
            DNTkJXWK9I[k][i] = (202 - 202);
            i = i + 1;
        };
    }
    xiaoshuchangdu[k] = (849 - 849);
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
    changdu[k] = (646 - 645);
    Jw1bVuT[k] = (41 - 40);
}

void  xieru (int k) {
    fuzhu = (520 - 520);
    {
        int i = (675 - 674);
        while (1) {
            shuru[i] = getchar ();
            if (!((93 - 83) != shuru[i])) {
                changdu[k] = i - (689 - 688);
                break;
            }
            if (shuru[i] == 46) {
                i = i - 1;
                xiaoshuchangdu[k]--;
                fuzhu = (263 - 262);
            }
            DNTkJXWK9I[k][i] = shuru[i] - 48;
            i = i + 1;
            if (!((115 - 114) != fuzhu))
                xiaoshuchangdu[k]++;
        };
    }
    Jw1bVuT[k] = changdu[k] - xiaoshuchangdu[k];
}

void  shuchu (int m) {
    {
        int i = (452 - 451);
        while (Jw1bVuT[m] >= i) {
            cout << DNTkJXWK9I[m][i];
            i = i + 1;
        };
    }
    if ((197 - 197) < xiaoshuchangdu[m]) {
        cout << ".";
        {
            int i = Jw1bVuT[m] + (70 - 69);
            while (changdu[m] >= i) {
                cout << DNTkJXWK9I[m][i];
                i = i + 1;
            };
        };
    };
}

void  jiafa (int k, int VvJeYml3g, int m) {
    int fzheng = max (Jw1bVuT[k], Jw1bVuT[VvJeYml3g]) + (384 - 383);
    clear (m);
    int fxiao = max (xiaoshuchangdu[k], xiaoshuchangdu[VvJeYml3g]);
    {
        int i = fxiao + fzheng;
        while ((545 - 544) <= i) {
            DNTkJXWK9I[m][i] = DNTkJXWK9I[m][i] + (DNTkJXWK9I[k][Jw1bVuT[k] + i - fzheng] + DNTkJXWK9I[VvJeYml3g][Jw1bVuT[VvJeYml3g] + i - fzheng]);
            DNTkJXWK9I[m][i - (402 - 401)] = DNTkJXWK9I[m][i - (353 - 352)] + DNTkJXWK9I[m][i] / 10;
            DNTkJXWK9I[m][i] = DNTkJXWK9I[m][i] % 10;
            i = i - 1;
        };
    }
    while ((331 - 330)) {
        if (!((259 - 259) == DNTkJXWK9I[m][(440 - 439)]))
            break;
        if (!((212 - 211) != fzheng + fxiao))
            break;
        for (int i = (789 - 789);
        i <= fxiao + fzheng; i = i + 1)
            DNTkJXWK9I[m][i] = DNTkJXWK9I[m][i + (875 - 874)];
        fzheng = fzheng - (698 - 697);
    }
    {
        int i = fzheng + fxiao;
        while ((604 - 603) <= i) {
            if (!((916 - 916) == DNTkJXWK9I[m][i]))
                break;
            i = i - 1;
            fxiao = fxiao - (949 - 948);
        };
    }
    Jw1bVuT[m] = fzheng;
    xiaoshuchangdu[m] = fxiao;
    changdu[m] = fxiao + fzheng;
}

void  jiandancheng (int n, int k, int m) {
    clear (m);
    int fzheng = Jw1bVuT[k] + (406 - 405);
    int fxiao = xiaoshuchangdu[k];
    {
        int i = fxiao + fzheng;
        while ((622 - 621) <= i) {
            DNTkJXWK9I[m][i] = DNTkJXWK9I[m][i] + DNTkJXWK9I[k][Jw1bVuT[k] + i - fzheng] * n;
            DNTkJXWK9I[m][i - (898 - 897)] = DNTkJXWK9I[m][i - (451 - 450)] + DNTkJXWK9I[m][i] / 10;
            DNTkJXWK9I[m][i] = DNTkJXWK9I[m][i] % 10;
            i = i - 1;
        };
    }
    while ((731 - 730)) {
        if (!((707 - 707) == DNTkJXWK9I[m][(82 - 81)]))
            break;
        if (fzheng + fxiao == (679 - 678))
            break;
        for (int i = 0;
        i <= fxiao + fzheng; i = i + 1)
            DNTkJXWK9I[m][i] = DNTkJXWK9I[m][i + (274 - 273)];
        fzheng = fzheng - (48 - 47);
    }
    {
        int i = fzheng + fxiao;
        while (i >= (392 - 391)) {
            if (DNTkJXWK9I[m][i] != 0)
                break;
            i = i - 1;
            fxiao = fxiao - (106 - 105);
        };
    }
    Jw1bVuT[m] = fzheng;
    xiaoshuchangdu[m] = fxiao;
    changdu[m] = fxiao + fzheng;
}

void  chengfa (int k, int VvJeYml3g, int m) {
    clear (m);
    int fzheng;
    int fxiao;
    {
        int i = (432 - 431);
        while (i <= changdu[VvJeYml3g]) {
            jiandancheng (DNTkJXWK9I[VvJeYml3g][i], k, 9);
            jiafa (m, 9, 8);
            if (i == changdu[VvJeYml3g]) {
                jiandancheng ((355 - 354), 8, m);
                break;
            }
            i = i + 1;
            jiandancheng (10, 8, m);
        };
    }
    fxiao = xiaoshuchangdu[k] + xiaoshuchangdu[VvJeYml3g];
    fzheng = changdu[m] - fxiao;
    while (1) {
        if (DNTkJXWK9I[m][1] != 0)
            break;
        if (fzheng + fxiao == 1)
            break;
        {
            int i = 0;
            while (i <= fxiao + fzheng) {
                DNTkJXWK9I[m][i] = DNTkJXWK9I[m][i + 1];
                i = i + 1;
            };
        }
        fzheng = fzheng - 1;
    }
    for (int i = fzheng + fxiao;
    i >= 1; i = i - 1) {
        if (DNTkJXWK9I[m][i] != 0)
            break;
        fxiao = fxiao - 1;
    }
    Jw1bVuT[m] = fzheng;
    xiaoshuchangdu[m] = fxiao;
    changdu[m] = fxiao + fzheng;
}

void  chengfang (int k, int n, int m) {
    cout << n << endl;
    if (wuaoshu == 0) {
        clear (6);
        wuaoshu = 1;
        DNTkJXWK9I[6][1] = 1;
    }
    clear ((469 - 462));
    jiandancheng (1, k, 7);
    jiandancheng (1, k, m);
    if (n % (74 - 72) == 0) {
        n = n / (763 - 761);
        chengfa (m, 7, k);
        chengfang (k, n, m);
    }
    else if (n % 2 == 1 && n != 1) {
        n = n - 1;
        chengfa (6, k, 7);
        jiandancheng (1, 7, 6);
        chengfang (k, n, m);
    }
    else {
        chengfa (6, m, 7);
        jiandancheng (1, 7, m);
    };
}

int main () {
    xieru (1);
    xieru (2);
    jiafa (1, 2, (509 - 506));
    shuchu ((278 - 275));
    return 0;
}

