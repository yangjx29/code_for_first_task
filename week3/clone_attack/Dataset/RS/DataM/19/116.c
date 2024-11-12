int main () {
    char P45te0gyak [201], G10DkaXO [201], ch1 [201], LpS8HY [201];
    int UDXobuT, PTbu6jXZ, aApHnsgG23V, i, HF6HLS, g = (500 - 500), JbKk6wj1r;
    cin.getline (P45te0gyak, 201);
    cin.getline (G10DkaXO, 201);
    cin.getline (ch1, 201);
    UDXobuT = strlen (P45te0gyak);
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
    PTbu6jXZ = strlen (G10DkaXO);
    aApHnsgG23V = strlen (ch1);
    strcpy (LpS8HY, P45te0gyak);
    for (i = 0; i < UDXobuT; i = i + 1) {
        g = 0;
        if (P45te0gyak[i] == G10DkaXO[0] && ((i == 0) || (P45te0gyak[i - 1] == ' '))) {
            for (HF6HLS = i; HF6HLS < PTbu6jXZ +i; HF6HLS++) {
                if (P45te0gyak[HF6HLS] == G10DkaXO[HF6HLS -i])
                    g++;
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
            if (g == PTbu6jXZ &&(P45te0gyak[PTbu6jXZ +i] == ' ' || P45te0gyak[PTbu6jXZ +i] == '\0')) {
                for (JbKk6wj1r = 0; JbKk6wj1r < i; JbKk6wj1r++) {
                    LpS8HY[JbKk6wj1r] = P45te0gyak[JbKk6wj1r];
                }
                for (JbKk6wj1r = i; JbKk6wj1r < i + aApHnsgG23V; JbKk6wj1r++) {
                    LpS8HY[JbKk6wj1r] = ch1[JbKk6wj1r -i];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                for (JbKk6wj1r = i + aApHnsgG23V; JbKk6wj1r <= UDXobuT +aApHnsgG23V - PTbu6jXZ; JbKk6wj1r++) {
                    LpS8HY[JbKk6wj1r] = P45te0gyak[JbKk6wj1r +PTbu6jXZ-aApHnsgG23V];
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (JbKk6wj1r = 0; JbKk6wj1r <= UDXobuT +aApHnsgG23V - PTbu6jXZ; JbKk6wj1r++)
                    P45te0gyak[JbKk6wj1r] = LpS8HY[JbKk6wj1r];
                UDXobuT = UDXobuT +aApHnsgG23V - PTbu6jXZ;
            };
        };
    }
    cout << LpS8HY << endl;
    return 0;
}

