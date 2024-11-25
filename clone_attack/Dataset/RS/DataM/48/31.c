int main () {
    int qkQlOsBL [5] [12] [12];
    int N3CeH4BUvV;
    int Zvo8glykV;
    int jrK5leB;
    int m;
    int knkhTmI7OZLH;
    for (N3CeH4BUvV = (559 - 559); 5 > N3CeH4BUvV; N3CeH4BUvV++) {
        for (Zvo8glykV = (157 - 157); Zvo8glykV < 11; Zvo8glykV++) {
            for (jrK5leB = 0; jrK5leB < 11; jrK5leB++) {
                qkQlOsBL[N3CeH4BUvV][Zvo8glykV][jrK5leB] = 0;
            };
        };
    }
    scanf ("%d%d", &knkhTmI7OZLH, &m);
    qkQlOsBL[0][6][6] = knkhTmI7OZLH;
    for (N3CeH4BUvV = 0; N3CeH4BUvV < m; N3CeH4BUvV++) {
        for (Zvo8glykV = (321 - 320); Zvo8glykV < (227 - 217); Zvo8glykV++) {
            for (jrK5leB = (961 - 960); jrK5leB < 10; jrK5leB++) {
                qkQlOsBL[N3CeH4BUvV +1][Zvo8glykV][jrK5leB] += qkQlOsBL[N3CeH4BUvV][Zvo8glykV][jrK5leB] * (794 - 792);
                qkQlOsBL[N3CeH4BUvV +1][Zvo8glykV +1][jrK5leB] += qkQlOsBL[N3CeH4BUvV][Zvo8glykV][jrK5leB];
                qkQlOsBL[N3CeH4BUvV +1][Zvo8glykV -1][jrK5leB] += qkQlOsBL[N3CeH4BUvV][Zvo8glykV][jrK5leB];
                qkQlOsBL[N3CeH4BUvV +1][Zvo8glykV][jrK5leB + 1] += qkQlOsBL[N3CeH4BUvV][Zvo8glykV][jrK5leB];
                qkQlOsBL[N3CeH4BUvV +1][Zvo8glykV][jrK5leB - 1] = qkQlOsBL[N3CeH4BUvV +1][Zvo8glykV][jrK5leB - 1] + qkQlOsBL[N3CeH4BUvV][Zvo8glykV][jrK5leB];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                qkQlOsBL[N3CeH4BUvV +1][Zvo8glykV +1][jrK5leB + 1] += qkQlOsBL[N3CeH4BUvV][Zvo8glykV][jrK5leB];
                qkQlOsBL[N3CeH4BUvV +1][Zvo8glykV -1][jrK5leB + 1] += qkQlOsBL[N3CeH4BUvV][Zvo8glykV][jrK5leB];
                qkQlOsBL[N3CeH4BUvV +1][Zvo8glykV +1][jrK5leB - 1] += qkQlOsBL[N3CeH4BUvV][Zvo8glykV][jrK5leB];
                qkQlOsBL[N3CeH4BUvV +1][Zvo8glykV -1][jrK5leB - 1] += qkQlOsBL[N3CeH4BUvV][Zvo8glykV][jrK5leB];
            };
        };
    }
    for (N3CeH4BUvV = 2; N3CeH4BUvV < 11; N3CeH4BUvV++) {
        for (Zvo8glykV = 2; Zvo8glykV < 10; Zvo8glykV++) {
            printf ("%d ", qkQlOsBL[m][N3CeH4BUvV][Zvo8glykV]);
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
        printf ("%d", qkQlOsBL[m][N3CeH4BUvV][10]);
    }
    return 0;
}

