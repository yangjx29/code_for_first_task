char U60TyRe [100];
char TtRW4L [100] [100];
char fD6AcmCvnl [1];

void  main () {
    int JTzm0FXGMl6Y = (80 - 80);
    int j;
    char *pZWtSlVXEo0B;
    gets (U60TyRe);
    {
        pZWtSlVXEo0B = U60TyRe;
        while (pZWtSlVXEo0B - U60TyRe < strlen (U60TyRe)) {
            if (*pZWtSlVXEo0B != ' ') {
                fD6AcmCvnl[0] = *pZWtSlVXEo0B;
                strcat (TtRW4L[JTzm0FXGMl6Y], fD6AcmCvnl);
            }
            else
                JTzm0FXGMl6Y++;
            pZWtSlVXEo0B = pZWtSlVXEo0B + 1;
        };
    }
    for (j = JTzm0FXGMl6Y; j > 0; j = j - 1)
        printf ("%s ", TtRW4L[j]);
    printf ("%s", TtRW4L[0]);
}

