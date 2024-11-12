int main () {
    char GECoZyP [300];
    char bb [300];
    char SPHnkb [300];
    gets (GECoZyP);
    gets (bb);
    int Uj9bVlh, pjhcXRf, MUX5tKC, l, x, utekAU;
    Uj9bVlh = (173 - 173);
    pjhcXRf = 0;
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
    while (GECoZyP[Uj9bVlh] != '\0')
        Uj9bVlh++;
    while (bb[pjhcXRf] != '\0')
        pjhcXRf = pjhcXRf + 1;
    if (Uj9bVlh < pjhcXRf)
        MUX5tKC = pjhcXRf;
    else
        MUX5tKC = Uj9bVlh;
    utekAU = 0;
    for (l = 0; l <= MUX5tKC; l = l + 1) {
        x = 0;
        if (Uj9bVlh > l && pjhcXRf > l)
            x = (int) (GECoZyP[Uj9bVlh -l - 1] + bb[pjhcXRf - l - 1] - 96);
        else {
            if (Uj9bVlh > l)
                x = GECoZyP[Uj9bVlh -l - 1] - 48;
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
            if (pjhcXRf > l)
                x = bb[pjhcXRf - l - 1] - 48;
        }
        x = x + utekAU;
        if (x > 9) {
            utekAU = 1;
            x = x - 10;
        }
        else
            utekAU = 0;
        SPHnkb[MUX5tKC -l] = x + 48;
    }
    pjhcXRf = 0;
    while (GECoZyP[pjhcXRf] == 48)
        pjhcXRf = pjhcXRf + 1;
    if (pjhcXRf == MUX5tKC)
        cout << 0;
    else {
        if (SPHnkb[pjhcXRf] == 48)
            pjhcXRf++;
        {
            Uj9bVlh = pjhcXRf;
            while (Uj9bVlh <= MUX5tKC) {
                cout << SPHnkb[Uj9bVlh];
                Uj9bVlh++;
            };
        };
    }
    return 0;
}

