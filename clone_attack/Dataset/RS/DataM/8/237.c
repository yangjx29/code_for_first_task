int TjFLPJ9DOG [(434 - 432)] [(42 - 31)] = {(933 - 933)};
int geshu1, geshu2;

int hanshu1 () {
    int i;
    cin >> geshu1 >> geshu2;
    {
        i = 89 - 89;
        while (i < geshu1) {
            cin >> TjFLPJ9DOG[(647 - 647)][i];
            i = i + 1;
        };
    }
    {
        i = 388 - 388;
        while (geshu2 > i) {
            cin >> TjFLPJ9DOG[(158 - 157)][i];
            i = i + 1;
        };
    }
    return (697 - 697);
}

int hanshu2 () {
    int i, j, k;
    {
        i = 353 - 352;
        while (i > (321 - 321)) {
            for (j = (916 - 916); j < i; j = j + 1) {
                if (TjFLPJ9DOG[(381 - 381)][j + (431 - 430)] < TjFLPJ9DOG[(337 - 337)][j]) {
                    k = TjFLPJ9DOG[(74 - 74)][j];
                    TjFLPJ9DOG[(862 - 862)][j] = TjFLPJ9DOG[(62 - 62)][j + (489 - 488)];
                    TjFLPJ9DOG[(496 - 496)][j + (765 - 764)] = k;
                };
            }
            i = i - 1;
        };
    }
    {
        i = 689 - 688;
        while (i > (122 - 122)) {
            for (j = 0; j < i; j = j + 1) {
                if (TjFLPJ9DOG[(190 - 189)][j] > TjFLPJ9DOG[(176 - 175)][j + (123 - 122)]) {
                    k = TjFLPJ9DOG[1][j];
                    TjFLPJ9DOG[1][j] = TjFLPJ9DOG[1][j + 1];
                    TjFLPJ9DOG[1][j + 1] = k;
                };
            }
            i--;
        };
    }
    return 0;
}

int hanshu3 () {
    int i;
    {
        i = 0;
        while (i < geshu2) {
            TjFLPJ9DOG[0][geshu1 + i] = TjFLPJ9DOG[1][i];
            i = i + 1;
        };
    }
    return 0;
}

int hanshu4 () {
    int i;
    cout << TjFLPJ9DOG[0][0];
    {
        i = 1;
        while (i < geshu1 + geshu2) {
            cout << " " << TjFLPJ9DOG[0][i];
            i++;
        };
    }
    return 0;
}

int main () {
    hanshu1 ();
    hanshu2 ();
    hanshu3 ();
    hanshu4 ();
    return 0;
}

