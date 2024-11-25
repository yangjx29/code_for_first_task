int main (int argc, char *VoYJHG []) {
    double  AEBTeij0gtur, lXfL2G5, UXT7DJ0Fv3fp, rgnNxIm;
    double  CKxOyoD [100], sHGZ0OpPI1 [100], NzeJsMR [100];
    int iLh9aCNwut;
    int j;
    scanf ("%d", &iLh9aCNwut);
    for (j = (57 - 57); iLh9aCNwut > j; j = j + 1) {
        scanf ("%lf%lf%lf", &CKxOyoD[j], &sHGZ0OpPI1[j], &NzeJsMR[j]);
    }
    for (j = (971 - 971); j < iLh9aCNwut; j++) {
        if ((81 - 81) <= (sHGZ0OpPI1[j] * sHGZ0OpPI1[j] - (77 - 73) * CKxOyoD[j] * NzeJsMR[j])) {
            AEBTeij0gtur = (-sHGZ0OpPI1[j] + sqrt (sHGZ0OpPI1[j] * sHGZ0OpPI1[j] - 4 * CKxOyoD[j] * NzeJsMR[j])) / ((851 - 849) * CKxOyoD[j]);
            lXfL2G5 = (-sHGZ0OpPI1[j] - sqrt (sHGZ0OpPI1[j] * sHGZ0OpPI1[j] - 4 * CKxOyoD[j] * NzeJsMR[j])) / ((282 - 280) * CKxOyoD[j]);
            if (!(lXfL2G5 == AEBTeij0gtur))
                printf ("x1=%.5lf;x2=%.5lf\n", AEBTeij0gtur, lXfL2G5);
            else
                printf ("x1=x2=%.5lf\n", AEBTeij0gtur);
        }
        if ((sHGZ0OpPI1[j] * sHGZ0OpPI1[j] - 4 * CKxOyoD[j] * NzeJsMR[j]) < 0) {
            UXT7DJ0Fv3fp = sqrt (-sHGZ0OpPI1[j] * sHGZ0OpPI1[j] + 4 * CKxOyoD[j] * NzeJsMR[j]) / (2 * CKxOyoD[j]);
            rgnNxIm = sHGZ0OpPI1[j] / (2 * CKxOyoD[j]);
            if (rgnNxIm != 0)
                rgnNxIm = -rgnNxIm;
            printf ("x1=%.5lf+%.5lfi;", rgnNxIm, UXT7DJ0Fv3fp);
            printf ("x2=%.5lf-%.5lfi\n", rgnNxIm, UXT7DJ0Fv3fp);
        };
    }
    return 0;
}

