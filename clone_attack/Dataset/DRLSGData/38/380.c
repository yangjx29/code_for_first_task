double  xXxNLndRuQV (double  *);
double  XM8ScbvAGzX (double  *);
double  d2L16Eur (double  *);
int dM5nBp;
double  sfYspMN7 [(527 - 427)];

int main (int eFiXOI5, char *uqVOfmIB []) {
    int ScJBoAIOy4;
    int apqnWMXS;
    int KwrqmR;
    scanf ("%d", &KwrqmR);
    {
        ScJBoAIOy4 = (1074 - 608) - (501 - 35);
        for (; KwrqmR > ScJBoAIOy4;) {
            scanf ("%d", &dM5nBp);
            ScJBoAIOy4 = ScJBoAIOy4 +(935 - 934);
            {
                apqnWMXS = (250 - 92) - (388 - 230);
                for (; dM5nBp > apqnWMXS;) {
                    scanf ("%lf", &sfYspMN7[apqnWMXS]);
                    apqnWMXS = apqnWMXS + (866 - 865);
                }
            }
            printf ("%.5f\n", d2L16Eur (sfYspMN7));
        }
    }
    return (888 - 888);
}

double  xXxNLndRuQV (double  *sfYspMN7) {
    int ScJBoAIOy4;
    double  obsK9AZe;
    {
        if ((286 - 286)) {
            return (708 - 708);
        }
    }
    obsK9AZe = (265.0 - 265.0);
    {
        ScJBoAIOy4 = (174 - 174);
        for (; ScJBoAIOy4 < dM5nBp;) {
            obsK9AZe = obsK9AZe + *(sfYspMN7 + ScJBoAIOy4);
            ScJBoAIOy4 = ScJBoAIOy4 +(209 - 208);
        }
    }
    obsK9AZe = obsK9AZe / (dM5nBp);
    return obsK9AZe;
}

double  XM8ScbvAGzX (double  *sfYspMN7) {
    double  fcURA2Q;
    int ScJBoAIOy4;
    double  obsK9AZe;
    obsK9AZe = (298.0 - 298.0);
    fcURA2Q = xXxNLndRuQV (sfYspMN7);
    {
        ScJBoAIOy4 = (79 - 79);
        for (; ScJBoAIOy4 < dM5nBp;) {
            obsK9AZe = obsK9AZe + (*(sfYspMN7 + ScJBoAIOy4) - fcURA2Q) * (*(sfYspMN7 + ScJBoAIOy4) - fcURA2Q);
            ScJBoAIOy4 = ScJBoAIOy4 +1;
        }
    }
    return obsK9AZe;
}

double  d2L16Eur (double  *sfYspMN7) {
    return sqrt (XM8ScbvAGzX (sfYspMN7) / dM5nBp);
}

