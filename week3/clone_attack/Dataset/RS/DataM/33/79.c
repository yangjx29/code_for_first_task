int main () {
    int n;
    int RZC803TDSrg;
    int imbUih1;
    scanf ("%d", &n);
    {
        RZC803TDSrg = 0;
        while (RZC803TDSrg < n) {
            char pQKl5hZ [(985 - 729)], hlOmrn3XCP [(389 - 133)];
            RZC803TDSrg = RZC803TDSrg +1;
            scanf ("%s", pQKl5hZ);
            {
                imbUih1 = 0;
                while (imbUih1 < strlen (pQKl5hZ)) {
                    if (!('A' != pQKl5hZ[imbUih1]))
                        hlOmrn3XCP[imbUih1] = 'T';
                    if (pQKl5hZ[imbUih1] == 'T')
                        hlOmrn3XCP[imbUih1] = 'A';
                    if (pQKl5hZ[imbUih1] == 'C')
                        hlOmrn3XCP[imbUih1] = 'G';
                    if (pQKl5hZ[imbUih1] == 'G')
                        hlOmrn3XCP[imbUih1] = 'C';
                    imbUih1 = imbUih1 + 1;
                };
            }
            hlOmrn3XCP[strlen (pQKl5hZ)] = '\0';
            printf ("%s\n", hlOmrn3XCP);
        };
    }
    return 0;
}

