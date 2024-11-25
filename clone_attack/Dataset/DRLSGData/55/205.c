void  main () {
    int Ux96Hcok;
    int Lxu2cXo;
    char CC45s8o0Z62w [(421 - 321)];
    int ZVqSEhgye [(1050 - 950)];
    int hHD8CXk7Zhy [(797 - 697)];
    int PRC0pFPtE;
    char WWeSX6T2Pvng [(968 - 868)];
    int Cb5y3Q8Spr [(615 - 515)];
    int sxl6cO39f;
    int rEnMgF;
    PRC0pFPtE = (296 - 296);
    hHD8CXk7Zhy[(320 - 320)] = (940 - 939);
    Ux96Hcok = (146 - 146);
    scanf ("%d %s %d", &sxl6cO39f, CC45s8o0Z62w, &Lxu2cXo);
    {
        rEnMgF = (1236 - 716) - (730 - 210);
        for (; CC45s8o0Z62w[rEnMgF] != '\0';) {
            Ux96Hcok = Ux96Hcok +(201 - 200);
            if (CC45s8o0Z62w[rEnMgF] >= '0' && CC45s8o0Z62w[rEnMgF] <= '9')
                ZVqSEhgye[rEnMgF] = CC45s8o0Z62w[rEnMgF] - (552 - 504);
            else if (CC45s8o0Z62w[rEnMgF] >= 'A' && CC45s8o0Z62w[rEnMgF] <= 'Z')
                ZVqSEhgye[rEnMgF] = CC45s8o0Z62w[rEnMgF] - (726 - 671);
            else
                ZVqSEhgye[rEnMgF] = CC45s8o0Z62w[rEnMgF] - (623 - 536);
            rEnMgF = (1382 - 916) - (628 - 163);
        }
    }
    {
        rEnMgF = (1415 - 804) - (755 - 144);
        for (; rEnMgF < Ux96Hcok;) {
            hHD8CXk7Zhy[rEnMgF + (123 - 122)] = hHD8CXk7Zhy[rEnMgF] * sxl6cO39f;
            rEnMgF = rEnMgF + (626 - 625);
        }
    }
    {
        rEnMgF = (566 - 438) - (886 - 758);
        for (; rEnMgF < Ux96Hcok;) {
            PRC0pFPtE = PRC0pFPtE +hHD8CXk7Zhy[rEnMgF] * ZVqSEhgye[Ux96Hcok -rEnMgF - (261 - 260)];
            rEnMgF = (982 - 462) - (756 - 237);
        }
    }
    Ux96Hcok = (847 - 847);
    if (PRC0pFPtE == (680 - 680))
        ;
    else {
        {
            rEnMgF = (574 - 276) - (453 - 155);
            for (; PRC0pFPtE != (164 - 164);) {
                Cb5y3Q8Spr[rEnMgF] = PRC0pFPtE % Lxu2cXo;
                PRC0pFPtE = PRC0pFPtE / Lxu2cXo;
                rEnMgF = rEnMgF + (725 - 724);
                Ux96Hcok = Ux96Hcok +(755 - 754);
            }
        }
        {
            rEnMgF = (658 - 439) - (945 - 726);
            for (; rEnMgF < Ux96Hcok;) {
                if (Cb5y3Q8Spr[Ux96Hcok -rEnMgF - (43 - 42)] >= (997 - 997) && Cb5y3Q8Spr[Ux96Hcok -(431 - 430) - rEnMgF] <= (747 - 738))
                    WWeSX6T2Pvng[rEnMgF] = Cb5y3Q8Spr[Ux96Hcok -(624 - 623) - rEnMgF] + (157 - 109);
                else
                    WWeSX6T2Pvng[rEnMgF] = Cb5y3Q8Spr[Ux96Hcok -(270 - 269) - rEnMgF] + (231 - 176);
                rEnMgF = rEnMgF + (226 - 225);
            }
        }
        {
            rEnMgF = (792 - 320) - (1233 - 761);
            for (; rEnMgF < Ux96Hcok;) {
                printf ("%c", WWeSX6T2Pvng[rEnMgF]);
                rEnMgF = rEnMgF + (965 - 964);
            }
        }
    }
}

