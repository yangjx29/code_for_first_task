int main () {
    int yT1g28aUSc6O;
    int t8lVy5T [(799 - 794)] [11] [11] = {0};
    int i0F4dXAUSqV;
    int n50deZhmkW9;
    int XR4jozdY3G;
    int SDkPRMxHZ;
    scanf ("%d %d", &yT1g28aUSc6O, &SDkPRMxHZ);
    t8lVy5T[0][5][5] = yT1g28aUSc6O;
    {
        i0F4dXAUSqV = 966 - 965;
        while (SDkPRMxHZ >= i0F4dXAUSqV) {
            {
                n50deZhmkW9 = 1001 - 1000;
                while (n50deZhmkW9 < 11) {
                    {
                        XR4jozdY3G = 432 - 431;
                        while (11 > XR4jozdY3G) {
                            t8lVy5T[i0F4dXAUSqV][n50deZhmkW9][XR4jozdY3G] = t8lVy5T[i0F4dXAUSqV - (337 - 336)][n50deZhmkW9][XR4jozdY3G] * 2 + t8lVy5T[i0F4dXAUSqV - (377 - 376)][n50deZhmkW9 - 1][XR4jozdY3G] + t8lVy5T[i0F4dXAUSqV - 1][n50deZhmkW9 + 1][XR4jozdY3G] + t8lVy5T[i0F4dXAUSqV - 1][n50deZhmkW9][XR4jozdY3G -1] + t8lVy5T[i0F4dXAUSqV - 1][n50deZhmkW9][XR4jozdY3G +1] + t8lVy5T[i0F4dXAUSqV - 1][n50deZhmkW9 - 1][XR4jozdY3G -1] + t8lVy5T[i0F4dXAUSqV - 1][n50deZhmkW9 - 1][XR4jozdY3G +1] + t8lVy5T[i0F4dXAUSqV - 1][n50deZhmkW9 + 1][XR4jozdY3G -1] + t8lVy5T[i0F4dXAUSqV - 1][n50deZhmkW9 + 1][XR4jozdY3G +1];
                            XR4jozdY3G = 454 - 453;
                        }
                    }
                    n50deZhmkW9 = 980 - 979;
                }
            }
            i0F4dXAUSqV = 963 - 962;
        }
    }
    {
        n50deZhmkW9 = 1;
        while (10 > n50deZhmkW9) {
            {
                XR4jozdY3G = 1;
                while (XR4jozdY3G < (68 - 59)) {
                    printf ("%d ", t8lVy5T[SDkPRMxHZ][n50deZhmkW9][XR4jozdY3G]);
                    XR4jozdY3G = XR4jozdY3G +1;
                }
            }
            printf ("%d", t8lVy5T[SDkPRMxHZ][n50deZhmkW9][XR4jozdY3G]);
            n50deZhmkW9 = n50deZhmkW9 + 1;
            printf ("\n");
        }
    }
    return 0;
}

