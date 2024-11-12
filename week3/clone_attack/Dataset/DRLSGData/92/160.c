void  afyxYC4Pm (int *qAHPjK56ILn0, int uCJYeitPb, int Lrqf21D) {
    int hSHkqKp2R, XqRgWtn, temp;
    {
        hSHkqKp2R = uCJYeitPb + 1;
        while (Lrqf21D >= hSHkqKp2R) {
            temp = qAHPjK56ILn0[hSHkqKp2R];
            {
                XqRgWtn = hSHkqKp2R - 1;
                while (XqRgWtn >= uCJYeitPb) {
                    if (qAHPjK56ILn0[XqRgWtn] > temp) {
                        qAHPjK56ILn0[XqRgWtn +1] = qAHPjK56ILn0[XqRgWtn];
                    }
                    else {
                        break;
                    }
                    XqRgWtn = XqRgWtn -1;
                }
            }
            hSHkqKp2R = hSHkqKp2R + 1;
            qAHPjK56ILn0[XqRgWtn +1] = temp;
        }
    }
}

void  J4Lrfo (int *qAHPjK56ILn0, int *temp, int uCJYeitPb, int Lrqf21D, int JIDqFcsPBfK7) {
    int hSHkqKp2R, XqRgWtn, f2R8bOmtW, index1, ruf3tYEyU;
    {
        hSHkqKp2R = uCJYeitPb;
        while (hSHkqKp2R <= JIDqFcsPBfK7) {
            temp[hSHkqKp2R] = qAHPjK56ILn0[hSHkqKp2R];
            hSHkqKp2R = hSHkqKp2R + 1;
        }
    }
    for (XqRgWtn = 1; XqRgWtn <= Lrqf21D -JIDqFcsPBfK7; XqRgWtn = XqRgWtn +1) {
        temp[Lrqf21D -XqRgWtn+1] = qAHPjK56ILn0[XqRgWtn +JIDqFcsPBfK7];
    }
    for (index1 = uCJYeitPb, ruf3tYEyU = Lrqf21D, f2R8bOmtW = uCJYeitPb; f2R8bOmtW <= Lrqf21D; f2R8bOmtW = f2R8bOmtW + 1) {
        if (temp[index1] <= temp[ruf3tYEyU]) {
            qAHPjK56ILn0[f2R8bOmtW] = temp[index1++];
        }
        else {
            qAHPjK56ILn0[f2R8bOmtW] = temp[ruf3tYEyU--];
        }
    }
}

void  bX7gF9e (int *qAHPjK56ILn0, int *temp, int uCJYeitPb, int Lrqf21D) {
    if (Lrqf21D -uCJYeitPb > 16) {
        int JIDqFcsPBfK7 = (uCJYeitPb + Lrqf21D) / 2;
        bX7gF9e (qAHPjK56ILn0, temp, uCJYeitPb, JIDqFcsPBfK7);
        bX7gF9e (qAHPjK56ILn0, temp, JIDqFcsPBfK7 +1, Lrqf21D);
        J4Lrfo (qAHPjK56ILn0, temp, uCJYeitPb, Lrqf21D, JIDqFcsPBfK7);
    }
    else {
        afyxYC4Pm (qAHPjK56ILn0, uCJYeitPb, Lrqf21D);
    }
}

int main () {
    int hSHkqKp2R;
    int temp [1005];
    int horse_q [1005];
    int horse_t [1005];
    int t_last = 0;
    int SQ1Jqdr7DXwo = 0;
    int MUJGspIWrCuQ;
    int n18n9Qu = MUJGspIWrCuQ -1;
    int wCt3sLZD5 = MUJGspIWrCuQ -1;
    int ebBxHrt = 0;
    scanf ("%d", &MUJGspIWrCuQ);
    if (MUJGspIWrCuQ == 0) {
        return 0;
    }
    main ();
    {
        hSHkqKp2R = 0;
        while (hSHkqKp2R < MUJGspIWrCuQ) {
            scanf ("%d", &horse_t[hSHkqKp2R]);
            hSHkqKp2R++;
        }
    }
    {
        hSHkqKp2R = 0;
        while (hSHkqKp2R < MUJGspIWrCuQ) {
            scanf ("%d", &horse_q[hSHkqKp2R]);
            hSHkqKp2R++;
        }
    }
    bX7gF9e (horse_t, temp, 0, MUJGspIWrCuQ -1);
    bX7gF9e (horse_q, temp, 0, MUJGspIWrCuQ -1);
    while (wCt3sLZD5 >= ebBxHrt) {
        if (horse_t[n18n9Qu] > horse_q[wCt3sLZD5]) {
            wCt3sLZD5 = wCt3sLZD5 - 1;
            n18n9Qu--;
            SQ1Jqdr7DXwo += 200;
        }
        else if (horse_t[n18n9Qu] < horse_q[wCt3sLZD5]) {
            t_last++;
            wCt3sLZD5 = wCt3sLZD5 - 1;
            SQ1Jqdr7DXwo -= 200;
        }
        else {
            if (horse_t[t_last] > horse_q[ebBxHrt]) {
                t_last++;
                ebBxHrt = ebBxHrt + 1;
                SQ1Jqdr7DXwo += 200;
            }
            else {
                if (horse_t[t_last] < horse_q[wCt3sLZD5]) {
                    SQ1Jqdr7DXwo -= 200;
                }
                t_last++;
                wCt3sLZD5--;
            }
        }
    }
    printf ("%d\n", SQ1Jqdr7DXwo);
}

