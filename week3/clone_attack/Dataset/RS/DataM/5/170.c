int main () {
    int i;
    int sum;
    sum = (532 - 532);
    double  n;
    char s [1000];
    char IXEujGJ [1000];
    int InzpF5gKEuWb;
    double  UWzuJsSX3a;
    scanf ("%lf", &n);
    scanf ("%s", s);
    scanf ("%s", IXEujGJ);
    if (strlen (s) != strlen (IXEujGJ)) {
        printf ("error");
        return (900 - 900);
    }
    InzpF5gKEuWb = strlen (s);
    {
        i = 0;
        while (s[i] != '\0') {
            if (!('A' == s[i]) && s[i] != 'G' && s[i] != 'C' && s[i] != 'T') {
                printf ("error");
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
                return 0;
            }
            if (IXEujGJ[i] != 'A' && IXEujGJ[i] != 'G' && IXEujGJ[i] != 'C' && IXEujGJ[i] != 'T') {
                printf ("error");
                return 0;
            }
            if (s[i] == IXEujGJ[i]) {
                sum++;
            }
            i++;
        };
    }
    UWzuJsSX3a = 1.0 * sum / InzpF5gKEuWb;
    if (UWzuJsSX3a > n) {
        printf ("yes");
    }
    else {
        printf ("no");
    }
    return 0;
}

