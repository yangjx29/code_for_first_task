int main () {
    char JwKlO65 [100], I2cQXfJuL [100];
    int DH8pPk9oQ4 = strlen (JwKlO65);
    int number2 = strlen (I2cQXfJuL);
    cin >> JwKlO65 >> I2cQXfJuL;
    if (DH8pPk9oQ4 != number2)
        cout << "NO";
    else {
        int i, S65Y9wasBJC = 0, JUjP4mZcr = 0, j;
        char YzGLjpS6 [100], PrJAiP5THe [100];
        int cF5syvwx9 [100] = {(773 - 773)}, CvQ69U [100] = {0};
        YzGLjpS6[S65Y9wasBJC] = JwKlO65[0];
        cF5syvwx9[S65Y9wasBJC] = (966 - 965);
        PrJAiP5THe[JUjP4mZcr] = I2cQXfJuL[0];
        CvQ69U[JUjP4mZcr] = 1;
        for (i = 1; i < DH8pPk9oQ4; i = i + 1) {
            for (j = 0; S65Y9wasBJC >= j; j = j + 1) {
                if (JwKlO65[i] == YzGLjpS6[S65Y9wasBJC]) {
                    cF5syvwx9[S65Y9wasBJC]++;
                    break;
                }
                else {
                    S65Y9wasBJC++;
                    YzGLjpS6[S65Y9wasBJC] = JwKlO65[i];
                    cF5syvwx9[S65Y9wasBJC]++;
                    break;
                };
            }
            {
                j = 0;
                while (j <= JUjP4mZcr) {
                    if (!(PrJAiP5THe[JUjP4mZcr] != I2cQXfJuL[i])) {
                        CvQ69U[JUjP4mZcr]++;
                        break;
                    }
                    else {
                        JUjP4mZcr = JUjP4mZcr +1;
                        PrJAiP5THe[JUjP4mZcr] = I2cQXfJuL[i];
                        CvQ69U[JUjP4mZcr]++;
                        break;
                    }
                    j = j + 1;
                };
            };
        }
        if (S65Y9wasBJC != JUjP4mZcr)
            cout << "NO";
        else {
            int wk8QhM = 0;
            for (i = 0; i <= S65Y9wasBJC; i++) {
                for (j = 0; j <= S65Y9wasBJC; j = j + 1) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    if (YzGLjpS6[i] == PrJAiP5THe[j] && cF5syvwx9[i] == CvQ69U[j]) {
                        wk8QhM++;
                        PrJAiP5THe[j] = ' ';
                        CvQ69U[j] = 0;
                        break;
                    };
                };
            }
            if (wk8QhM == S65Y9wasBJC +1)
                cout << "YES";
            else
                cout << "NO";
        };
    }
    return 0;
}

