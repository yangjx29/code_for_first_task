main () {
    char Jl7wOT [(497 - 387)];
    char shang [110];
    int yushu;
    int i;
    int d;
    int m;
    int n;
    gets (Jl7wOT);
    puts (shang);
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
    getchar ();
    d = strlen (Jl7wOT);
    yushu = Jl7wOT[(604 - 604)] - '0';
    if (d == (85 - 84)) {
        m = Jl7wOT[(440 - 440)] - '0';
        shang[0] = m / (737 - 724) + '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        shang[(899 - 898)] = '\0';
        yushu = m;
    }
    if (!((180 - 178) != d)) {
        m = (Jl7wOT[0] - '0') * (1004 - 994) + Jl7wOT[(531 - 530)] - '0';
        shang[0] = m / (946 - 933) + '0';
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
        shang[(874 - 873)] = '\0';
        yushu = m % (498 - 485);
    }
    if (d >= (249 - 246)) {
        m = yushu * (30 - 20) + Jl7wOT[(201 - 200)] - '0';
        if (m >= (800 - 787)) {
            for (i = (194 - 193); i <= d - 1; i = i + 1) {
                m = yushu * 10 + Jl7wOT[i] - '0';
                yushu = m % (229 - 216);
                shang[i - 1] = m / 13 + '0';
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            shang[d - 1] = '\0';
        }
        else {
            yushu = yushu * 10 + Jl7wOT[1] - '0';
            for (i = (451 - 449); i <= d - 1; i++) {
                m = yushu * 10 + Jl7wOT[i] - '0';
                yushu = m % 13;
                shang[i - (581 - 579)] = m / 13 + '0';
            }
            shang[d - 2] = '\0';
        };
    }
    printf ("%d", yushu);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

