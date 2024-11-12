int main () {
    int U0it4lI, i, c, klsjy6, AzGLWX5DZ = 0, duan = 51, aqGkBwE, jBuzhk1We7;
    char word [50] [51];
    for (U0it4lI = 0;; U0it4lI++) {
        for (jBuzhk1We7 = 0;; jBuzhk1We7 = jBuzhk1We7 + 1) {
            scanf ("%c", &word[U0it4lI][jBuzhk1We7]);
            if (word[U0it4lI][jBuzhk1We7] == 32)
                break;
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
            if (word[U0it4lI][jBuzhk1We7] == 10)
                goto loop;
        };
    }
loop :
    for (i = 0; i <= U0it4lI; i = i + 1) {
        aqGkBwE = 0;
        for (jBuzhk1We7 = 0;; jBuzhk1We7++) {
            if (word[i][jBuzhk1We7] == 32)
                break;
            if (!(10 != word[i][jBuzhk1We7]))
                break;
            aqGkBwE = aqGkBwE + 1;
        }
        if (aqGkBwE < duan) {
            klsjy6 = i;
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
            duan = aqGkBwE;
        }
        if (aqGkBwE > AzGLWX5DZ) {
            c = i;
            AzGLWX5DZ = aqGkBwE;
        };
    }
    for (i = 0;; i = i + 1) {
        if (word[c][i] == 32 || word[c][i] == 10)
            break;
        printf ("%c", word[c][i]);
    }
    for (i = 0;; i++) {
        if (word[klsjy6][i] == 32 || word[klsjy6][i] == 10)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%c", word[klsjy6][i]);
    }
    printf ("\n");
}

