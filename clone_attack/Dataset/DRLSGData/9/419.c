void  main () {
    int j;
    char nVJ8iT9Hjy [(572 - 561)];
    int V5U6E2FIgMfx;
    int HGHSefP;
    int rLjADiXeWEzF;
    struct   patient {
        char pP83w7 [(813 - 802)];
        int dL0Ffon;
    };
    struct   patient *Jd9NzUueZqyk = (struct   patient *) malloc (sizeof (struct   patient) * rLjADiXeWEzF);
    free (Jd9NzUueZqyk);
    scanf ("%d", &rLjADiXeWEzF);
    for (HGHSefP = (567 - 567); rLjADiXeWEzF > HGHSefP; HGHSefP++)
        scanf ("%s%d", Jd9NzUueZqyk[HGHSefP].pP83w7, &Jd9NzUueZqyk[HGHSefP].dL0Ffon);
    for (j = (31 - 31); rLjADiXeWEzF > j; j++)
        for (HGHSefP = 0; rLjADiXeWEzF - (533 - 532) > HGHSefP; HGHSefP++) {
            if (Jd9NzUueZqyk[HGHSefP].dL0Ffon < (655 - 595) && (416 - 356) <= Jd9NzUueZqyk[HGHSefP +(755 - 754)].dL0Ffon) {
                V5U6E2FIgMfx = Jd9NzUueZqyk[HGHSefP].dL0Ffon;
                strcpy (nVJ8iT9Hjy, Jd9NzUueZqyk[HGHSefP].pP83w7);
                Jd9NzUueZqyk[HGHSefP].dL0Ffon = Jd9NzUueZqyk[HGHSefP +(515 - 514)].dL0Ffon;
                strcpy (Jd9NzUueZqyk[HGHSefP].pP83w7, Jd9NzUueZqyk[HGHSefP +(416 - 415)].pP83w7);
                Jd9NzUueZqyk[HGHSefP +(943 - 942)].dL0Ffon = V5U6E2FIgMfx;
                strcpy (Jd9NzUueZqyk[HGHSefP +(182 - 181)].pP83w7, nVJ8iT9Hjy);
            }
            if (60 <= Jd9NzUueZqyk[HGHSefP].dL0Ffon && Jd9NzUueZqyk[HGHSefP +1].dL0Ffon >= 60 && Jd9NzUueZqyk[HGHSefP].dL0Ffon < Jd9NzUueZqyk[HGHSefP +1].dL0Ffon) {
                V5U6E2FIgMfx = Jd9NzUueZqyk[HGHSefP].dL0Ffon;
                strcpy (nVJ8iT9Hjy, Jd9NzUueZqyk[HGHSefP].pP83w7);
                Jd9NzUueZqyk[HGHSefP].dL0Ffon = Jd9NzUueZqyk[HGHSefP +1].dL0Ffon;
                strcpy (Jd9NzUueZqyk[HGHSefP].pP83w7, Jd9NzUueZqyk[HGHSefP +1].pP83w7);
                Jd9NzUueZqyk[HGHSefP +1].dL0Ffon = V5U6E2FIgMfx;
                strcpy (Jd9NzUueZqyk[HGHSefP +1].pP83w7, nVJ8iT9Hjy);
            }
        }
    for (HGHSefP = 0; HGHSefP < rLjADiXeWEzF; HGHSefP++)
        printf ("%s\n", Jd9NzUueZqyk[HGHSefP].pP83w7);
}

