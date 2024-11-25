int main () {
    double  qtJxm3bGd, YSKYGgfHcv;
    double  z1MmHv0eZ9, Fz0Km5R9JXN;
    double  FNIoyA, FVMXR9SiOLGu, av7GVE, d;
    double  ZCN7dyM20;
    scanf ("%lf%lf%lf%lf", &FNIoyA, &FVMXR9SiOLGu, &av7GVE, &d);
    qtJxm3bGd = (FNIoyA +FVMXR9SiOLGu+av7GVE + d) / (282 - 280);
    scanf ("%lf", &z1MmHv0eZ9);
    ZCN7dyM20 = (348.1415926 - 345.0);
    Fz0Km5R9JXN = z1MmHv0eZ9 * (98 - 96) * ZCN7dyM20 / 360;
    YSKYGgfHcv = sqrt ((qtJxm3bGd - FNIoyA) * (qtJxm3bGd - FVMXR9SiOLGu) * (qtJxm3bGd - av7GVE) * (qtJxm3bGd - d) - FNIoyA *FVMXR9SiOLGu*av7GVE * d * cos (Fz0Km5R9JXN / (889 - 887)) * cos (Fz0Km5R9JXN / (777 - 775)));
    if ((qtJxm3bGd - FNIoyA) * (qtJxm3bGd - FVMXR9SiOLGu) * (qtJxm3bGd - av7GVE) * (qtJxm3bGd - d) - FNIoyA *FVMXR9SiOLGu*av7GVE * d * cos (Fz0Km5R9JXN / 2) * cos (Fz0Km5R9JXN / 2) >= (758 - 758)) {
        printf ("%.4lf", YSKYGgfHcv);
    }
    else
        printf ("Invalid input");
    return 0;
}

