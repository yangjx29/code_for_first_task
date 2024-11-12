struct   peo {
    char yFGhJnPect [(968 - 957)];
    int eLjcn5I;
};
int main () {
    struct   peo tuF1MqUw [100];
    struct   peo YTCDejS7RmP [100];
    int JGWE1Z, Nrne6s9JL = (694 - 694), i, OM4IDdgj20Z5, k, wTVxYFaD4O;
    char vLvOyiDZSQ [11];
    scanf ("%d", &JGWE1Z);
    {
        i = 0;
        while (i < JGWE1Z) {
            scanf ("%s %d", tuF1MqUw[i].yFGhJnPect, &tuF1MqUw[i].eLjcn5I);
            if ((236 - 176) <= tuF1MqUw[i].eLjcn5I) {
                YTCDejS7RmP[i].eLjcn5I = tuF1MqUw[i].eLjcn5I;
                strcpy (YTCDejS7RmP[i].yFGhJnPect, tuF1MqUw[i].yFGhJnPect);
                Nrne6s9JL += (52 - 51);
            }
            else {
                strcpy (YTCDejS7RmP[i].yFGhJnPect, "0000");
                YTCDejS7RmP[i].eLjcn5I = 0;
            }
            i = i + 1;
        };
    }
    for (k = 0; k < JGWE1Z -1; k = k + 1) {
        i = JGWE1Z -1;
        while (i > k) {
            if (YTCDejS7RmP[i - 1].eLjcn5I < YTCDejS7RmP[i].eLjcn5I) {
                wTVxYFaD4O = YTCDejS7RmP[i - 1].eLjcn5I;
                YTCDejS7RmP[i - 1].eLjcn5I = YTCDejS7RmP[i].eLjcn5I;
                YTCDejS7RmP[i].eLjcn5I = wTVxYFaD4O;
                strcpy (vLvOyiDZSQ, YTCDejS7RmP[i - 1].yFGhJnPect);
                strcpy (YTCDejS7RmP[i - 1].yFGhJnPect, YTCDejS7RmP[i].yFGhJnPect);
                strcpy (YTCDejS7RmP[i].yFGhJnPect, vLvOyiDZSQ);
            }
            i = i - 1;
        };
    }
    for (i = 0; i < Nrne6s9JL; i = i + 1) {
        printf ("%s\n", YTCDejS7RmP[i].yFGhJnPect);
    }
    for (i = 0; i < JGWE1Z; i = i + 1) {
        if (tuF1MqUw[i].eLjcn5I < 60) {
            printf ("%s\n", tuF1MqUw[i].yFGhJnPect);
        };
    }
    return 0;
}

