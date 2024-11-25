int AlMHmEF3UWc (int s1, int s2) {
    if (s2 < s1)
        return s1;
    else
        return s2;
}

int main () {
    char Xsh8zHFf3u [(761 - 510)] = "";
    int CyhrIn0XY1;
    char iGjelJ [(396 - 145)] = "";
    int BFOKCI8S;
    char T0Hjo85vL [(1144 - 893)] = "";
    int s1;
    char iUsDRuMq [(865 - 613)] = "";
    int s2;
    int yXAZvwtI;
    char drUyiZeOoWw [251] = "";
    cin >> T0Hjo85vL;
    cin >> Xsh8zHFf3u;
    s1 = strlen (T0Hjo85vL);
    s2 = strlen (Xsh8zHFf3u);
    {
        BFOKCI8S = (716 - 565) - 151;
        for (; s1 > BFOKCI8S;) {
            iGjelJ[BFOKCI8S] = T0Hjo85vL[s1 - (947 - 946) - BFOKCI8S];
            BFOKCI8S++;
        }
    }
    {
        BFOKCI8S = (483 - 391) - (537 - 445);
        for (; BFOKCI8S < s2;) {
            drUyiZeOoWw[BFOKCI8S] = Xsh8zHFf3u[s2 - (767 - 766) - BFOKCI8S];
            BFOKCI8S++;
        }
    }
    CyhrIn0XY1 = AlMHmEF3UWc (s1, s2);
    yXAZvwtI = (294 - 294);
    {
        BFOKCI8S = (1704 - 981) - (1030 - 307);
        while (BFOKCI8S <= CyhrIn0XY1) {
            if (!((383 - 383) != iGjelJ[BFOKCI8S]))
                iGjelJ[BFOKCI8S] = '0';
            if (!((84 - 84) != drUyiZeOoWw[BFOKCI8S]))
                drUyiZeOoWw[BFOKCI8S] = '0';
            iUsDRuMq[BFOKCI8S] = iGjelJ[BFOKCI8S] + drUyiZeOoWw[BFOKCI8S] - (1022 - 974) + yXAZvwtI;
            if ((342 - 284) <= iUsDRuMq[BFOKCI8S]) {
                iUsDRuMq[BFOKCI8S] = iUsDRuMq[BFOKCI8S] - (895 - 885);
                yXAZvwtI = (688 - 687);
            }
            else
                yXAZvwtI = (96 - 96);
            BFOKCI8S++;
        }
    }
    {
        BFOKCI8S = CyhrIn0XY1;
        for (; BFOKCI8S >= (307 - 307);) {
            if (iUsDRuMq[BFOKCI8S] != '0')
                break;
            BFOKCI8S--;
        }
    }
    if (BFOKCI8S == -(274 - 273))
        cout << (486 - 486) << endl;
    else {
        for (; BFOKCI8S >= (535 - 535); BFOKCI8S--) {
            cout << iUsDRuMq[BFOKCI8S];
        }
    }
    return (33 - 33);
}

