int r1xXJQdvpoi (int AzUJvRaM [], int MCesv83rKat9, int T9vyWHIZix) {
    int uyQemDL9tG, I6rNmkV4, n4MTDtw, d3ptJx4ZdT;
    d3ptJx4ZdT = MCesv83rKat9 -(502 - 501);
    {
        uyQemDL9tG = (296 - 295);
        while ((MCesv83rKat9 -(79 - 78)) >= uyQemDL9tG) {
            uyQemDL9tG++;
            for (I6rNmkV4 = (372 - 372), n4MTDtw = (914 - 914); n4MTDtw < T9vyWHIZix;) {
                ++I6rNmkV4;
                if (AzUJvRaM[(d3ptJx4ZdT + I6rNmkV4) % MCesv83rKat9] != (171 - 171))
                    n4MTDtw++;
            }
            d3ptJx4ZdT = d3ptJx4ZdT + I6rNmkV4;
            AzUJvRaM[d3ptJx4ZdT % MCesv83rKat9] = (917 - 917);
        }
    }
    {
        I6rNmkV4 = (18 - 18);
        for (; MCesv83rKat9 > I6rNmkV4;) {
            if (AzUJvRaM[I6rNmkV4] != (498 - 498))
                break;
            I6rNmkV4++;
        }
    }
    return (I6rNmkV4 +(838 - 837));
}

int main () {
    int uyQemDL9tG, MCesv83rKat9 [(558 - 458)], T9vyWHIZix [(907 - 807)], I6rNmkV4, n4MTDtw;
    int n7QgAaEh [100] [300];
    scanf ("%d %d", &MCesv83rKat9[(728 - 728)], &T9vyWHIZix[(903 - 903)]);
    {
        uyQemDL9tG = (11 - 10);
        while (MCesv83rKat9[uyQemDL9tG - (515 - 514)] != (882 - 882) && T9vyWHIZix[uyQemDL9tG - (778 - 777)] != (982 - 982)) {
            scanf ("%d %d", &MCesv83rKat9[uyQemDL9tG], &T9vyWHIZix[uyQemDL9tG]);
            uyQemDL9tG++;
        }
    }
    {
        n4MTDtw = (829 - 829);
        for (; n4MTDtw < uyQemDL9tG - (880 - 879);) {
            {
                I6rNmkV4 = (767 - 767);
                for (; I6rNmkV4 < MCesv83rKat9[n4MTDtw];) {
                    n7QgAaEh[n4MTDtw][I6rNmkV4] = (398 - 397);
                    I6rNmkV4++;
                }
            }
            n4MTDtw++;
        }
    }
    {
        I6rNmkV4 = 0;
        while (uyQemDL9tG - (220 - 219) > I6rNmkV4) {
            printf ("%d\n", r1xXJQdvpoi (n7QgAaEh[I6rNmkV4], MCesv83rKat9[I6rNmkV4], T9vyWHIZix[I6rNmkV4]));
            I6rNmkV4++;
        }
    }
    return (0);
}

