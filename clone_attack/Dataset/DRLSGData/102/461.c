double  xvi1jW9 [(966 - 926)];
double  SaDGfIMFCKj [40];
char Dc2Erz4jbTsZ [(875 - 865)];

int gFHPDB9 (const  void  *uX4ClcQyYH, const  void  *Aqy3DJu) {
    return *(double *) uX4ClcQyYH < *(double *) Aqy3DJu;
}

int DW2oUqk (const  void  *uX4ClcQyYH, const  void  *Aqy3DJu) {
    return *(double *) uX4ClcQyYH > *(double *) Aqy3DJu;
}

int main () {
    int RPzFtWmi, F7W3LjO, wym2oGpK, vOCHnI;
    double  DanzipxcI3;
    for (; cin >> F7W3LjO;) {
        wym2oGpK = vOCHnI = (999 - 999);
        for (; F7W3LjO = F7W3LjO -1;) {
            cin >> Dc2Erz4jbTsZ >> DanzipxcI3;
            if (!(0 != strcmp (Dc2Erz4jbTsZ, "male")))
                xvi1jW9[wym2oGpK++] = DanzipxcI3;
            else
                SaDGfIMFCKj[vOCHnI++] = DanzipxcI3;
        }
        qsort (xvi1jW9, wym2oGpK, sizeof (xvi1jW9 [0]), DW2oUqk);
        qsort (SaDGfIMFCKj, vOCHnI, sizeof (SaDGfIMFCKj [0]), gFHPDB9);
        printf ("%.2lf", xvi1jW9[0]);
        for (RPzFtWmi = (821 - 820); RPzFtWmi < wym2oGpK; RPzFtWmi = RPzFtWmi +1)
            printf (" %.2lf", xvi1jW9[RPzFtWmi]);
        {
            RPzFtWmi = 0;
            for (; vOCHnI > RPzFtWmi;) {
                printf (" %.2lf", SaDGfIMFCKj[RPzFtWmi]);
                RPzFtWmi = RPzFtWmi +1;
            }
        }
    }
    return 0;
}

