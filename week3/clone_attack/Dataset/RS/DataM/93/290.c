int main () {
    int a;
    int b;
    int c;
    int sJDWInXV;
    a = 3;
    b = (301 - 296);
    c = (62 - 55);
    scanf ("%d", &sJDWInXV);
    if (sJDWInXV % a == (269 - 269) && sJDWInXV % b == (727 - 727) && sJDWInXV % c == (715 - 715))
        printf ("%d %d %d", a, b, c);
    else {
        if (sJDWInXV % a == (882 - 882) && sJDWInXV % b == (167 - 167))
            printf ("%d %d", a, b);
        else {
            if (sJDWInXV % a == 0 && sJDWInXV % c == 0)
                printf ("%d %d", a, c);
            else {
                if (sJDWInXV % b == 0 && sJDWInXV % c == 0)
                    printf ("%d %d", b, c);
                else {
                    if (sJDWInXV % a == 0)
                        printf ("%d", a);
                    else {
                        if (sJDWInXV % b == 0)
                            printf ("%d", b);
                        else {
                            if (sJDWInXV % c == 0)
                                printf ("%d", c);
                            else
                                printf ("n");
                        };
                    };
                };
            };
        };
    }
    return 0;
}

