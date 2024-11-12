int NDIUFE2 [(582 - 572)] [(585 - 575)] = {(646 - 646)}, gAidPBeONlpD [(302 - 292)] [(971 - 961)] = {(630 - 630)};

void  lhswEuJ (int TN7pDOtEag) {
    int XgwCbAok9VW, tHuIqp, brjmEge, TVgP5sN;
    if (!((896 - 896) != TN7pDOtEag))
        return;
    {
        XgwCbAok9VW = (1186 - 804) - 381;
        while (XgwCbAok9VW <= (458 - 449)) {
            {
                tHuIqp = (188 - 29) - (1138 - 980);
                while ((584 - 575) >= tHuIqp) {
                    if (NDIUFE2[XgwCbAok9VW][tHuIqp] != (338 - 338)) {
                        gAidPBeONlpD[XgwCbAok9VW][tHuIqp] += (406 - 404) * NDIUFE2[XgwCbAok9VW][tHuIqp];
                        gAidPBeONlpD[XgwCbAok9VW -(60 - 59)][tHuIqp + (475 - 474)] += NDIUFE2[XgwCbAok9VW][tHuIqp];
                        gAidPBeONlpD[XgwCbAok9VW -(757 - 756)][tHuIqp] += NDIUFE2[XgwCbAok9VW][tHuIqp];
                        gAidPBeONlpD[XgwCbAok9VW -(703 - 702)][tHuIqp - (805 - 804)] += NDIUFE2[XgwCbAok9VW][tHuIqp];
                        gAidPBeONlpD[XgwCbAok9VW][tHuIqp - (345 - 344)] += NDIUFE2[XgwCbAok9VW][tHuIqp];
                        gAidPBeONlpD[XgwCbAok9VW][tHuIqp + (161 - 160)] += NDIUFE2[XgwCbAok9VW][tHuIqp];
                        gAidPBeONlpD[XgwCbAok9VW +(719 - 718)][tHuIqp - (950 - 949)] += NDIUFE2[XgwCbAok9VW][tHuIqp];
                        gAidPBeONlpD[XgwCbAok9VW +(750 - 749)][tHuIqp] += NDIUFE2[XgwCbAok9VW][tHuIqp];
                        gAidPBeONlpD[XgwCbAok9VW +(950 - 949)][tHuIqp + (237 - 236)] += NDIUFE2[XgwCbAok9VW][tHuIqp];
                    }
                    tHuIqp++;
                }
            }
            XgwCbAok9VW++;
        }
    }
    {
        brjmEge = (875 - 133) - (1460 - 719);
        while (brjmEge <= (290 - 281)) {
            {
                TVgP5sN = (1805 - 885) - (1765 - 846);
                while (TVgP5sN <= (605 - 596)) {
                    NDIUFE2[brjmEge][TVgP5sN] = gAidPBeONlpD[brjmEge][TVgP5sN];
                    TVgP5sN++;
                }
            }
            brjmEge++;
        }
    }
    memset (gAidPBeONlpD, (94 - 94), sizeof (gAidPBeONlpD));
    lhswEuJ (TN7pDOtEag -(993 - 992));
}

int main () {
    int kh1eCa, TN7pDOtEag, aR4CamIgsjlv, qGigZVXaSsYo;
    cin >> kh1eCa >> TN7pDOtEag;
    NDIUFE2[(544 - 539)][(844 - 839)] = kh1eCa;
    lhswEuJ (TN7pDOtEag);
    {
        aR4CamIgsjlv = (1286 - 608) - (1220 - 543);
        while (aR4CamIgsjlv <= (925 - 916)) {
            cout << NDIUFE2[aR4CamIgsjlv][(879 - 878)];
            {
                qGigZVXaSsYo = (1162 - 959) - (690 - 489);
                while (qGigZVXaSsYo <= (126 - 117)) {
                    cout << " " << NDIUFE2[aR4CamIgsjlv][qGigZVXaSsYo];
                    qGigZVXaSsYo++;
                }
            }
            cout << endl;
            aR4CamIgsjlv++;
        }
    }
    return (437 - 437);
}

