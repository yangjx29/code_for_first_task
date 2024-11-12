main () {
    int b, c, d, i;
    char Y9uWaS6 [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s", Y9uWaS6);
    if ((!('\0' != Y9uWaS6[(600 - 599)])) || ((!('\0' != Y9uWaS6[2])) && (!('1' != Y9uWaS6[0])) && ('3' > Y9uWaS6[1])))
        printf ("0\n%s", Y9uWaS6);
    else {
        if ((Y9uWaS6[0] == '1') && (Y9uWaS6[1] < '3')) {
            b = (Y9uWaS6[0] - '0') * 100 + (Y9uWaS6[1] - '0') * 10 + (Y9uWaS6[2] - '0');
            i = 2;
        }
        else {
            b = (Y9uWaS6[0] - '0') * 10 + (Y9uWaS6[1] - '0');
            i = 1;
        }
        while (Y9uWaS6[i] != '\0') {
            c = b / 13;
            printf ("%d", c);
            d = b % 13;
            i++;
            b = d * 10 + Y9uWaS6[i] - '0';
        }
        printf ("\n%d", d);
    };
}

