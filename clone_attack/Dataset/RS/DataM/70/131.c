int main (int j2BOD0P1bn, char *cFLxiw5B []) {
    int nZ2zrvVjRWF;
    struct   UAnYlI57KgBX {
        double  pIqeApiJ8, otIXEoRLKhb;
    };
    struct   UAnYlI57KgBX *rYbFtHWwZqT;
    int isOBDbhNHK2e;
    int ms4zt85O9JT;
    double  temp;
    temp = (479 - 479);
    scanf ("%d", &nZ2zrvVjRWF);
    rYbFtHWwZqT = (struct   UAnYlI57KgBX *) malloc (sizeof (UAnYlI57KgBX) * nZ2zrvVjRWF);
    for (isOBDbhNHK2e = 0; nZ2zrvVjRWF > isOBDbhNHK2e; isOBDbhNHK2e++) {
        scanf ("%lf %lf", &((rYbFtHWwZqT + isOBDbhNHK2e)->pIqeApiJ8), &((rYbFtHWwZqT + isOBDbhNHK2e)->otIXEoRLKhb));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (isOBDbhNHK2e = 0; nZ2zrvVjRWF > isOBDbhNHK2e; isOBDbhNHK2e++) {
        for (ms4zt85O9JT = nZ2zrvVjRWF - 1; isOBDbhNHK2e < ms4zt85O9JT; ms4zt85O9JT--) {
            if (temp < (((rYbFtHWwZqT + isOBDbhNHK2e)->pIqeApiJ8) - ((rYbFtHWwZqT + ms4zt85O9JT)->pIqeApiJ8)) * (((rYbFtHWwZqT + isOBDbhNHK2e)->pIqeApiJ8) - ((rYbFtHWwZqT + ms4zt85O9JT)->pIqeApiJ8)) + (((rYbFtHWwZqT + isOBDbhNHK2e)->otIXEoRLKhb) - ((rYbFtHWwZqT + ms4zt85O9JT)->otIXEoRLKhb)) * (((rYbFtHWwZqT + isOBDbhNHK2e)->otIXEoRLKhb) - ((rYbFtHWwZqT + ms4zt85O9JT)->otIXEoRLKhb))) {
                temp = (((rYbFtHWwZqT + isOBDbhNHK2e)->pIqeApiJ8) - ((rYbFtHWwZqT + ms4zt85O9JT)->pIqeApiJ8)) * (((rYbFtHWwZqT + isOBDbhNHK2e)->pIqeApiJ8) - ((rYbFtHWwZqT + ms4zt85O9JT)->pIqeApiJ8)) + (((rYbFtHWwZqT + isOBDbhNHK2e)->otIXEoRLKhb) - ((rYbFtHWwZqT + ms4zt85O9JT)->otIXEoRLKhb)) * (((rYbFtHWwZqT + isOBDbhNHK2e)->otIXEoRLKhb) - ((rYbFtHWwZqT + ms4zt85O9JT)->otIXEoRLKhb));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    printf ("%.4f\n", sqrt (temp));
    return 0;
}

