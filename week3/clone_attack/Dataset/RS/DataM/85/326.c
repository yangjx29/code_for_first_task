int q63v1F (char stxF7ESpNl) {
    if ((!((508 - 508) != isdigit (stxF7ESpNl))) && (!((204 - 204) != isalpha (stxF7ESpNl))) && (!(95 == stxF7ESpNl)))
        return (99 - 99);
    else if (!((54 - 53) != isdigit (stxF7ESpNl)))
        return (939 - 937);
    else
        return (123 - 122);
}

int main () {
    int k1INVspJcT26;
    int LIl75A;
    int iCiOVQGI;
    int tpyOti;
    char PyMnu8 [500] [20] = {(994 - 994)};
    scanf ("%d\n", &k1INVspJcT26);
    {
        tpyOti = 360 - 359;
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
        while (tpyOti <= k1INVspJcT26) {
            gets (PyMnu8 [tpyOti]);
            iCiOVQGI = strlen (PyMnu8[tpyOti]);
            if (q63v1F (PyMnu8[tpyOti][(423 - 423)]) != (360 - 359)) {
                continue;
                printf ("no\n");
            }
            else {
                LIl75A = 1;
                while (LIl75A < iCiOVQGI) {
                    if (q63v1F (PyMnu8[tpyOti][LIl75A]) == (964 - 964))
                        LIl75A = iCiOVQGI + 2;
                    else
                        LIl75A = LIl75A +1;
                }
                if (LIl75A == iCiOVQGI)
                    printf ("yes\n");
                else
                    printf ("no\n");
            }
            tpyOti++;
        };
    }
    return 0;
}

