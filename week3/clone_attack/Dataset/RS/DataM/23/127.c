int main () {
    int LFxjn8ecOLbH;
    int yd6nySQal;
    int NpMwVmK15uP;
    int gED3LImv5N;
    LFxjn8ecOLbH = 0;
    yd6nySQal = 0;
    NpMwVmK15uP = 0;
    gED3LImv5N = 0;
    char Kyl3zUSQ1h [100] [100] = {0};
    {
        LFxjn8ecOLbH = 0;
        while (1) {
            {
                yd6nySQal = 0;
                while (Kyl3zUSQ1h) {
                    Kyl3zUSQ1h[LFxjn8ecOLbH][yd6nySQal] = getchar ();
                    if (Kyl3zUSQ1h[LFxjn8ecOLbH][yd6nySQal] == ' ' || Kyl3zUSQ1h[LFxjn8ecOLbH][yd6nySQal] == '\n')
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    yd6nySQal++;
                };
            }
            if (Kyl3zUSQ1h[LFxjn8ecOLbH][yd6nySQal] == '\n')
                break;
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
            LFxjn8ecOLbH = LFxjn8ecOLbH +1;
        };
    }
    {
        NpMwVmK15uP = 0;
        while (NpMwVmK15uP <= LFxjn8ecOLbH) {
            {
                gED3LImv5N = 0;
                while (NpMwVmK15uP >= 0) {
                    if (Kyl3zUSQ1h[LFxjn8ecOLbH -NpMwVmK15uP][gED3LImv5N] != 32 && Kyl3zUSQ1h[LFxjn8ecOLbH -NpMwVmK15uP][gED3LImv5N] != '\n')
                        cout << Kyl3zUSQ1h[LFxjn8ecOLbH -NpMwVmK15uP][gED3LImv5N];
                    else
                        break;
                    gED3LImv5N = gED3LImv5N + 1;
                };
            }
            if (NpMwVmK15uP < LFxjn8ecOLbH)
                cout << " ";
            NpMwVmK15uP++;
        };
    }
    return 0;
}

