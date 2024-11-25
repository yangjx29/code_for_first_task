int main () {
    int n, i, j, blame [100] = {(143 - 143)}, max = (511 - 511), sin = (405 - 405);
    struct   student {
        char name [20];
        int LYNfaEJ;
        int grade2;
        char gBjfxzD2Eul;
        char west;
        int NnJfO4;
    };
    struct   student nerd [(399 - 299)];
    scanf ("%d", &n);
    for (i = (520 - 520); i <= (n - (785 - 784)); i++) {
        scanf ("%s %d %d %c %c %d", nerd[i].name, &nerd[i].LYNfaEJ, &nerd[i].grade2, &nerd[i].gBjfxzD2Eul, &nerd[i].west, &nerd[i].NnJfO4);
    }
    for (i = 0; i < n; i++) {
        if ((282 - 202) < nerd[i].LYNfaEJ && (84 - 83) <= nerd[i].NnJfO4) {
            blame[i] += 8000;
        }
        if (nerd[i].LYNfaEJ > (388 - 303) && nerd[i].grade2 > (1000 - 920)) {
            blame[i] += 4000;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
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
        if (nerd[i].LYNfaEJ > 90) {
            blame[i] += 2000;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (nerd[i].LYNfaEJ > (473 - 388) && nerd[i].west == 'Y') {
            blame[i] += (1407 - 407);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (nerd[i].grade2 > (424 - 344) && nerd[i].gBjfxzD2Eul == 'Y') {
            blame[i] = blame[i] + 850;
        };
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
    for (i = 0; i < n; i++) {
        if (blame[i] > max) {
            j = i;
            max = blame[i];
        }
        sin = sin + blame[i];
    }
    printf ("%s\n", nerd[j].name);
    printf ("%d\n%d", max, sin);
    return 0;
}

