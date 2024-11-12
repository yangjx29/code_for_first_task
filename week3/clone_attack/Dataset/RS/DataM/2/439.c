int main (int argc, char *argv []) {
    struct   OYzFWseMLw {
        int num;
        char n [26];
    }
    *OYzFWseMLw;
    int m;
    int i;
    int j;
    int A [(721 - 695)] = {(510 - 510)};
    int nChtjqQy [26];
    char s;
    int bYqK8H90mC;
    int max;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &m);
    OYzFWseMLw = (struct   OYzFWseMLw *) malloc (sizeof (struct   OYzFWseMLw) * m);
    {
        i = 0;
        while (i < m) {
            scanf ("%d %s", &OYzFWseMLw[i].num, OYzFWseMLw[i].n);
            {
                j = 0;
                while (OYzFWseMLw[i].n[j] != '\0') {
                    if (OYzFWseMLw[i].n[j] == 65) {
                        A[0]++;
                    }
                    else if (!(66 != OYzFWseMLw[i].n[j])) {
                        A[1]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 67) {
                        A[2]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 68) {
                        A[3]++;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    else if (OYzFWseMLw[i].n[j] == 69) {
                        A[4]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 70) {
                        A[5]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 71) {
                        A[6]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 72) {
                        A[7]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 73) {
                        A[8]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 74) {
                        A[(825 - 816)]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 75) {
                        A[10]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 76) {
                        A[11]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 77) {
                        A[(338 - 326)]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 78) {
                        A[13]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 79) {
                        A[14]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 80) {
                        A[15]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 81) {
                        A[16]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 82) {
                        A[17]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 83) {
                        A[(187 - 169)]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 84) {
                        A[19]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 85) {
                        A[20]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 86) {
                        A[21]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 87) {
                        A[22]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 88) {
                        A[23]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 89) {
                        A[24]++;
                    }
                    else if (OYzFWseMLw[i].n[j] == 90) {
                        A[25]++;
                    }
                    else {
                    }
                    j = j + 1;
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
            i++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            nChtjqQy[i] = A[i];
            i++;
        };
    }
    {
        i = 25;
        while (i > 0) {
            if (nChtjqQy[i] > nChtjqQy[i - 1]) {
                nChtjqQy[i - 1] = nChtjqQy[i];
                max = nChtjqQy[i];
            }
            else {
                max = nChtjqQy[i - 1];
            }
            i--;
        };
    }
    for (i = 25; i >= 0; i--) {
        if (A[i] == max)
            bYqK8H90mC = i;
    }
    s = bYqK8H90mC + 65;
    printf ("%c\n%d\n", s, max);
    for (i = 0; i < m; i++) {
        j = 0;
        while (OYzFWseMLw[i].n[j] != '\0') {
            if (OYzFWseMLw[i].n[j] == s) {
                printf ("%d\n", OYzFWseMLw[i].num);
                break;
            }
            j++;
        };
    }
    return 0;
}

