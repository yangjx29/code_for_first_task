struct   stu {
    char name [20];
    int qm;
    int j5NV6B;
    char bgb;
    char FiXsEdL6Nk;
    int lw;
    int GVWwlqLZRkc;
};
int main () {
    int vWcIughCsHvi, Y4vjbltskdB, YmuOgG2zBkdS = 0, Y7A4ivdBWE = 0;
    struct   stu xs [100], s35Dmxvb;
    scanf ("%d", &vWcIughCsHvi);
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
    {
        Y4vjbltskdB = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Y4vjbltskdB < vWcIughCsHvi) {
            scanf ("%s", xs[Y4vjbltskdB].name);
            scanf ("%d %d %c %c %d", &xs[Y4vjbltskdB].qm, &xs[Y4vjbltskdB].j5NV6B, &xs[Y4vjbltskdB].bgb, &xs[Y4vjbltskdB].FiXsEdL6Nk, &xs[Y4vjbltskdB].lw);
            xs[Y4vjbltskdB].GVWwlqLZRkc = 0;
            if (xs[Y4vjbltskdB].qm > 80 && xs[Y4vjbltskdB].lw > 0)
                xs[Y4vjbltskdB].GVWwlqLZRkc = xs[Y4vjbltskdB].GVWwlqLZRkc + 8000;
            if (xs[Y4vjbltskdB].qm > 85 && xs[Y4vjbltskdB].j5NV6B > 80)
                xs[Y4vjbltskdB].GVWwlqLZRkc = xs[Y4vjbltskdB].GVWwlqLZRkc + 4000;
            if (90 < xs[Y4vjbltskdB].qm)
                xs[Y4vjbltskdB].GVWwlqLZRkc += 2000;
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
            if (xs[Y4vjbltskdB].qm > 85 && xs[Y4vjbltskdB].FiXsEdL6Nk == 'Y')
                xs[Y4vjbltskdB].GVWwlqLZRkc = xs[Y4vjbltskdB].GVWwlqLZRkc + 1000;
            if (xs[Y4vjbltskdB].j5NV6B > 80 && xs[Y4vjbltskdB].bgb == 'Y')
                xs[Y4vjbltskdB].GVWwlqLZRkc = xs[Y4vjbltskdB].GVWwlqLZRkc + 850;
            Y7A4ivdBWE = Y7A4ivdBWE +xs[Y4vjbltskdB].GVWwlqLZRkc;
            if (xs[Y4vjbltskdB].GVWwlqLZRkc > YmuOgG2zBkdS) {
                YmuOgG2zBkdS = xs[Y4vjbltskdB].GVWwlqLZRkc;
                s35Dmxvb = xs[Y4vjbltskdB];
            }
            Y4vjbltskdB++;
            getchar ();
        };
    }
    printf ("%s\n%d\n%d", s35Dmxvb.name, YmuOgG2zBkdS, Y7A4ivdBWE);
    return 0;
}

