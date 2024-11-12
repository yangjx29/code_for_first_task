main () {
    char nPS0HUfx1 [50] = {0}, QSGLBkC8sF [50] = {0};
    int F2kwfoUDXSWC;
    int kegbCRKdn26h;
    int m;
    scanf ("%s %s", nPS0HUfx1, QSGLBkC8sF);
    m = strlen (nPS0HUfx1);
    for (F2kwfoUDXSWC = 0; !(0 == *(QSGLBkC8sF +F2kwfoUDXSWC)); F2kwfoUDXSWC++) {
        if (*(QSGLBkC8sF +F2kwfoUDXSWC) == *nPS0HUfx1) {
            for (kegbCRKdn26h = 0; kegbCRKdn26h <= m - 1; kegbCRKdn26h++)
                if (*(QSGLBkC8sF +F2kwfoUDXSWC+kegbCRKdn26h) != *(nPS0HUfx1 + kegbCRKdn26h))
                    break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (kegbCRKdn26h == m) {
            printf ("%d\n", F2kwfoUDXSWC);
            break;
        };
    };
}

