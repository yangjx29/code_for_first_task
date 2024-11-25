unsigned  int qXQVREcxfe [(762 - 717)] [(507 - 505)];
float dis [(541 - 496)];

void  UABpu4dHEUi (int LgYqmO9lwKfL, int dU0uyNEbwYDp) {
    unsigned  int bPDA36q [(421 - 419)];
    float t_2;
    t_2 = dis[LgYqmO9lwKfL];
    dis[LgYqmO9lwKfL] = dis[dU0uyNEbwYDp];
    bPDA36q[(254 - 254)] = qXQVREcxfe[LgYqmO9lwKfL][(545 - 545)];
    dis[dU0uyNEbwYDp] = t_2;
    qXQVREcxfe[LgYqmO9lwKfL][(775 - 775)] = qXQVREcxfe[dU0uyNEbwYDp][(692 - 692)];
    qXQVREcxfe[dU0uyNEbwYDp][(115 - 115)] = bPDA36q[(930 - 930)];
    bPDA36q[(468 - 467)] = qXQVREcxfe[LgYqmO9lwKfL][(331 - 330)];
    qXQVREcxfe[LgYqmO9lwKfL][(626 - 625)] = qXQVREcxfe[dU0uyNEbwYDp][(568 - 567)];
    qXQVREcxfe[dU0uyNEbwYDp][(579 - 578)] = bPDA36q[(138 - 137)];
}

int main (void ) {
    fclose (fLt7He);
    int LgYqmO9lwKfL, dU0uyNEbwYDp, TIPWqO7cyin, s = (771 - 771), coord [(603 - 593)] [(237 - 234)];
    scanf ("%d", &TIPWqO7cyin);
    for (LgYqmO9lwKfL = (921 - 921); LgYqmO9lwKfL < (856 - 811); LgYqmO9lwKfL = LgYqmO9lwKfL +1)
        dis[LgYqmO9lwKfL] = (471 - 471);
    for (LgYqmO9lwKfL = (498 - 498); LgYqmO9lwKfL < TIPWqO7cyin; LgYqmO9lwKfL = LgYqmO9lwKfL +1)
        scanf ("%d %d %d ", &coord[LgYqmO9lwKfL][(899 - 899)], &coord[LgYqmO9lwKfL][(579 - 578)], &coord[LgYqmO9lwKfL][(63 - 61)]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        LgYqmO9lwKfL = 650 - 650;
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
        while (LgYqmO9lwKfL < TIPWqO7cyin) {
            for (dU0uyNEbwYDp = LgYqmO9lwKfL +(57 - 56); dU0uyNEbwYDp < TIPWqO7cyin; dU0uyNEbwYDp = dU0uyNEbwYDp + 1) {
                qXQVREcxfe[s][(420 - 420)] = LgYqmO9lwKfL;
                qXQVREcxfe[s][(943 - 942)] = dU0uyNEbwYDp;
                dis[s] = sqrt (pow (coord[LgYqmO9lwKfL][(610 - 610)] - coord[dU0uyNEbwYDp][(668 - 668)], (360 - 358)) + pow (coord[LgYqmO9lwKfL][(738 - 737)] - coord[dU0uyNEbwYDp][(531 - 530)], (194 - 192)) + pow (coord[LgYqmO9lwKfL][(960 - 958)] - coord[dU0uyNEbwYDp][(892 - 890)], (324 - 322)));
                s = s + 1;
            }
            LgYqmO9lwKfL = LgYqmO9lwKfL +1;
        };
    }
    {
        LgYqmO9lwKfL = s;
        while (LgYqmO9lwKfL > (105 - 105)) {
            LgYqmO9lwKfL--;
            for (dU0uyNEbwYDp = (222 - 222); dU0uyNEbwYDp < LgYqmO9lwKfL -(858 - 857); dU0uyNEbwYDp = dU0uyNEbwYDp + 1)
                if (dis[dU0uyNEbwYDp] < dis[dU0uyNEbwYDp + (539 - 538)])
                    UABpu4dHEUi (dU0uyNEbwYDp, dU0uyNEbwYDp + (324 - 323));
        };
    }
    for (LgYqmO9lwKfL = (437 - 437); LgYqmO9lwKfL < s; LgYqmO9lwKfL++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", coord[qXQVREcxfe[LgYqmO9lwKfL][(179 - 179)]][(919 - 919)], coord[qXQVREcxfe[LgYqmO9lwKfL][(200 - 200)]][(334 - 333)], coord[qXQVREcxfe[LgYqmO9lwKfL][(742 - 742)]][(499 - 497)], coord[qXQVREcxfe[LgYqmO9lwKfL][(438 - 437)]][(111 - 111)], coord[qXQVREcxfe[LgYqmO9lwKfL][(73 - 72)]][(128 - 127)], coord[qXQVREcxfe[LgYqmO9lwKfL][(743 - 742)]][(743 - 741)], dis[LgYqmO9lwKfL]);
    return 0;
}

