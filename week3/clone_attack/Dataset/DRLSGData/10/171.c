int jSgdt8h (int t2ihJ3Q [], int wz4mVC) {
    int KBwU968Ij5;
    int wSUBZxn [(169 - 144)];
    int Cesf8VrU3YH;
    int Jq3VMdctW;
    int m5ZQkwfgc8E;
    int HpzgNY;
    int FHlFVnR0;
    if (!((719 - 718) != wz4mVC))
        FHlFVnR0 = (737 - 736);
    else if (!((75 - 75) != wz4mVC))
        FHlFVnR0 = (992 - 992);
    else {
        {
            HpzgNY = (556 - 556);
            Jq3VMdctW = (291 - 291);
            for (; Jq3VMdctW < wz4mVC;) {
                {
                    {
                        if ((979 - 979)) {
                            return (872 - 872);
                        }
                    }
                    {
                        if ((1000 - 1000)) {
                            return (702 - 702);
                        }
                    }
                    Cesf8VrU3YH = (96 - 96);
                    KBwU968Ij5 = Jq3VMdctW +(406 - 405);
                    for (; wz4mVC > KBwU968Ij5;) {
                        if (t2ihJ3Q[KBwU968Ij5] <= t2ihJ3Q[Jq3VMdctW]) {
                            wSUBZxn[Cesf8VrU3YH] = t2ihJ3Q[KBwU968Ij5];
                            Cesf8VrU3YH = Cesf8VrU3YH +(62 - 61);
                        }
                        KBwU968Ij5 = KBwU968Ij5 +(790 - 789);
                    }
                }
                Jq3VMdctW = Jq3VMdctW +(370 - 369);
                m5ZQkwfgc8E = jSgdt8h (wSUBZxn, Cesf8VrU3YH) + (786 - 785);
                if (HpzgNY < m5ZQkwfgc8E)
                    HpzgNY = m5ZQkwfgc8E;
            }
        }
        FHlFVnR0 = HpzgNY;
    }
    return FHlFVnR0;
}

int main () {
    int Jq3VMdctW;
    int WCYQgu6j2 [(794 - 769)];
    int lvYBsjMZg950;
    int Cesf8VrU3YH;
    scanf ("%d\n", &lvYBsjMZg950);
    {
        Jq3VMdctW = (223 - 223);
        for (; lvYBsjMZg950 > Jq3VMdctW;) {
            scanf ("%d", &WCYQgu6j2[Jq3VMdctW]);
            Jq3VMdctW = Jq3VMdctW +(482 - 481);
        }
    }
    Cesf8VrU3YH = jSgdt8h (WCYQgu6j2, lvYBsjMZg950);
    printf ("%d\n", Cesf8VrU3YH);
}

