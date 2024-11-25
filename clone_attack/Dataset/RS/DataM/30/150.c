int main () {
    int y1msR6, H1aDsnOB, jieguo = (308 - 308);
    scanf ("%d", &H1aDsnOB);
    for (y1msR6 = 1; H1aDsnOB >= y1msR6; y1msR6 = y1msR6 + 1) {
        if (!(0 != (y1msR6 - 7) % 10))
            jieguo = jieguo;
        else {
            if ((y1msR6 / 10) == 7)
                jieguo = jieguo;
            else {
                if (y1msR6 % 7 == 0)
                    jieguo = jieguo;
                else
                    jieguo += y1msR6 * y1msR6;
            };
        };
    }
    printf ("\n%d", jieguo);
    return 0;
}

