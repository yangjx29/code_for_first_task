int main () {
    char bYgKb3 [10];
    char a [600];
    gets (a);
    int lS6UZVAQ87H9, taW5RmFcA, yIrzy6540iMh, Wv3OM0rFC, kgFSRKWcsr, LUn7ESa4uicA, MT0oRJbqSkj;
    int jAlOhawJU [600] = {(80 - 80)};
    char aWtpIC [600] [10];
    kgFSRKWcsr = (222 - 222);
    scanf ("%d\n", &lS6UZVAQ87H9);
    taW5RmFcA = strlen (a);
    {
        Wv3OM0rFC = (493 - 493);
        while (Wv3OM0rFC < lS6UZVAQ87H9) {
            aWtpIC[0][Wv3OM0rFC] = a[Wv3OM0rFC];
            Wv3OM0rFC++;
        }
    }
    aWtpIC[0][lS6UZVAQ87H9] = '\0';
    {
        yIrzy6540iMh = 1;
        for (; taW5RmFcA - lS6UZVAQ87H9 >= yIrzy6540iMh;) {
            {
                Wv3OM0rFC = 0;
                for (; lS6UZVAQ87H9 > Wv3OM0rFC;) {
                    bYgKb3[Wv3OM0rFC] = a[yIrzy6540iMh + Wv3OM0rFC];
                    Wv3OM0rFC++;
                }
            }
            bYgKb3[lS6UZVAQ87H9] = '\0';
            {
                LUn7ESa4uicA = 0;
                while (LUn7ESa4uicA <= kgFSRKWcsr) {
                    if (!(0 != strcmp (bYgKb3, aWtpIC[LUn7ESa4uicA]))) {
                        jAlOhawJU[LUn7ESa4uicA]++;
                        break;
                    }
                    LUn7ESa4uicA++;
                }
            }
            yIrzy6540iMh = yIrzy6540iMh + 1;
            if (!(kgFSRKWcsr + 1 != LUn7ESa4uicA)) {
                kgFSRKWcsr = kgFSRKWcsr + 1;
                strcpy (aWtpIC[kgFSRKWcsr], bYgKb3);
            }
        }
    }
    MT0oRJbqSkj = 0;
    {
        yIrzy6540iMh = 0;
        while (yIrzy6540iMh <= kgFSRKWcsr) {
            if (jAlOhawJU[yIrzy6540iMh] > MT0oRJbqSkj)
                MT0oRJbqSkj = jAlOhawJU[yIrzy6540iMh];
            yIrzy6540iMh++;
        }
    }
    if (MT0oRJbqSkj == 0)
        ;
    else {
        printf ("%d\n", MT0oRJbqSkj +1);
        {
            yIrzy6540iMh = 0;
            while (yIrzy6540iMh <= kgFSRKWcsr) {
                if (jAlOhawJU[yIrzy6540iMh] == MT0oRJbqSkj) {
                    WEWpCj (aWtpIC [yIrzy6540iMh]);
                }
                yIrzy6540iMh++;
            }
        }
    }
    return 0;
}

