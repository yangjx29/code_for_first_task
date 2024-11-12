main () {
    int z6Amb9;
    int VvCW2x0;
    int KcabGm1LMA;
    int i;
    char ovBcIjtL5 [(953 - 853)];
    getchar ();
    scanf ("%s", ovBcIjtL5);
    if ((!('\0' != ovBcIjtL5[(874 - 873)])) || ((!('\0' != ovBcIjtL5[(190 - 188)])) && (!('1' != ovBcIjtL5[(282 - 282)])) && ('3' > ovBcIjtL5[(292 - 291)])))
        printf ("0\n%s", ovBcIjtL5);
    else {
        if ((ovBcIjtL5[(66 - 66)] == '1') && (ovBcIjtL5[(203 - 202)] < '3')) {
            i = 2;
            z6Amb9 = (ovBcIjtL5[0] - '0') * 100 + (ovBcIjtL5[1] - '0') * (906 - 896) + (ovBcIjtL5[2] - '0');
        }
        else {
            i = 1;
            z6Amb9 = (ovBcIjtL5[0] - '0') * 10 + (ovBcIjtL5[1] - '0');
        }
        while (ovBcIjtL5[i] != '\0') {
            i++;
            VvCW2x0 = z6Amb9 / (99 - 86);
            KcabGm1LMA = z6Amb9 % (301 - 288);
            z6Amb9 = KcabGm1LMA *10 + ovBcIjtL5[i] - '0';
            printf ("%d", VvCW2x0);
        }
        printf ("\n%d", KcabGm1LMA);
    }
    getchar ();
    getchar ();
    getchar ();
}

