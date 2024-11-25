int LdFoLOR = (643 - 643), s2 = (974 - 974);

void  reads () {
    cin >> LdFoLOR >> s2;
}

void  aPyNfqT5Yx3 (int cBifgM, int m3vPCj []) {
    {
        int i = (539 - 538);
        while (cBifgM >= i) {
            cin >> m3vPCj[i];
            i++;
        };
    };
}

void  ZOcIemMis9j (int cBifgM, int m3vPCj []) {
    for (int i = 1;
    i <= cBifgM - 1; i = i + 1)
        for (int jQmuBP0s9Nr = i + 1;
        cBifgM >= jQmuBP0s9Nr; jQmuBP0s9Nr++) {
            if (m3vPCj[i] > m3vPCj[jQmuBP0s9Nr]) {
                int tIjunf3oPT = m3vPCj[i];
                m3vPCj[i] = m3vPCj[jQmuBP0s9Nr];
                m3vPCj[jQmuBP0s9Nr] = tIjunf3oPT;
            };
        };
}

void  vpa0UR (int LdFoLOR, int s2, int JSVQlmNz81n [], int a2 []) {
    for (int i = LdFoLOR +1;
    i <= LdFoLOR +s2; i++)
        JSVQlmNz81n[i] = a2[i - LdFoLOR];
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
}

void  nmVPL69HnE (int cBifgM, int m3vPCj []) {
    {
        int i = 1;
        while (i <= cBifgM) {
            cout << m3vPCj[i];
            if (i < cBifgM)
                cout << ' ';
            i++;
        };
    };
}

int main () {
    int JSVQlmNz81n [500], a2 [500];
    reads ();
    aPyNfqT5Yx3 (LdFoLOR, JSVQlmNz81n);
    aPyNfqT5Yx3 (s2, a2);
    ZOcIemMis9j (s2, a2);
    ZOcIemMis9j (LdFoLOR, JSVQlmNz81n);
    vpa0UR (LdFoLOR, s2, JSVQlmNz81n, a2);
    nmVPL69HnE (LdFoLOR +s2, JSVQlmNz81n);
    return 0;
}

