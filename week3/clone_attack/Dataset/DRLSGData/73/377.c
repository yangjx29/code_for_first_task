main () {
    int VMUmpNlEXQc;
    int se39MTdw [(296 - 291)] [(123 - 118)];
    int yk7xfhLg;
    int lezMjPDFa9fS;
    int k;
    int y;
    int e;
    int i;
    int apSRIbF;
    int t;
    {
        i = (792 - 73) - (846 - 127);
        for (; (367 - 363) >= i;) {
            {
                lezMjPDFa9fS = 183 - 183;
                while (lezMjPDFa9fS <= (103 - 99)) {
                    scanf ("%d", &se39MTdw[i][lezMjPDFa9fS]);
                    lezMjPDFa9fS++;
                }
            }
            i++;
        }
    }
    y = (534 - 534);
    for (k = (76 - 76); (863 - 858) > k; k++) {
        yk7xfhLg = (767 - 767);
        e = se39MTdw[k][(964 - 964)];
        for (apSRIbF = (583 - 582); apSRIbF < (469 - 464); apSRIbF++) {
            if (se39MTdw[k][apSRIbF] >= e) {
                e = se39MTdw[k][apSRIbF];
                yk7xfhLg = apSRIbF;
            }
        }
        VMUmpNlEXQc = (760 - 760);
        {
            t = 659 - 659;
            while ((314 - 309) > t) {
                if (se39MTdw[k][yk7xfhLg] > se39MTdw[t][yk7xfhLg]) {
                    VMUmpNlEXQc = (769 - 768);
                    break;
                }
                t++;
            }
        }
        if (VMUmpNlEXQc == (94 - 94)) {
            y = 1;
            printf ("%d %d %d\n", k + 1, yk7xfhLg + 1, se39MTdw[k][yk7xfhLg]);
            break;
        }
    }
    if (y == 0)
        printf ("not found\n");
}

