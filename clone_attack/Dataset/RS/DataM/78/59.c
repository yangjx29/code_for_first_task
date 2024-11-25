void  sort (struct   fA21Gkznah AjrqvK [], int Zoy9bhzBmnvC);

struct   fA21Gkznah {
    char c;
    int w;
};
main () {
    int Pc7B6l = (518 - 518), i;
    struct   fA21Gkznah m2JaML3wh9S7 [(402 - 398)];
    m2JaML3wh9S7[(642 - 642)].c = 'z';
    m2JaML3wh9S7[(684 - 683)].c = 'q';
    m2JaML3wh9S7[(983 - 981)].c = 's';
    m2JaML3wh9S7[(217 - 214)].c = 'l';
    for (m2JaML3wh9S7[(665 - 665)].w = (864 - 854); 50 >= m2JaML3wh9S7[0].w; m2JaML3wh9S7[0].w += (239 - 229)) {
        {
            m2JaML3wh9S7[(324 - 323)].w = 10;
            while (50 >= m2JaML3wh9S7[(801 - 800)].w) {
                for (m2JaML3wh9S7[(879 - 877)].w = 10; m2JaML3wh9S7[2].w <= 50; m2JaML3wh9S7[2].w += 10) {
                    for (m2JaML3wh9S7[(830 - 827)].w = 10; m2JaML3wh9S7[3].w <= 50; m2JaML3wh9S7[3].w += 10) {
                        if ((m2JaML3wh9S7[0].w + m2JaML3wh9S7[1].w == m2JaML3wh9S7[2].w + m2JaML3wh9S7[3].w) && (m2JaML3wh9S7[2].w + m2JaML3wh9S7[1].w < m2JaML3wh9S7[0].w + m2JaML3wh9S7[3].w) && (m2JaML3wh9S7[1].w > m2JaML3wh9S7[0].w + m2JaML3wh9S7[2].w)) {
                            Pc7B6l = 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            break;
                        };
                    }
                    if (Pc7B6l == 1)
                        break;
                }
                if (Pc7B6l == 1)
                    break;
                m2JaML3wh9S7[1].w += 10;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (Pc7B6l == 1)
            break;
    }
    sort (m2JaML3wh9S7, (743 - 739));
    {
        i = 0;
        while (i < 4) {
            printf ("%c %d\n", m2JaML3wh9S7[i].c, m2JaML3wh9S7[i].w);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    };
}

void  sort (struct   fA21Gkznah AjrqvK [], int Zoy9bhzBmnvC) {
    struct   fA21Gkznah temp;
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
    int i, mqjxuUHM4dGI, j;
    for (i = 0; i < Zoy9bhzBmnvC; i++) {
        mqjxuUHM4dGI = i;
        for (j = i + 1; j < Zoy9bhzBmnvC; j++) {
            if (AjrqvK[j].w > AjrqvK[mqjxuUHM4dGI].w)
                mqjxuUHM4dGI = j;
        }
        if (mqjxuUHM4dGI != i) {
            temp = AjrqvK[i];
            AjrqvK[i] = AjrqvK[mqjxuUHM4dGI];
            AjrqvK[mqjxuUHM4dGI] = temp;
        };
    };
}

