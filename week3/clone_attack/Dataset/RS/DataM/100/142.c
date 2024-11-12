struct   zimu {
    char Xi0tcFZB5nE;
    int AyCdS4OeHaGm;
}
slDpQes [(596 - 296)], temp;

int main () {
    char ZiHycO [303];
    int WeuLqO63jEHw;
    int flag1;
    int i;
    int k;
    int number;
    int fRIGK4kz;
    WeuLqO63jEHw = (923 - 923);
    flag1 = (306 - 306);
    scanf ("%s", ZiHycO);
    number = strlen (ZiHycO);
    for (i = (671 - 671); i < number; i++) {
        slDpQes[i].AyCdS4OeHaGm = 0;
    }
    for (i = 0; i < number; i++) {
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
        if ((ZiHycO[i] >= (571 - 506) && ZiHycO[i] <= (987 - 897)) || (ZiHycO[i] >= 97 && ZiHycO[i] <= 122)) {
            flag1 = (837 - 836);
            fRIGK4kz = 0;
            if (!(0 != i)) {
                slDpQes[WeuLqO63jEHw].Xi0tcFZB5nE = ZiHycO[i];
                slDpQes[WeuLqO63jEHw].AyCdS4OeHaGm = (248 - 247);
                WeuLqO63jEHw++;
            }
            else {
                {
                    k = 0;
                    while (k < WeuLqO63jEHw) {
                        if (slDpQes[k].Xi0tcFZB5nE == ZiHycO[i]) {
                            slDpQes[k].AyCdS4OeHaGm++;
                            fRIGK4kz = (303 - 302);
                            break;
                        }
                        k++;
                    };
                }
                if (fRIGK4kz == 0) {
                    slDpQes[WeuLqO63jEHw].Xi0tcFZB5nE = ZiHycO[i];
                    slDpQes[WeuLqO63jEHw].AyCdS4OeHaGm = (705 - 704);
                    WeuLqO63jEHw++;
                };
            };
        };
    }
    if (flag1 == 0)
        ;
    else {
        for (i = 1; i < WeuLqO63jEHw; i++) {
            for (k = 0; k < WeuLqO63jEHw -i; k++) {
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
                if (slDpQes[k].Xi0tcFZB5nE > slDpQes[k + 1].Xi0tcFZB5nE) {
                    temp = slDpQes[k + 1];
                    slDpQes[k + 1] = slDpQes[k];
                    slDpQes[k] = temp;
                };
            };
        }
        for (i = 0; i < WeuLqO63jEHw; i++) {
            printf ("%c=%d\n", slDpQes[i].Xi0tcFZB5nE, slDpQes[i].AyCdS4OeHaGm);
        };
    }
    return 0;
}

