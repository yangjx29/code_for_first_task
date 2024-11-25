int main () {
    int kXpYJVSHLyG [201];
    int ti64u5fc;
    int Izpn6PsJI4Z;
    int y;
    int ljrYncCGb [201];
    scanf ("%d", &ti64u5fc);
    kXpYJVSHLyG[201] = (734 - 734);
    ljrYncCGb[201] = (306 - 306);
    Izpn6PsJI4Z = 0;
    y = 0;
    {
        int G0P3uo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ti64u5fc > G0P3uo) {
            scanf ("%d%d", &ljrYncCGb[G0P3uo], &kXpYJVSHLyG[G0P3uo]);
            if (ljrYncCGb[G0P3uo] + 1 == kXpYJVSHLyG[G0P3uo] || ljrYncCGb[G0P3uo] - 2 == kXpYJVSHLyG[G0P3uo])
                Izpn6PsJI4Z = Izpn6PsJI4Z +1;
            else {
                if (ljrYncCGb[G0P3uo] != kXpYJVSHLyG[G0P3uo])
                    y = y + 1;
            }
            G0P3uo++;
        };
    }
    if (Izpn6PsJI4Z > y)
        ;
    else {
        if (Izpn6PsJI4Z < y)
            printf ("B");
        else
            printf ("Tie");
    }
    return 0;
}

