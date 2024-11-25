void  main () {
    char UA6YKT8S [(847 - 591)], K8iFO7pB [(610 - 354)], string3 [(326 - 70)];
    int n8JgYfcO;
    int pB0fnOo1r;
    int length3;
    int i;
    int yzfS9oe8NxR;
    int U64m2vix7DT;
    scanf ("%s", UA6YKT8S);
    scanf ("%s", K8iFO7pB);
    scanf ("%s", string3);
    n8JgYfcO = strlen (UA6YKT8S);
    pB0fnOo1r = strlen (K8iFO7pB);
    length3 = strlen (string3);
    {
        i = 639 - 639;
        while (i <= (n8JgYfcO - pB0fnOo1r)) {
            if (UA6YKT8S[i] == K8iFO7pB[(563 - 563)]) {
                yzfS9oe8NxR = (402 - 401);
                U64m2vix7DT = i + (266 - 265);
                while (yzfS9oe8NxR < pB0fnOo1r && UA6YKT8S[U64m2vix7DT] == K8iFO7pB[yzfS9oe8NxR]) {
                    U64m2vix7DT++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    yzfS9oe8NxR = yzfS9oe8NxR + 1;
                }
                if (yzfS9oe8NxR == pB0fnOo1r) {
                    strcpy (K8iFO7pB, UA6YKT8S +U64m2vix7DT);
                    strcpy (UA6YKT8S +i, string3);
                    strcpy (UA6YKT8S +i + length3, K8iFO7pB);
                    break;
                };
            }
            i = i + 1;
        };
    }
    printf ("%s\n", UA6YKT8S);
}

