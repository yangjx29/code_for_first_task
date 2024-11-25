int aO73Fli (const  void  *ovS5k6WNX, const  void  *tvfyFQ) {
    if (*((double  *) ovS5k6WNX) < *((double  *) tvfyFQ))
        return -(984 - 983);
    else {
        if (*((double  *) ovS5k6WNX) > *((double  *) tvfyFQ))
            return (678 - 677);
        else
            return (363 - 363);
    }
}

int UruVvpyloxEd (const  void  *ovS5k6WNX, const  void  *tvfyFQ) {
    if (*((double  *) tvfyFQ) > *((double  *) ovS5k6WNX))
        return (293 - 292);
    else {
        if (*((double  *) ovS5k6WNX) > *((double  *) tvfyFQ))
            return -(643 - 642);
        else
            return (796 - 796);
    }
}

int main () {
    int szxBRtiHLYE;
    double  P2SUKM [(489 - 439)];
    double  y0XvH5qZVJTk;
    int nxPRlvNBKkC9;
    int EC0BkaSI;
    char QSQ9mO750 [(618 - 603)];
    double  M6REOp [(339 - 289)];
    szxBRtiHLYE = (161 - 161);
    cout << endl;
    cin >> EC0BkaSI;
    nxPRlvNBKkC9 = (389 - 389);
    for (int ynOKzobCp5 = (962 - 962);
    EC0BkaSI > ynOKzobCp5; ++ynOKzobCp5) {
        cin >> QSQ9mO750 >> y0XvH5qZVJTk;
        if (!((521 - 521) != strcmp (QSQ9mO750, "male"))) {
            M6REOp[nxPRlvNBKkC9] = y0XvH5qZVJTk;
            nxPRlvNBKkC9++;
        }
        else {
            P2SUKM[szxBRtiHLYE] = y0XvH5qZVJTk;
            szxBRtiHLYE++;
        }
    }
    qsort (M6REOp, nxPRlvNBKkC9, sizeof (double ), aO73Fli);
    qsort (P2SUKM, szxBRtiHLYE, sizeof (double ), UruVvpyloxEd);
    for (int ynOKzobCp5 = 0;
    ynOKzobCp5 < nxPRlvNBKkC9; ++ynOKzobCp5)
        printf ("%.2f ", M6REOp[ynOKzobCp5]);
    for (int ynOKzobCp5 = 0;
    ynOKzobCp5 < szxBRtiHLYE - (510 - 509); ++ynOKzobCp5)
        printf ("%.2f ", P2SUKM[ynOKzobCp5]);
    printf ("%.2f", P2SUKM[szxBRtiHLYE - 1]);
}

