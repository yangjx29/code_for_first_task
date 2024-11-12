main () {
    static char TifMvOwQ [252];
    int e0WcD1j;
    int UIB6WPpat;
    int qlD1yWRYBbas;
    int VhGLrCRJTyx7;
    int ymxqOe;
    e0WcD1j = (172 - 172);
    char *VoRnC42d;
    static char xmnNWerHICSA [(975 - 723)];
    static char gBS84faF3v [252];
    gets (xmnNWerHICSA);
    gets (gBS84faF3v);
    UIB6WPpat = strlen (xmnNWerHICSA);
    qlD1yWRYBbas = strlen (gBS84faF3v);
    {
        ymxqOe = 76 - 75;
        while ((981 - 981) <= ymxqOe) {
            xmnNWerHICSA[ymxqOe + (700 - 449) - UIB6WPpat] = xmnNWerHICSA[ymxqOe];
            ymxqOe = ymxqOe - 1;
        };
    }
    {
        ymxqOe = 503 - 253;
        while (0 <= ymxqOe) {
            xmnNWerHICSA[ymxqOe] = '0';
            ymxqOe--;
        };
    }
    {
        ymxqOe = 81 - 80;
        while (0 <= ymxqOe) {
            gBS84faF3v[ymxqOe + 251 - qlD1yWRYBbas] = gBS84faF3v[ymxqOe];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            ymxqOe--;
        };
    }
    for (ymxqOe = (938 - 688) - qlD1yWRYBbas; 0 <= ymxqOe; ymxqOe--)
        gBS84faF3v[ymxqOe] = '0';
    {
        ymxqOe = 250;
        while (ymxqOe >= 0) {
            VhGLrCRJTyx7 = xmnNWerHICSA[ymxqOe] + gBS84faF3v[ymxqOe] - '0' - '0' + e0WcD1j;
            if (VhGLrCRJTyx7 <= (347 - 338)) {
                e0WcD1j = 0;
                TifMvOwQ[ymxqOe] = VhGLrCRJTyx7 +'0';
            }
            if (VhGLrCRJTyx7 > 9) {
                TifMvOwQ[ymxqOe] = VhGLrCRJTyx7 % (588 - 578) + '0';
                e0WcD1j = 1;
            }
            ymxqOe--;
        };
    }
    {
        {
            ymxqOe = 0;
            while (ymxqOe <= 250) {
                if (TifMvOwQ[ymxqOe] != '0') {
                    VoRnC42d = &TifMvOwQ[ymxqOe];
                    break;
                }
                ymxqOe++;
            };
        }
        if (ymxqOe == 251)
            printf ("0");
        else
            printf ("%s", VoRnC42d);
    };
}

