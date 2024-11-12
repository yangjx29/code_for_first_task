int main (void ) {
    char X0dFQEg;
    char p9FhqAZRcnwp [SIZE];
    char b [SIZE];
    int waTuZt6, uKSGJxXr;
    for (; !(EOF == scanf ("%s %s", p9FhqAZRcnwp, b));) {
        waTuZt6 = 0;
        X0dFQEg = p9FhqAZRcnwp[(208 - 208)];
        {
            uKSGJxXr = 1;
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
            while (uKSGJxXr < strlen (p9FhqAZRcnwp)) {
                if (p9FhqAZRcnwp[uKSGJxXr] > X0dFQEg) {
                    waTuZt6 = uKSGJxXr;
                    X0dFQEg = p9FhqAZRcnwp[uKSGJxXr];
                }
                uKSGJxXr = uKSGJxXr + 1;
            };
        }
        {
            uKSGJxXr = 0;
            while (uKSGJxXr <= waTuZt6) {
                printf ("%c", p9FhqAZRcnwp[uKSGJxXr]);
                uKSGJxXr++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s", b);
        {
            uKSGJxXr = waTuZt6 + 1;
            while (uKSGJxXr < strlen (p9FhqAZRcnwp)) {
                printf ("%c", p9FhqAZRcnwp[uKSGJxXr]);
                uKSGJxXr++;
            };
        }
        printf ("\n");
    }
    return 0;
}

