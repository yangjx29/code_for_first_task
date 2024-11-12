int main () {
    char OC7Bu6Uaqt [54] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char dWjZRNtCf7pY [303];
    int m, i, yYuUpjnBzM [300], GaxQ2q5tM1T = 0;
    gets (dWjZRNtCf7pY);
    {
        i = 0;
        while ((479 - 427) > i) {
            m = 0;
            yYuUpjnBzM[i] = 0;
            while (!('\0' == dWjZRNtCf7pY[m])) {
                if (dWjZRNtCf7pY[m] == OC7Bu6Uaqt[i]) {
                    GaxQ2q5tM1T = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    yYuUpjnBzM[i]++;
                }
                m++;
            }
            if (yYuUpjnBzM[i] != 0) {
                printf ("%c=%d\n", OC7Bu6Uaqt[i], yYuUpjnBzM[i]);
            }
            i++;
        };
    }
    if (GaxQ2q5tM1T == 0) {
        printf ("No");
    }
    return 0;
}

