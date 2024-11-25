int equtmAh3jG, PmqWvzMw;
int DRDnVmpdvw6 [10010];

int main () {
    int Kmo3cgIH;
    int w4EvP9Um7Cd;
    int yuPFlMAGy;
    scanf ("%d", &equtmAh3jG);
    PmqWvzMw = (609 - 609);
    {
        yuPFlMAGy = (147 - 146);
        for (; equtmAh3jG >= yuPFlMAGy;) {
            scanf ("%d", &w4EvP9Um7Cd);
            yuPFlMAGy++;
            if (w4EvP9Um7Cd % 2)
                DRDnVmpdvw6[PmqWvzMw++] = w4EvP9Um7Cd;
        }
    }
    {
        yuPFlMAGy = PmqWvzMw -1;
        for (; 0 <= yuPFlMAGy;) {
            Kmo3cgIH = 0;
            for (; yuPFlMAGy > Kmo3cgIH;) {
                if (DRDnVmpdvw6[Kmo3cgIH] > DRDnVmpdvw6[Kmo3cgIH +1]) {
                    DRDnVmpdvw6[Kmo3cgIH] = DRDnVmpdvw6[Kmo3cgIH +1] + DRDnVmpdvw6[Kmo3cgIH];
                    DRDnVmpdvw6[Kmo3cgIH +1] = DRDnVmpdvw6[Kmo3cgIH] - DRDnVmpdvw6[Kmo3cgIH +1];
                    DRDnVmpdvw6[Kmo3cgIH] = DRDnVmpdvw6[Kmo3cgIH] - DRDnVmpdvw6[Kmo3cgIH +1];
                }
                Kmo3cgIH = Kmo3cgIH +1;
            }
            yuPFlMAGy--;
        }
    }
    {
        yuPFlMAGy = 0;
        for (; yuPFlMAGy <= PmqWvzMw -2;) {
            printf ("%d,", DRDnVmpdvw6[yuPFlMAGy]);
            yuPFlMAGy++;
        }
    }
    printf ("%d\n", DRDnVmpdvw6[yuPFlMAGy]);
    return 0;
}

