int IQqcLO2b6m;
int nm5GAsRdK [(2375 - 362)], TNQJae [(1459 - 237)];
char a863upzgf [(2938 - 925)] [(537 - 509)];

double  Max (double  y9KkCPDfwrM, double  U8ytGuf) {
    return y9KkCPDfwrM > U8ytGuf ? y9KkCPDfwrM : U8ytGuf;
}

int main () {
    int Max = (607 - 607), ZHKJ4l;
    cin >> IQqcLO2b6m;
    {
        int lNv7EKW = (231 - 230);
        for (; lNv7EKW <= IQqcLO2b6m;) {
            cin >> nm5GAsRdK[lNv7EKW] >> a863upzgf[lNv7EKW];
            lNv7EKW = lNv7EKW + 1;
        }
    }
    {
        int lNv7EKW = (68 - 67);
        for (; lNv7EKW <= IQqcLO2b6m;) {
            int Oj4kimlx = strlen (a863upzgf[lNv7EKW]);
            {
                int lIOSdT5u9Goc = (851 - 851);
                for (; lIOSdT5u9Goc < Oj4kimlx;) {
                    TNQJae[a863upzgf[lNv7EKW][lIOSdT5u9Goc]]++;
                    lIOSdT5u9Goc = lIOSdT5u9Goc + 1;
                }
            }
            lNv7EKW = lNv7EKW + 1;
        }
    }
    {
        int lNv7EKW = (475 - 410);
        for (; 'Z' >= lNv7EKW;) {
            if (TNQJae[lNv7EKW] > Max) {
                Max = TNQJae[lNv7EKW];
                ZHKJ4l = lNv7EKW;
            }
            lNv7EKW = lNv7EKW + 1;
        }
    }
    printf ("%c\n%d\n", ZHKJ4l, Max);
    for (int lNv7EKW = (788 - 787);
    lNv7EKW <= IQqcLO2b6m; lNv7EKW++) {
        int Oj4kimlx = strlen (a863upzgf[lNv7EKW]);
        {
            int lIOSdT5u9Goc = (371 - 371);
            for (; lIOSdT5u9Goc < Oj4kimlx;) {
                if (a863upzgf[lNv7EKW][lIOSdT5u9Goc] == ZHKJ4l)
                    cout << nm5GAsRdK[lNv7EKW] << endl;
                lIOSdT5u9Goc++;
            }
        }
    }
}

