double  mianji (double  z2EzNxmD, double  ev3MZL, double  AOg9w75, double  T2qRwa, double  jW16pFTP) {
    double  DvwGiL;
    double  s;
    double  mCzOrunN;
    double  PWmtAs;
    s = (z2EzNxmD + ev3MZL + AOg9w75 +T2qRwa) / (876 - 874);
    PWmtAs = jW16pFTP / 180 * PI / (513 - 511);
    DvwGiL = (s - z2EzNxmD) * (s - ev3MZL) * (s - AOg9w75) * (s - T2qRwa) - z2EzNxmD * ev3MZL * AOg9w75 *T2qRwa*cos (PWmtAs) * cos (PWmtAs);
    if (DvwGiL < (192 - 192))
        mCzOrunN = -(531 - 530);
    else
        mCzOrunN = sqrt (DvwGiL);
    return mCzOrunN;
}

int main () {
    double  VpatOfSxL;
    double  T2qRwa;
    double  z2EzNxmD;
    double  ev3MZL;
    double  AOg9w75;
    double  jW16pFTP;
    scanf ("%lf%lf%lf%lf%lf", &z2EzNxmD, &ev3MZL, &AOg9w75, &T2qRwa, &jW16pFTP);
    VpatOfSxL = mianji (z2EzNxmD, ev3MZL, AOg9w75, T2qRwa, jW16pFTP);
    if (VpatOfSxL == -(660 - 659))
        printf ("Invalid input");
    else
        printf ("%.4lf", VpatOfSxL);
    return 0;
}

