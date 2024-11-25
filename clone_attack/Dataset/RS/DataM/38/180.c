int main () {
    int NrP4YCRzLyb;
    int MMj9xPiT6gl;
    scanf ("%d", &MMj9xPiT6gl);
    {
        NrP4YCRzLyb = 0;
        while (MMj9xPiT6gl > NrP4YCRzLyb) {
            double  JAonBNu9L1Ii;
            double  hOC5Ky9Sif = 0;
            double  hPkS1c;
            double  sum = 0;
            int j;
            int num;
            double  *TbNjo0AS6n1 = (double  *) malloc (sizeof (double ) * num);
            free (TbNjo0AS6n1);
            NrP4YCRzLyb = NrP4YCRzLyb +1;
            scanf ("%d", &num);
            {
                j = 0;
                while (num > j) {
                    scanf ("%lf", &TbNjo0AS6n1[j]);
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < num) {
                    sum = sum + TbNjo0AS6n1[j];
                    j = j + 1;
                };
            }
            hPkS1c = sum / num;
            {
                j = 0;
                while (j < num) {
                    hOC5Ky9Sif = hOC5Ky9Sif + (TbNjo0AS6n1[j] - hPkS1c) * (TbNjo0AS6n1[j] - hPkS1c);
                    j = j + 1;
                };
            }
            JAonBNu9L1Ii = sqrt (hOC5Ky9Sif / num);
            printf ("%.5lf\n", JAonBNu9L1Ii);
        };
    }
    return 0;
}

