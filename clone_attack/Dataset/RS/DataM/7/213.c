int main () {
    int wO1Khm0eulyg, A6bIa1BdizM;
    int Y3ge9v, FwDsOoYny, C5APtClO2, PiX9Njled5zv, yiON6hYG94Fl = 0, fbOpeyIl = 0;
    char KQPcVaYHJ [256], a [100], H6DzwLC [100], V4FQI1 [100], d [100];
    scanf ("%s%s%s", KQPcVaYHJ, a, H6DzwLC);
    wO1Khm0eulyg = strlen (KQPcVaYHJ);
    A6bIa1BdizM = strlen (a);
    {
        Y3ge9v = 0;
        while (wO1Khm0eulyg > Y3ge9v) {
            fbOpeyIl = 0;
            {
                C5APtClO2 = Y3ge9v;
                while (Y3ge9v +A6bIa1BdizM > C5APtClO2) {
                    if (!(KQPcVaYHJ[C5APtClO2] == a[C5APtClO2 -Y3ge9v]))
                        fbOpeyIl = 1;
                    C5APtClO2 = C5APtClO2 +1;
                };
            }
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
            if (!(0 != fbOpeyIl)) {
                yiON6hYG94Fl = 1;
                {
                    FwDsOoYny = 0;
                    while (Y3ge9v > FwDsOoYny) {
                        V4FQI1[FwDsOoYny] = KQPcVaYHJ[FwDsOoYny];
                        FwDsOoYny = FwDsOoYny +1;
                    };
                }
                {
                    PiX9Njled5zv = Y3ge9v +A6bIa1BdizM;
                    while (PiX9Njled5zv < wO1Khm0eulyg) {
                        d[PiX9Njled5zv -Y3ge9v-A6bIa1BdizM] = KQPcVaYHJ[PiX9Njled5zv];
                        PiX9Njled5zv = PiX9Njled5zv +1;
                    };
                }
                d[PiX9Njled5zv -Y3ge9v-A6bIa1BdizM] = '\0';
                V4FQI1[FwDsOoYny] = '\0';
                printf ("%s%s%s", V4FQI1, H6DzwLC, d);
                break;
            }
            Y3ge9v = Y3ge9v +1;
        };
    }
    if (yiON6hYG94Fl == 0)
        printf ("%s", KQPcVaYHJ);
    return 0;
}

