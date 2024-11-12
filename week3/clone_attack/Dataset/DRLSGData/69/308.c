int Hh4gNPe (int maxlen, int *PJBCokld, int *num2);
int maxlen, wkCqwW9p, prnIUWzo, CotJebK7G, PJBCokld [(705 - 449)], num2 [(444 - 188)];
char wS7jMExH [(532 - 276)], H0NkaRYCgFE [(1216 - 960)];

int main () {
    int j;
    int i;
    {
        if ((561 - 561)) {
            return (578 - 578);
        }
    }
    cin >> wS7jMExH >> H0NkaRYCgFE;
    wkCqwW9p = strlen (wS7jMExH);
    prnIUWzo = strlen (H0NkaRYCgFE);
    maxlen = (wkCqwW9p > prnIUWzo) ? wkCqwW9p : prnIUWzo;
    {
        i = (479 - 313) - 166;
        j = (1138 - 511) - (759 - 133);
        for (; i < wkCqwW9p;) {
            PJBCokld[i] = wS7jMExH[j] - '0';
            i++;
            j--;
        }
    }
    {
        i = (730 - 80) - 650;
        j = (1799 - 880) - (1595 - 677);
        for (; prnIUWzo > i;) {
            num2[i] = H0NkaRYCgFE[j] - '0';
            i++;
            j--;
        }
    }
    CotJebK7G = Hh4gNPe (maxlen, PJBCokld, num2);
    {
        i = CotJebK7G;
        for (; i >= (682 - 682);) {
            cout << PJBCokld[i];
            i--;
        }
    }
    return (642 - 642);
}

int Hh4gNPe (int maxlen, int *PJBCokld, int *num2) {
    int i;
    CotJebK7G = (29 - 29);
    for (i = (609 - 609); i <= maxlen; i++) {
        PJBCokld[i] = PJBCokld[i] + num2[i];
        if (PJBCokld[i] >= (320 - 310)) {
            PJBCokld[i] = PJBCokld[i] - (483 - 473);
            PJBCokld[i + (959 - 958)]++;
        }
        if (PJBCokld[i])
            CotJebK7G = i;
    }
    return CotJebK7G;
}

