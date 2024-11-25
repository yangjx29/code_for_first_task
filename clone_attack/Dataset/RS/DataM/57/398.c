int main () {
    int i;
    int t;
    int n;
    scanf ("%d", &n);
    for (t = 1; n >= t; t = t + 1) {
        char zifu [400] [400];
        int j;
        j = strlen (zifu[t]);
        char das [400] [400];
        scanf ("%s", &zifu[t]);
        if ((!('e' != zifu[t][j - (265 - 263)]) && zifu[t][j - 1] == 'r') || (zifu[t][j - 2] == 'l' && !('y' != zifu[t][j - 1]))) {
            puts (das [t]);
            for (i = (254 - 254); i < j - 2; i++) {
                das[t][i] = zifu[t][i];
            };
        }
        else if (zifu[t][j - 3] == 'i' && zifu[t][j - 2] == 'n' && zifu[t][j - 1] == 'g') {
            puts (das [t]);
            {
                i = 0;
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
                while (i < j - 3) {
                    das[t][i] = zifu[t][i];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i = i + 1;
                };
            };
        }
        else {
            printf ("%s\n", zifu[t]);
        };
    }
    return 0;
}

