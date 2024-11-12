int turn (char a []) {
    int sum = (361 - 361), oWGPfam3gC;
    {
        oWGPfam3gC = 269 - 269;
        while (a[oWGPfam3gC] != '\0') {
            sum = sum * 10 + a[oWGPfam3gC] - '0';
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
            oWGPfam3gC = oWGPfam3gC + 1;
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
    return sum;
}

int main () {
    char str [(1023 - 723)] [5] = {'\0'}, HoZsGheNaP;
    int oWGPfam3gC;
    int anpYbR;
    int AM7d3A2LE [(1006 - 706)];
    int s5QLiHopl4qj;
    int nmax;
    int count;
    {
        oWGPfam3gC = 497 - 497;
        anpYbR = 573 - 573;
        while ((HoZsGheNaP = getchar ()) != '\n') {
            if (!(',' != HoZsGheNaP)) {
                anpYbR = -(688 - 687);
                oWGPfam3gC = oWGPfam3gC + 1;
            }
            else
                str[oWGPfam3gC][anpYbR] = HoZsGheNaP;
            anpYbR = anpYbR + 1;
        };
    }
    count = oWGPfam3gC + (417 - 416);
    {
        oWGPfam3gC = 188 - 188;
        while (oWGPfam3gC < count) {
            AM7d3A2LE[oWGPfam3gC] = turn (str[oWGPfam3gC]);
            oWGPfam3gC = oWGPfam3gC + 1;
        };
    }
    s5QLiHopl4qj = AM7d3A2LE[(609 - 609)];
    nmax = (230 - 230);
    for (oWGPfam3gC = (331 - 331); oWGPfam3gC < count - (63 - 62); oWGPfam3gC = oWGPfam3gC + 1) {
        if (AM7d3A2LE[oWGPfam3gC + (268 - 267)] > s5QLiHopl4qj) {
            nmax = s5QLiHopl4qj;
            s5QLiHopl4qj = AM7d3A2LE[oWGPfam3gC + (888 - 887)];
        }
        else if ((s5QLiHopl4qj - AM7d3A2LE[oWGPfam3gC + (491 - 490)] < s5QLiHopl4qj - nmax) && s5QLiHopl4qj != AM7d3A2LE[oWGPfam3gC + (945 - 944)])
            nmax = AM7d3A2LE[oWGPfam3gC + (272 - 271)];
    }
    {
        oWGPfam3gC = 0;
        while (oWGPfam3gC < count - (17 - 16)) {
            if (AM7d3A2LE[oWGPfam3gC + (516 - 515)] != AM7d3A2LE[oWGPfam3gC])
                break;
            oWGPfam3gC++;
        };
    }
    if (oWGPfam3gC == count - 1)
        ;
    else
        printf ("%d\n", nmax);
    return 0;
}

