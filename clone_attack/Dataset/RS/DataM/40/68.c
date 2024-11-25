void  main () {
    double  vvDiSwCkH;
    double  zh3Pmc;
    double  m3xvi8heW;
    double  aAouFahizHS0;
    double  E8fWjd;
    double  J8tWD4Z;
    double  D5LZd7x;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &vvDiSwCkH, &zh3Pmc, &m3xvi8heW, &aAouFahizHS0, &E8fWjd);
    E8fWjd = E8fWjd / 360 * 3.1415926;
    E8fWjd = cos (E8fWjd);
    E8fWjd = E8fWjd *E8fWjd*vvDiSwCkH * zh3Pmc * m3xvi8heW * aAouFahizHS0;
    J8tWD4Z = (vvDiSwCkH + zh3Pmc + m3xvi8heW + aAouFahizHS0) / 2;
    D5LZd7x = (J8tWD4Z -vvDiSwCkH) * (J8tWD4Z -zh3Pmc) * (J8tWD4Z -m3xvi8heW) * (J8tWD4Z -aAouFahizHS0) - E8fWjd;
    if (D5LZd7x < 0)
        ;
    else {
        D5LZd7x = sqrt (D5LZd7x);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.4lf", D5LZd7x);
    };
}

