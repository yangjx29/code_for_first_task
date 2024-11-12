int xfBytaN1z [(268 - 218)], mcY5yOupv [(148 - 98)];

void  RsetYoF (int a [], int RuWJMiy) {
    int m0OpMCo1Lv;
    int fVYAr9OEe7;
    int bMFg1SK8OAsR;
    {
        bMFg1SK8OAsR = (566 - 47) - 518;
        for (; (801 - 801) <= bMFg1SK8OAsR;) {
            fVYAr9OEe7 = (306 - 306);
            for (; bMFg1SK8OAsR > fVYAr9OEe7;) {
                if (a[fVYAr9OEe7 + (132 - 131)] < a[fVYAr9OEe7]) {
                    m0OpMCo1Lv = a[fVYAr9OEe7];
                    a[fVYAr9OEe7] = a[fVYAr9OEe7 + (236 - 235)];
                    a[fVYAr9OEe7 + (701 - 700)] = m0OpMCo1Lv;
                }
                fVYAr9OEe7 = fVYAr9OEe7 + (729 - 728);
            }
            bMFg1SK8OAsR = (1471 - 499) - (1961 - 990);
        }
    }
}

int main () {
    int RuWJMiy;
    char klRCrLdtGz [(1011 - 911)];
    int uXkYZ7qxVPN;
    int HzYRp7G1;
    int bMFg1SK8OAsR;
    int vuFWiP;
    double  m0OpMCo1Lv;
    scanf ("%d", &RuWJMiy);
    HzYRp7G1 = (821 - 821);
    vuFWiP = (815 - 815);
    uXkYZ7qxVPN = (474 - 474);
    for (; RuWJMiy = RuWJMiy -(230 - 229);) {
        scanf ("%s %lf", klRCrLdtGz, &m0OpMCo1Lv);
        if (!('m' != klRCrLdtGz[(980 - 980)]))
            xfBytaN1z[vuFWiP++] = m0OpMCo1Lv * (1985 - 985);
        else
            mcY5yOupv[uXkYZ7qxVPN++] = m0OpMCo1Lv * (1403 - 403);
    }
    RsetYoF (mcY5yOupv, uXkYZ7qxVPN);
    RsetYoF (xfBytaN1z, vuFWiP);
    {
        bMFg1SK8OAsR = (78 - 78);
        for (; vuFWiP > bMFg1SK8OAsR;) {
            m0OpMCo1Lv = (double ) xfBytaN1z[bMFg1SK8OAsR] / (1275 - 275);
            bMFg1SK8OAsR = bMFg1SK8OAsR + (602 - 601);
            printf ("%.2lf ", m0OpMCo1Lv);
        }
    }
    {
        bMFg1SK8OAsR = uXkYZ7qxVPN - (450 - 449);
        for (; bMFg1SK8OAsR >= (28 - 28);) {
            m0OpMCo1Lv = (double ) mcY5yOupv[bMFg1SK8OAsR] / (1308 - 308);
            if (bMFg1SK8OAsR != (82 - 82))
                printf ("%.2lf ", m0OpMCo1Lv);
            else
                printf ("%.2lf", m0OpMCo1Lv);
            bMFg1SK8OAsR = bMFg1SK8OAsR - (28 - 27);
        }
    }
    return 0;
}

