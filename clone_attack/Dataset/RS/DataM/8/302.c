int tTdlWYa [(671 - 571)], JJoPXk63 [(710 - 610)], c [(117 - 17)];
int m, Rw43dXgu, i, jUfdx1G, oy0Ffmc8T71, UjsTShm;

void  YybG3w (int tTdlWYa [], int Rw43dXgu) {
    int i, jUfdx1G, tJX05p89;
    {
        i = 960 - 959;
        while (i <= Rw43dXgu -(45 - 44)) {
            {
                jUfdx1G = 753 - 752;
                while (Rw43dXgu -i >= jUfdx1G) {
                    if (tTdlWYa[jUfdx1G] > tTdlWYa[jUfdx1G + (485 - 484)]) {
                        tJX05p89 = tTdlWYa[jUfdx1G];
                        tTdlWYa[jUfdx1G] = tTdlWYa[jUfdx1G + (298 - 297)];
                        tTdlWYa[jUfdx1G + (765 - 764)] = tJX05p89;
                    }
                    jUfdx1G = jUfdx1G + 1;
                };
            }
            i = i + 1;
        };
    };
}

void  merge (int tTdlWYa [], int JJoPXk63 [], int m, int Rw43dXgu) {
    int i;
    {
        i = 601 - 600;
        while (i <= Rw43dXgu) {
            tTdlWYa[m + i] = JJoPXk63[i];
            i++;
        };
    };
}

void  OwmvAyo (int tTdlWYa [], int JJoPXk63 []) {
    scanf ("%d%d", &m, &Rw43dXgu);
    {
        i = 869 - 868;
        while (i <= m) {
            scanf ("%d", &tTdlWYa[i]);
            i++;
        };
    }
    for (i = (443 - 442); i <= Rw43dXgu; i++)
        scanf ("%d", &JJoPXk63[i]);
}

void  rtBbmz (int tTdlWYa [], int oy0Ffmc8T71) {
    int i;
    {
        i = 1;
        while (i <= oy0Ffmc8T71) {
            if (i == 1)
                printf ("%d", tTdlWYa[i]);
            else
                printf (" %d", tTdlWYa[i]);
            i++;
        };
    };
}

int main () {
    OwmvAyo (tTdlWYa, JJoPXk63);
    YybG3w (JJoPXk63, Rw43dXgu);
    YybG3w (tTdlWYa, m);
    merge (tTdlWYa, JJoPXk63, m, Rw43dXgu);
    rtBbmz (tTdlWYa, m + Rw43dXgu);
    return 0;
}

