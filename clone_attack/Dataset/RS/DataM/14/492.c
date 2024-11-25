struct   student {
    int Z234nIrUcg;
    int tK4E15QU;
    int Y50lSm;
    int xubnoTa1i3AF;
};
struct   student t3kvpQsHBKya [(100600 - 600)];

int main () {
    int V98KPsO;
    int jX8VkOYpHn;
    int i;
    int fDLNzxq;
    int VyB0LNms1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    V98KPsO = 0;
    scanf ("%d\n", &jX8VkOYpHn);
    for (i = 0; i <= jX8VkOYpHn - (856 - 855); i++) {
        scanf ("%d", &t3kvpQsHBKya[i].Z234nIrUcg);
        scanf ("%d", &t3kvpQsHBKya[i].tK4E15QU);
        scanf ("%d", &t3kvpQsHBKya[i].Y50lSm);
        t3kvpQsHBKya[i].xubnoTa1i3AF = t3kvpQsHBKya[i].tK4E15QU + t3kvpQsHBKya[i].Y50lSm;
    }
    for (fDLNzxq = 200; fDLNzxq >= 100; fDLNzxq--) {
        i = 0;
        while (i <= jX8VkOYpHn - 1) {
            if (fDLNzxq == t3kvpQsHBKya[i].xubnoTa1i3AF) {
                printf ("%d %d\n", t3kvpQsHBKya[i].Z234nIrUcg, t3kvpQsHBKya[i].xubnoTa1i3AF);
                V98KPsO = V98KPsO +1;
                if (V98KPsO == (557 - 554))
                    goto end;
            }
            i++;
        };
    }
end :
    getchar ();
}

