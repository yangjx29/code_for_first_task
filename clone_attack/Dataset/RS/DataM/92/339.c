int main () {
    int saima (int n, int nWNm5rZTnz [(1514 - 514)], int dDkgoluc [1000]);
    int n, goYSU6, j;
    int dDkgoluc [1000] = {0};
    int nWNm5rZTnz [1000] = {0};
    scanf ("%d", &n);
    {
        goYSU6 = 0;
        while (n != 0) {
            {
                j = 0;
                while (j < n) {
                    scanf ("%d", &dDkgoluc[j]);
                    j = j + 1;
                };
            }
            for (j = 0; j < n; j = j + 1) {
                scanf ("%d", &nWNm5rZTnz[j]);
            }
            printf ("%d\n", saima (n, nWNm5rZTnz, dDkgoluc));
            scanf ("%d", &n);
            goYSU6 = goYSU6 + 1;
        };
    }
    return 0;
}

int saima (int n, int nWNm5rZTnz [1000], int dDkgoluc [1000]) {
    void  seq (int n, int wNkaEHowX [1000]);
    void  del (int goYSU6, int n, int wNkaEHowX [1000]);
    int goYSU6, mx4wE90b1F7D;
    seq (n, dDkgoluc);
    seq (n, nWNm5rZTnz);
    mx4wE90b1F7D = 0;
    while (n > 0) {
        if ((dDkgoluc[n - (366 - 365)] != nWNm5rZTnz[n - 1]) && (n > 0)) {
            if (dDkgoluc[n - 1] > nWNm5rZTnz[n - 1]) {
                mx4wE90b1F7D = mx4wE90b1F7D + 200;
                del (n - 1, n, dDkgoluc);
                del (n - 1, n, nWNm5rZTnz);
                n = n - 1;
            }
            else {
                mx4wE90b1F7D = mx4wE90b1F7D - 200;
                del (n - 1, n, dDkgoluc);
                del (0, n, nWNm5rZTnz);
                n = n - 1;
            };
        }
        if ((dDkgoluc[0] != nWNm5rZTnz[0]) && (n > 0)) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (dDkgoluc[0] > nWNm5rZTnz[0]) {
                del (0, n, dDkgoluc);
                mx4wE90b1F7D = mx4wE90b1F7D + 200;
                del (0, n, nWNm5rZTnz);
                n = n - 1;
            }
            else {
                mx4wE90b1F7D = mx4wE90b1F7D - 200;
                del (n - 1, n, dDkgoluc);
                del (0, n, nWNm5rZTnz);
                n = n - 1;
            };
        }
        if ((dDkgoluc[0] == nWNm5rZTnz[0]) && (dDkgoluc[n - 1] == nWNm5rZTnz[n - 1]) && (n > 0)) {
            if (dDkgoluc[n - 1] < nWNm5rZTnz[0]) {
                mx4wE90b1F7D = mx4wE90b1F7D - 200;
            }
            del (n - 1, n, dDkgoluc);
            del (0, n, nWNm5rZTnz);
            n = n - 1;
        };
    }
    return (mx4wE90b1F7D);
}

void  seq (int n, int wNkaEHowX [1000]) {
    int goYSU6, j, temp;
    for (goYSU6 = 0; goYSU6 < n; goYSU6 = goYSU6 + 1) {
        j = 0;
        while (j < n - 1 - goYSU6) {
            if (wNkaEHowX[j] < wNkaEHowX[j + 1]) {
                temp = wNkaEHowX[j];
                wNkaEHowX[j] = wNkaEHowX[j + 1];
                wNkaEHowX[j + 1] = temp;
            }
            j = j + 1;
        };
    };
}

void  del (int goYSU6, int n, int wNkaEHowX [1000]) {
    int j;
    for (j = goYSU6; j < n; j++) {
        wNkaEHowX[j] = wNkaEHowX[j + 1];
    };
}

