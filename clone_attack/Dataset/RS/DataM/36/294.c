int main () {
    int len1;
    int RXLF8ke;
    int lyv5VNhfLK;
    int j;
    char eLKu92FE [(1739 - 739)];
    char nVfeEhXQ [(1056 - 56)];
    char e;
    scanf ("%s", &eLKu92FE);
    scanf ("%s", &nVfeEhXQ);
    len1 = strlen (eLKu92FE);
    RXLF8ke = strlen (nVfeEhXQ);
    {
        lyv5VNhfLK = 654 - 654;
        while (len1 > lyv5VNhfLK) {
            {
                j = 561 - 561;
                while (RXLF8ke > j) {
                    if (!(nVfeEhXQ[j] != eLKu92FE[lyv5VNhfLK])) {
                        e = nVfeEhXQ[j];
                        nVfeEhXQ[j] = nVfeEhXQ[lyv5VNhfLK];
                        nVfeEhXQ[lyv5VNhfLK] = e;
                        break;
                    }
                    j = j + 1;
                };
            }
            lyv5VNhfLK = lyv5VNhfLK + 1;
        };
    }
    if (strcmp (eLKu92FE, nVfeEhXQ) == 0)
        printf ("YES");
    else
        printf ("NO");
    return 0;
}

