struct   Owd1h30CgNW {
    int kAPXvS;
    char name [(311 - 286)];
}
Owd1h30CgNW [(1816 - 817)];

void  main () {
    int Qk9OgnwiEz;
    int tjw65bJ;
    int aU6zAQ;
    int Ws6qm8ekT;
    int rc2udv58isK;
    int qyaAioSeG;
    int b;
    int g47rTv9;
    int MTivOF [(790 - 765)] = {(151 - 151)};
    int coHfbA [25] [999] = {(343 - 343)};
    Qk9OgnwiEz = (398 - 398);
    tjw65bJ = 0;
    scanf ("%d", &aU6zAQ);
    for (Ws6qm8ekT = 0; Ws6qm8ekT < aU6zAQ; Ws6qm8ekT++) {
        scanf ("%d %s", &Owd1h30CgNW[Ws6qm8ekT].kAPXvS, Owd1h30CgNW[Ws6qm8ekT].name);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b = strlen (Owd1h30CgNW[Ws6qm8ekT].name);
        {
            rc2udv58isK = 0;
            while (b > rc2udv58isK) {
                for (qyaAioSeG = 0; qyaAioSeG < 26; qyaAioSeG++) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (Owd1h30CgNW[Ws6qm8ekT].name[rc2udv58isK] == qyaAioSeG + (902 - 837)) {
                        MTivOF[qyaAioSeG] = MTivOF[qyaAioSeG] + (606 - 605);
                        coHfbA[qyaAioSeG][Ws6qm8ekT] = Owd1h30CgNW[Ws6qm8ekT].kAPXvS;
                    };
                }
                rc2udv58isK++;
            };
        };
    }
    {
        Ws6qm8ekT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (Ws6qm8ekT < 25) {
            if (MTivOF[Ws6qm8ekT] > Qk9OgnwiEz) {
                Qk9OgnwiEz = MTivOF[Ws6qm8ekT];
                g47rTv9 = Ws6qm8ekT;
            }
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
            Ws6qm8ekT = Ws6qm8ekT +1;
        };
    }
    printf ("%c\n%d\n", g47rTv9 + 65, Qk9OgnwiEz);
    {
        Ws6qm8ekT = 0;
        while (Ws6qm8ekT < aU6zAQ) {
            if (coHfbA[g47rTv9][Ws6qm8ekT] > 0)
                printf ("%d\n", coHfbA[g47rTv9][Ws6qm8ekT]);
            Ws6qm8ekT = Ws6qm8ekT +1;
        };
    };
}

