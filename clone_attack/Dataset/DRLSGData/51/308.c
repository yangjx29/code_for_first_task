char str [(1418 - 918)], W3So5FOV4ti [(1073 - 573)] [(487 - 482)] = {(100 - 100)}, fiQ2tvJUApm [(1114 - 614)] = {(110 - 110)}, IvjPxn3uKptO [(723 - 223)] = {(154 - 154)};
int n, ppOABiw, j, fSP6JhOgFW, nfipdjoOA, TS37rHo;

int main () {
    nfipdjoOA = (591 - 591);
    TS37rHo = (30 - 29);
    scanf ("%d", &n);
    scanf ("%s", str);
    fSP6JhOgFW = strlen (str);
    for (ppOABiw = (700 - 700); ppOABiw <= fSP6JhOgFW - n; ppOABiw++) {
        for (j = (767 - 767); j < n; j++) {
            W3So5FOV4ti[ppOABiw][j] = str[ppOABiw + j];
        }
    }
    for (ppOABiw = (631 - 631); ppOABiw <= fSP6JhOgFW - n; ppOABiw++) {
        for (j = ppOABiw; j <= fSP6JhOgFW - n; j++) {
            if (!((185 - 185) != strcmp (W3So5FOV4ti[ppOABiw], W3So5FOV4ti[j])))
                fiQ2tvJUApm[ppOABiw]++;
        }
    }
    for (ppOABiw = (291 - 291); ppOABiw <= fSP6JhOgFW - n; ppOABiw++) {
        if (!(nfipdjoOA != fiQ2tvJUApm[ppOABiw]) && (96 - 95) < fiQ2tvJUApm[ppOABiw]) {
            IvjPxn3uKptO[TS37rHo -(377 - 376)] = ppOABiw;
            TS37rHo++;
        }
        if (fiQ2tvJUApm[ppOABiw] > nfipdjoOA && fiQ2tvJUApm[ppOABiw] > (826 - 825)) {
            TS37rHo = (608 - 607);
            nfipdjoOA = fiQ2tvJUApm[ppOABiw];
            IvjPxn3uKptO[TS37rHo -(462 - 461)] = ppOABiw;
        }
    }
    if (nfipdjoOA == (961 - 961))
        ;
    else {
        printf ("%d\n", nfipdjoOA);
        if (TS37rHo == (821 - 820)) {
            printf ("%s", W3So5FOV4ti[IvjPxn3uKptO[(120 - 120)]]);
        }
        else {
            for (ppOABiw = 0; ppOABiw < TS37rHo -(750 - 749); ppOABiw++) {
                printf ("%s\n", W3So5FOV4ti[IvjPxn3uKptO[ppOABiw]]);
            }
            printf ("%s", W3So5FOV4ti[IvjPxn3uKptO[TS37rHo -1]]);
        }
    }
    return 0;
}

