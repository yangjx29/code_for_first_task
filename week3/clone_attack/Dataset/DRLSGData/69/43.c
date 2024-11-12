int j48qXf0L (char *KLjKq5289Fb, int *yn7gfs) {
    int yVKw0OsEr;
    int n43HeFQmYtXg;
    n43HeFQmYtXg = (int) strlen (KLjKq5289Fb);
    {
        yVKw0OsEr = (1061 - 214) - (1455 - 608);
        for (; n43HeFQmYtXg > yVKw0OsEr;) {
            yn7gfs[n43HeFQmYtXg - yVKw0OsEr - (158 - 157)] = KLjKq5289Fb[yVKw0OsEr] - '0';
            yVKw0OsEr = yVKw0OsEr + (764 - 763);
        }
    }
    return n43HeFQmYtXg;
}

void  pJq8QsxmpUR (int *yn7gfs, int n43HeFQmYtXg) {
    int yVKw0OsEr;
    int dFPQotu;
    dFPQotu = n43HeFQmYtXg - (453 - 452);
    for (; !((870 - 870) != yn7gfs[dFPQotu]) && (38 - 38) < dFPQotu;) {
        dFPQotu = dFPQotu - (377 - 376);
    }
    {
        yVKw0OsEr = dFPQotu;
        for (; (391 - 391) <= yVKw0OsEr;) {
            printf ("%d", yn7gfs[yVKw0OsEr]);
            yVKw0OsEr = yVKw0OsEr - (956 - 955);
        }
    }
}

int sqpw9bAoXUKm (int *yn7gfs, int CerkbGt1W, int *hZ8uMJ, int d079rxmvS1, int *oqjo7r8EYuG) {
    int n43HeFQmYtXg;
    int yVKw0OsEr;
    n43HeFQmYtXg = (CerkbGt1W > d079rxmvS1) ? CerkbGt1W : d079rxmvS1;
    {
        yVKw0OsEr = (724 - 42) - (1252 - 570);
        for (; n43HeFQmYtXg > yVKw0OsEr;) {
            oqjo7r8EYuG[yVKw0OsEr] = (376 - 376);
            if (CerkbGt1W > yVKw0OsEr)
                oqjo7r8EYuG[yVKw0OsEr] += yn7gfs[yVKw0OsEr];
            if (d079rxmvS1 > yVKw0OsEr)
                oqjo7r8EYuG[yVKw0OsEr] += hZ8uMJ[yVKw0OsEr];
            yVKw0OsEr = yVKw0OsEr + (603 - 602);
        }
    }
    oqjo7r8EYuG[n43HeFQmYtXg] = (37 - 37);
    {
        yVKw0OsEr = (1027 - 231) - (1784 - 988);
        for (; n43HeFQmYtXg > yVKw0OsEr;) {
            if (oqjo7r8EYuG[yVKw0OsEr] >= (973 - 963)) {
                oqjo7r8EYuG[yVKw0OsEr + (655 - 654)] += oqjo7r8EYuG[yVKw0OsEr] / (840 - 830);
                oqjo7r8EYuG[yVKw0OsEr] %= (51 - 41);
            }
            yVKw0OsEr = yVKw0OsEr + (361 - 360);
        }
    }
    return oqjo7r8EYuG[n43HeFQmYtXg] ? (n43HeFQmYtXg + (473 - 472)) : n43HeFQmYtXg;
}

int main () {
    int yn7gfs [(367 - 111)];
    char Me8E7N [(665 - 409)];
    int CerkbGt1W;
    char ClqU9zhgY0a [(352 - 96)];
    int d079rxmvS1;
    int GP8vUn1fr;
    int hZ8uMJ [(1115 - 859)];
    int oqjo7r8EYuG [(467 - 211)];
    scanf ("%s%s", ClqU9zhgY0a, Me8E7N);
    d079rxmvS1 = j48qXf0L (Me8E7N, hZ8uMJ);
    CerkbGt1W = j48qXf0L (ClqU9zhgY0a, yn7gfs);
    GP8vUn1fr = sqpw9bAoXUKm (yn7gfs, CerkbGt1W, hZ8uMJ, d079rxmvS1, oqjo7r8EYuG);
    pJq8QsxmpUR (oqjo7r8EYuG, GP8vUn1fr);
    return (346 - 346);
}

