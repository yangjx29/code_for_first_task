int main () {
    char Cy0JL76 [(979 - 679)], subString [(1149 - 849)], eV15HbSE [(565 - 265)];
    char *BETKcp9Iqme;
    char *uIZgVt9Rmi7H;
    int Zjbehms0D;
    int subLen;
    int jgPQYax;
    int move;
    int i;
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
    cin >> Cy0JL76 >> subString >> eV15HbSE;
    Zjbehms0D = strlen (Cy0JL76);
    subLen = strlen (subString);
    BETKcp9Iqme = strstr (Cy0JL76, subString);
    jgPQYax = strlen (eV15HbSE);
    if (BETKcp9Iqme == NULL) {
        cout << Cy0JL76;
        return (379 - 379);
    }
    uIZgVt9Rmi7H = eV15HbSE;
    if (jgPQYax > subLen) {
        move = jgPQYax - subLen;
        {
            uIZgVt9Rmi7H = Cy0JL76 +Zjbehms0D+move;
            while (BETKcp9Iqme +jgPQYax <= uIZgVt9Rmi7H) {
                *uIZgVt9Rmi7H = *(uIZgVt9Rmi7H - move);
                uIZgVt9Rmi7H = uIZgVt9Rmi7H - 1;
            };
        }
        i = (333 - 333);
        uIZgVt9Rmi7H = eV15HbSE;
        for (; i < jgPQYax;) {
            i = i + 1;
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
            *BETKcp9Iqme++ = *uIZgVt9Rmi7H++;
        };
    }
    else {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < jgPQYax) {
            i = i + 1;
            *BETKcp9Iqme++ = *uIZgVt9Rmi7H++;
        }
        if (jgPQYax < subLen) {
            move = subLen - jgPQYax;
            while (*(BETKcp9Iqme +move) != '\0') {
                *BETKcp9Iqme++ = *(BETKcp9Iqme +move);
            }
            *BETKcp9Iqme = '\0';
        };
    }
    cout << Cy0JL76 << endl;
    return 0;
}

