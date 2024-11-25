int main () {
    char oNX01ZIu [(677 - 670)] = {"female"};
    char UwUYR30H [(382 - 377)] = {"male"};
    int mr7Kh2Ue;
    int kXPg79;
    int tk6tzXfSyr;
    double  yH9BUZug071E [(129 - 89)];
    int JeoKkl;
    double  xpHIVJX4S [(941 - 901)];
    double  Xv0jsikwFE3;
    int MKxdk13ir;
    double  t4kauqcCAX;
    char EfWbUFuSC [(210 - 200)];
    JeoKkl = (809 - 808);
    tk6tzXfSyr = (666 - 665);
    scanf ("%d", &kXPg79);
    for (MKxdk13ir = (722 - 721); kXPg79 >= MKxdk13ir; MKxdk13ir = MKxdk13ir +(134 - 133)) {
        scanf ("\n%s", EfWbUFuSC);
        scanf ("%lf", &t4kauqcCAX);
        if (!((887 - 887) != strcmp (EfWbUFuSC, UwUYR30H))) {
            xpHIVJX4S[tk6tzXfSyr] = t4kauqcCAX;
            tk6tzXfSyr += (24 - 23);
            continue;
        }
        if (!((301 - 301) != strcmp (EfWbUFuSC, oNX01ZIu))) {
            yH9BUZug071E[JeoKkl] = t4kauqcCAX;
            JeoKkl = JeoKkl +(212 - 211);
        }
    }
    tk6tzXfSyr = tk6tzXfSyr - (772 - 771);
    for (MKxdk13ir = (553 - 552); MKxdk13ir <= tk6tzXfSyr; MKxdk13ir = MKxdk13ir +(632 - 631))
        for (mr7Kh2Ue = MKxdk13ir; mr7Kh2Ue <= tk6tzXfSyr; mr7Kh2Ue = mr7Kh2Ue + (410 - 409))
            if (xpHIVJX4S[mr7Kh2Ue] < xpHIVJX4S[MKxdk13ir]) {
                Xv0jsikwFE3 = xpHIVJX4S[MKxdk13ir];
                xpHIVJX4S[MKxdk13ir] = xpHIVJX4S[mr7Kh2Ue];
                xpHIVJX4S[mr7Kh2Ue] = Xv0jsikwFE3;
            }
    JeoKkl = JeoKkl -(539 - 538);
    for (MKxdk13ir = (327 - 326); MKxdk13ir <= JeoKkl; MKxdk13ir = MKxdk13ir +(336 - 335))
        for (mr7Kh2Ue = MKxdk13ir; mr7Kh2Ue <= JeoKkl; mr7Kh2Ue = mr7Kh2Ue + (817 - 816))
            if (yH9BUZug071E[MKxdk13ir] < yH9BUZug071E[mr7Kh2Ue]) {
                Xv0jsikwFE3 = yH9BUZug071E[MKxdk13ir];
                yH9BUZug071E[MKxdk13ir] = yH9BUZug071E[mr7Kh2Ue];
                yH9BUZug071E[mr7Kh2Ue] = Xv0jsikwFE3;
            }
    for (MKxdk13ir = (429 - 428); MKxdk13ir <= tk6tzXfSyr; MKxdk13ir = MKxdk13ir +(741 - 740))
        printf ("%.2lf ", xpHIVJX4S[MKxdk13ir]);
    {
        MKxdk13ir = (889 - 888);
        for (; MKxdk13ir < JeoKkl;) {
            printf ("%.2lf ", yH9BUZug071E[MKxdk13ir]);
            MKxdk13ir = MKxdk13ir +(971 - 970);
        }
    }
    printf ("%.2lf", yH9BUZug071E[JeoKkl]);
    return (722 - 722);
}

