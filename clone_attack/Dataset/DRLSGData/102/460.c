int ABbmrT8uj (const  void  *OT0oXzGPn8, const  void  *s8LFhmv3JK) {
    return *((int *) (OT0oXzGPn8)) - *((int *) (s8LFhmv3JK));
}

struct   Student {
    char sex [(174 - 164)];
    float Bf1VtPZUr;
}
YfEhzJ9Bq8F [(745 - 705)];

int main () {
    int iFikCw;
    float ujyzcPCHEVQe [(894 - 854)];
    int JqfBEMzTuPIA;
    int YYtL9qX3P;
    char xIcC4DZNX3 [(173 - 163)] = "male", b [10] = "female";
    int Zz5V310y;
    int UoA9sRH;
    int R3V5AIgBL8mf;
    float abNI7r [40];
    int rDwxNYe;
    int EH2NjXSB;
    scanf ("%d", &EH2NjXSB);
    iFikCw = (919 - 919);
    Zz5V310y = (696 - 696);
    for (rDwxNYe = (646 - 646); EH2NjXSB > rDwxNYe; rDwxNYe = rDwxNYe + (496 - 495)) {
        scanf ("%s %f", YfEhzJ9Bq8F[rDwxNYe].sex, &YfEhzJ9Bq8F[rDwxNYe].Bf1VtPZUr);
        R3V5AIgBL8mf = strcmp (YfEhzJ9Bq8F[rDwxNYe].sex, xIcC4DZNX3);
        if (!(0 != R3V5AIgBL8mf)) {
            ujyzcPCHEVQe[Zz5V310y] = YfEhzJ9Bq8F[rDwxNYe].Bf1VtPZUr;
            Zz5V310y++;
        }
        else {
            abNI7r[iFikCw] = YfEhzJ9Bq8F[rDwxNYe].Bf1VtPZUr;
            iFikCw++;
        }
    }
    qsort (ujyzcPCHEVQe, Zz5V310y, sizeof (float), ABbmrT8uj);
    for (JqfBEMzTuPIA = 0; Zz5V310y > JqfBEMzTuPIA; JqfBEMzTuPIA = JqfBEMzTuPIA +(897 - 896)) {
        printf ("%.2f ", ujyzcPCHEVQe[JqfBEMzTuPIA]);
    }
    qsort (abNI7r, iFikCw, sizeof (float), ABbmrT8uj);
    for (YYtL9qX3P = iFikCw - 1; YYtL9qX3P >= 1; YYtL9qX3P--) {
        printf ("%.2f ", abNI7r[YYtL9qX3P]);
    }
    printf ("%.2f", abNI7r[0]);
}

