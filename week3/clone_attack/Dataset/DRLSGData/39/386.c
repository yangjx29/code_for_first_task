int main () {
    char HX2FCu [1000] [1000], mOayVC1pgv7, HuwvsOhd, TCKnNiWxbwdV [1000];
    int C0euhq, cFpzaD, sIcQUv = 0, KDpwjXuM2iz1, Xr7cFgfVOWZv, b, wj7FQg4, bemvya1M0Fi [5], jrlGtZeR [1000], s9VTPk;
    scanf ("%d", &C0euhq);
    {
        cFpzaD = 0;
        while (C0euhq > cFpzaD) {
            scanf ("%s %d %d %c %c %d", HX2FCu[cFpzaD], &Xr7cFgfVOWZv, &b, &mOayVC1pgv7, &HuwvsOhd, &s9VTPk);
            if (80 < Xr7cFgfVOWZv &&0 < s9VTPk)
                bemvya1M0Fi[0] = 8000;
            else
                bemvya1M0Fi[0] = 0;
            if (85 < Xr7cFgfVOWZv &&80 < b)
                bemvya1M0Fi[1] = 4000;
            else
                bemvya1M0Fi[1] = 0;
            if (90 < Xr7cFgfVOWZv)
                bemvya1M0Fi[2] = 2000;
            else
                bemvya1M0Fi[2] = 0;
            if (Xr7cFgfVOWZv > 85 && HuwvsOhd == 'Y')
                bemvya1M0Fi[3] = 1000;
            else
                bemvya1M0Fi[3] = 0;
            if (b > 80 && mOayVC1pgv7 == 'Y')
                bemvya1M0Fi[4] = 850;
            else
                bemvya1M0Fi[4] = 0;
            jrlGtZeR[cFpzaD] = bemvya1M0Fi[0] + bemvya1M0Fi[1] + bemvya1M0Fi[2] + bemvya1M0Fi[3] + bemvya1M0Fi[4];
            cFpzaD = cFpzaD + 1;
        }
    }
    {
        cFpzaD = 0;
        while (cFpzaD < C0euhq) {
            sIcQUv = sIcQUv + jrlGtZeR[cFpzaD];
            cFpzaD = cFpzaD + 1;
        }
    }
    {
        KDpwjXuM2iz1 = 0;
        for (; KDpwjXuM2iz1 < C0euhq -1;) {
            {
                cFpzaD = 0;
                while (cFpzaD < C0euhq -1 - KDpwjXuM2iz1) {
                    if (jrlGtZeR[cFpzaD] < jrlGtZeR[cFpzaD + 1]) {
                        wj7FQg4 = jrlGtZeR[cFpzaD];
                        jrlGtZeR[cFpzaD] = jrlGtZeR[cFpzaD + 1];
                        jrlGtZeR[cFpzaD + 1] = wj7FQg4;
                        strcpy (TCKnNiWxbwdV, HX2FCu[cFpzaD]);
                        strcpy (HX2FCu[cFpzaD], HX2FCu[cFpzaD + 1]);
                        strcpy (HX2FCu[cFpzaD + 1], TCKnNiWxbwdV);
                    }
                    cFpzaD = cFpzaD + 1;
                }
            }
            KDpwjXuM2iz1 = KDpwjXuM2iz1 +1;
        }
    }
    printf ("%s\n%d\n%d", HX2FCu[0], jrlGtZeR[0], sIcQUv);
    return 0;
}

