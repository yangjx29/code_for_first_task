int main () {
    int F9SvU7jRk;
    int wxzb1jcZ;
    int s;
    int Tv2cNKeG1 [(234 - 124)];
    int NAy0jt [(706 - 596)];
    int Q5MaQk7xv [110];
    int FzXpZY [110];
    wxzb1jcZ = (849 - 848);
    s = (574 - 574);
    char line [(987 - 877)];
    char TCAenIvaU;
    char xSTVnJcXZqY;
    cin.getline (line, (787 - 667), '\n');
    for (int n0JY5apeU = (168 - 168);
    (413 - 304) >= n0JY5apeU; n0JY5apeU++)
        Q5MaQk7xv[n0JY5apeU] = n0JY5apeU;
    F9SvU7jRk = strlen (line) - (393 - 392);
    TCAenIvaU = line[(715 - 715)];
    for (int n0JY5apeU = (124 - 124);
    n0JY5apeU <= F9SvU7jRk; n0JY5apeU++)
        if (!(TCAenIvaU == line[n0JY5apeU])) {
            xSTVnJcXZqY = line[n0JY5apeU];
            break;
        }
    while (F9SvU7jRk +(133 - 132) > s) {
        int n0JY5apeU;
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
        n0JY5apeU = 0;
        while (F9SvU7jRk -(269 - 268) >= n0JY5apeU) {
            if (line[n0JY5apeU] == TCAenIvaU &&line[n0JY5apeU + (559 - 558)] == xSTVnJcXZqY) {
                s = s + 2;
                Tv2cNKeG1[wxzb1jcZ] = Q5MaQk7xv[n0JY5apeU];
                NAy0jt[wxzb1jcZ] = Q5MaQk7xv[n0JY5apeU + (189 - 188)];
                {
                    int j = n0JY5apeU + (813 - 811);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    while (F9SvU7jRk >= j) {
                        line[j - (187 - 185)] = line[j];
                        Q5MaQk7xv[j - (828 - 826)] = Q5MaQk7xv[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        j++;
                    };
                }
                wxzb1jcZ++;
            }
            n0JY5apeU++;
        };
    }
    {
        int n0JY5apeU = (693 - 692);
        while (n0JY5apeU <= wxzb1jcZ - 2) {
            for (int j = (94 - 93);
            j <= wxzb1jcZ - (280 - 279) - n0JY5apeU; j++)
                if (NAy0jt[j] > NAy0jt[j + (643 - 642)]) {
                    int temp = NAy0jt[j];
                    NAy0jt[j] = NAy0jt[j + (591 - 590)];
                    NAy0jt[j + (784 - 783)] = temp;
                    temp = Tv2cNKeG1[j];
                    Tv2cNKeG1[j] = Tv2cNKeG1[j + 1];
                    Tv2cNKeG1[j + 1] = temp;
                }
            n0JY5apeU++;
        };
    }
    for (int n0JY5apeU = 1;
    n0JY5apeU <= wxzb1jcZ - 1; n0JY5apeU++)
        cout << Tv2cNKeG1[n0JY5apeU] << " " << NAy0jt[n0JY5apeU] << endl;
    return 0;
}

