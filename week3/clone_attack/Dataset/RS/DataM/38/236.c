int main () {
    double  pl4os6HPcbCk [100] [100], OOpNoUheI;
    int n, A4n3hDjf [100];
    cin >> n;
    {
        int lpnPdXx;
        lpnPdXx = (404 - 404);
        while (n > lpnPdXx) {
            cin >> A4n3hDjf[lpnPdXx];
            for (int QbpyimgIl = 0;
            A4n3hDjf[lpnPdXx] > QbpyimgIl; QbpyimgIl++)
                cin >> pl4os6HPcbCk[lpnPdXx][QbpyimgIl];
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
            lpnPdXx++;
        };
    }
    {
        int lpnPdXx = 0;
        while (lpnPdXx < n) {
            double  zEg9Dx = 0.0, sum = 0.0, abIqkph72Ey;
            {
                int QbpyimgIl = 0;
                while (QbpyimgIl < A4n3hDjf[lpnPdXx]) {
                    zEg9Dx = zEg9Dx + pl4os6HPcbCk[lpnPdXx][QbpyimgIl];
                    QbpyimgIl++;
                };
            }
            OOpNoUheI = zEg9Dx / A4n3hDjf[lpnPdXx];
            {
                int QbpyimgIl = 0;
                while (QbpyimgIl < A4n3hDjf[lpnPdXx]) {
                    sum = sum + (pl4os6HPcbCk[lpnPdXx][QbpyimgIl] - OOpNoUheI) * (pl4os6HPcbCk[lpnPdXx][QbpyimgIl] - OOpNoUheI);
                    QbpyimgIl++;
                };
            }
            sum = sum / A4n3hDjf[lpnPdXx];
            lpnPdXx++;
            abIqkph72Ey = sqrt (sum);
            cout << fixed << setprecision (5) << abIqkph72Ey << endl;
        };
    }
    return 0;
}

