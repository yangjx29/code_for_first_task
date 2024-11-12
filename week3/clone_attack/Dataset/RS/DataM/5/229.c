int main () {
    char ITe8yUW [(949 - 448)], y164lYpKD [(810 - 309)];
    double  j4NbzOVD2v;
    double  gbSAeYadE5rL;
    int w2FVTmkpLCbB, yEjhidxCl, RXomedR, VGgibXlc8, PReuT4jEK9Bn;
    scanf ("%lf%s%s", &j4NbzOVD2v, &ITe8yUW, &y164lYpKD);
    yEjhidxCl = strlen (ITe8yUW);
    VGgibXlc8 = strlen (y164lYpKD);
    PReuT4jEK9Bn = (187 - 187);
    RXomedR = (64 - 64);
    for (w2FVTmkpLCbB = (671 - 671); yEjhidxCl > w2FVTmkpLCbB; w2FVTmkpLCbB = w2FVTmkpLCbB + 1) {
        if ((!('A' == ITe8yUW[w2FVTmkpLCbB])) && (ITe8yUW[w2FVTmkpLCbB] != 'T') && (!('C' == ITe8yUW[w2FVTmkpLCbB])) && (!('G' == ITe8yUW[w2FVTmkpLCbB]))) {
            PReuT4jEK9Bn = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    {
        w2FVTmkpLCbB = 0;
        while (VGgibXlc8 > w2FVTmkpLCbB) {
            if ((!('A' == y164lYpKD[w2FVTmkpLCbB])) && (y164lYpKD[w2FVTmkpLCbB] != 'T') && (y164lYpKD[w2FVTmkpLCbB] != 'C') && (y164lYpKD[w2FVTmkpLCbB] != 'G')) {
                PReuT4jEK9Bn = 1;
            }
            w2FVTmkpLCbB = w2FVTmkpLCbB + 1;
        };
    }
    if (yEjhidxCl == VGgibXlc8 &&PReuT4jEK9Bn == 0) {
        {
            w2FVTmkpLCbB = 0;
            while (w2FVTmkpLCbB < yEjhidxCl) {
                if (ITe8yUW[w2FVTmkpLCbB] == y164lYpKD[w2FVTmkpLCbB]) {
                    RXomedR = RXomedR +1;
                }
                w2FVTmkpLCbB++;
            };
        }
        gbSAeYadE5rL = 1.0 * RXomedR / yEjhidxCl;
        if (gbSAeYadE5rL > j4NbzOVD2v) {
            printf ("yes");
        }
        else {
            printf ("no");
        };
    }
    else {
        printf ("error");
    }
    return 0;
}

