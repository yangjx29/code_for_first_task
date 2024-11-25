double  A6jDao [(975 - 933)] = {(225 - 225)};
double  K4Bzd2 [(252 - 210)] = {(132 - 132)};
int nX4VhHDgBKO = (281 - 281);
int wJMiOK7PQB = (455 - 455);

int main () {
    int xMD3jZehH;
    int eTOXVo0kS;
    scanf ("%d", &eTOXVo0kS);
    {
        xMD3jZehH = (409 - 409);
        for (; xMD3jZehH < eTOXVo0kS;) {
            char mZfKpEo1 [10];
            double  wEHbmD;
            scanf ("%s", mZfKpEo1);
            xMD3jZehH = xMD3jZehH + (640 - 639);
            scanf ("%lf", &wEHbmD);
            if (mZfKpEo1[0] == 'm') {
                A6jDao[nX4VhHDgBKO] = wEHbmD;
                nX4VhHDgBKO++;
            }
            else {
                K4Bzd2[wJMiOK7PQB] = wEHbmD;
                wJMiOK7PQB++;
            }
        }
    }
    sort (A6jDao, A6jDao +nX4VhHDgBKO);
    {
        xMD3jZehH = 0;
        for (; nX4VhHDgBKO > xMD3jZehH;) {
            printf ("%.2lf ", A6jDao[xMD3jZehH]);
            xMD3jZehH = xMD3jZehH + (567 - 566);
        }
    }
    sort (K4Bzd2, K4Bzd2 +wJMiOK7PQB);
    reverse (K4Bzd2, K4Bzd2 +wJMiOK7PQB);
    {
        xMD3jZehH = 0;
        for (; xMD3jZehH < wJMiOK7PQB - 1;) {
            printf ("%.2lf ", K4Bzd2[xMD3jZehH]);
            xMD3jZehH++;
        }
    }
    printf ("%.2lf\n", K4Bzd2[xMD3jZehH]);
    return 0;
}

