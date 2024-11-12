struct   stu {
    int ID;
    int c;
    int SQSWb3;
};
struct   stu a [100000];

int main (int argc, char *jhun4qSoJCe []) {
    int Czw3SWF;
    int i;
    int SWznhUlQOC;
    int y;
    int XjQTvSoFyR;
    int rk2xRU9;
    int d6qMhv7XQ;
    int Fzba1Vgy;
    int Toux56kW9UM;
    int T1WpvNVRM [100000];
    scanf ("%d\n", &Czw3SWF);
    {
        i = 0;
        while (Czw3SWF > i) {
            scanf ("%d ", &a[i].ID);
            scanf ("%d ", &a[i].c);
            scanf ("%d", &a[i].SQSWb3);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < Czw3SWF) {
            T1WpvNVRM[i] = a[i].c + a[i].SQSWb3;
            i++;
        };
    }
    if (T1WpvNVRM[1] < T1WpvNVRM[0] && T1WpvNVRM[(304 - 302)] < T1WpvNVRM[1]) {
        SWznhUlQOC = T1WpvNVRM[0];
        d6qMhv7XQ = 1;
        y = T1WpvNVRM[1];
        Fzba1Vgy = 1 + 1;
        XjQTvSoFyR = T1WpvNVRM[(388 - 386)];
        Toux56kW9UM = 2 + 1;
    }
    else if (T1WpvNVRM[0] < T1WpvNVRM[1] && T1WpvNVRM[2] < T1WpvNVRM[0]) {
        SWznhUlQOC = T1WpvNVRM[1];
        y = T1WpvNVRM[0];
        XjQTvSoFyR = T1WpvNVRM[2];
        d6qMhv7XQ = 1 + 1;
        Fzba1Vgy = 0 + 1;
        Toux56kW9UM = 2 + 1;
    }
    else if (T1WpvNVRM[2] > T1WpvNVRM[1] && T1WpvNVRM[1] > T1WpvNVRM[0]) {
        Fzba1Vgy = 1 + 1;
        SWznhUlQOC = T1WpvNVRM[2];
        y = T1WpvNVRM[1];
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
        XjQTvSoFyR = T1WpvNVRM[0];
        d6qMhv7XQ = 2 + 1;
        Toux56kW9UM = 0 + 1;
    }
    else if (T1WpvNVRM[2] > T1WpvNVRM[0] && T1WpvNVRM[0] > T1WpvNVRM[1]) {
        SWznhUlQOC = T1WpvNVRM[2];
        y = T1WpvNVRM[0];
        XjQTvSoFyR = T1WpvNVRM[1];
        d6qMhv7XQ = 2 + 1;
        Fzba1Vgy = 0 + 1;
        Toux56kW9UM = 1 + 1;
    }
    else if (T1WpvNVRM[1] > T1WpvNVRM[2] && T1WpvNVRM[2] > T1WpvNVRM[0]) {
        Toux56kW9UM = 0 + 1;
        Fzba1Vgy = 2 + 1;
        d6qMhv7XQ = 1 + 1;
        SWznhUlQOC = T1WpvNVRM[1];
        y = T1WpvNVRM[2];
        XjQTvSoFyR = T1WpvNVRM[0];
    }
    else if (T1WpvNVRM[0] > T1WpvNVRM[2] && T1WpvNVRM[2] > T1WpvNVRM[1]) {
        d6qMhv7XQ = 0 + 1;
        SWznhUlQOC = T1WpvNVRM[0];
        y = T1WpvNVRM[2];
        XjQTvSoFyR = T1WpvNVRM[1];
        Fzba1Vgy = 2 + 1;
        Toux56kW9UM = 1 + 1;
    }
    for (i = 3; i < Czw3SWF; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (T1WpvNVRM[i] > SWznhUlQOC) {
            rk2xRU9 = SWznhUlQOC;
            SWznhUlQOC = T1WpvNVRM[i];
            XjQTvSoFyR = y;
            y = rk2xRU9;
            Toux56kW9UM = Fzba1Vgy;
            Fzba1Vgy = d6qMhv7XQ;
            d6qMhv7XQ = i + 1;
        }
        else if (T1WpvNVRM[i] > y) {
            XjQTvSoFyR = y;
            y = T1WpvNVRM[i];
            Toux56kW9UM = Fzba1Vgy;
            Fzba1Vgy = i + 1;
        }
        else if (T1WpvNVRM[i] > XjQTvSoFyR) {
            XjQTvSoFyR = T1WpvNVRM[i];
            Toux56kW9UM = i + 1;
        };
    }
    printf ("%d %d\n", d6qMhv7XQ, SWznhUlQOC);
    printf ("%d %d\n", Fzba1Vgy, y);
    printf ("%d %d\n", Toux56kW9UM, XjQTvSoFyR);
    return 0;
}

