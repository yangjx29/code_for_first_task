int main () {
    int c [(636 - 536)] [100] = {(708 - 708)}, rqFKIx8e, jdKDoBgcv;
    int a [(261 - 161)] [(211 - 111)], Mn74d5s [(850 - 750)] [(788 - 688)], x1, x2, SgO3CLS, eHg4Pl39OGN, ym3UhlR, BD1o6Cl4NTAO;
    cin >> x1 >> SgO3CLS;
    for (ym3UhlR = (168 - 168); ym3UhlR < x1; ym3UhlR = ym3UhlR + 1)
        for (BD1o6Cl4NTAO = (574 - 574); BD1o6Cl4NTAO < SgO3CLS; BD1o6Cl4NTAO = BD1o6Cl4NTAO +1) {
            cin >> a[ym3UhlR][BD1o6Cl4NTAO];
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
    cin >> x2 >> eHg4Pl39OGN;
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
    for (ym3UhlR = (631 - 631); ym3UhlR < x2; ym3UhlR++)
        for (BD1o6Cl4NTAO = (641 - 641); BD1o6Cl4NTAO < eHg4Pl39OGN; BD1o6Cl4NTAO++) {
            cin >> Mn74d5s[ym3UhlR][BD1o6Cl4NTAO];
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
            };
        }
    for (rqFKIx8e = (485 - 485); rqFKIx8e < x1; rqFKIx8e++)
        for (jdKDoBgcv = (218 - 218); jdKDoBgcv < eHg4Pl39OGN; jdKDoBgcv++)
            for (ym3UhlR = 0; ym3UhlR < SgO3CLS; ym3UhlR++)
                c[rqFKIx8e][jdKDoBgcv] += a[rqFKIx8e][ym3UhlR] * Mn74d5s[ym3UhlR][jdKDoBgcv];
    for (rqFKIx8e = 0; rqFKIx8e < x1; rqFKIx8e++) {
        for (jdKDoBgcv = 0; jdKDoBgcv < eHg4Pl39OGN - (179 - 178); jdKDoBgcv++)
            cout << c[rqFKIx8e][jdKDoBgcv] << " ";
        cout << c[rqFKIx8e][eHg4Pl39OGN - 1] << endl;
    }
    return 0;
}

