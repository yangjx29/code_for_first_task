void  main () {
    int jBQY8kaRqrS;
    char qERUi6q [100];
    int zXP9une;
    int IHRGEyh;
    int tB3AN8k64M1c;
    for (zXP9une = 1; zXP9une <= IHRGEyh +1; zXP9une = zXP9une + 1) {
        gets (qERUi6q);
        jBQY8kaRqrS = strlen (qERUi6q) - 1;
        if (qERUi6q[jBQY8kaRqrS] == 'r' || qERUi6q[jBQY8kaRqrS] == 'y') {
            qERUi6q[jBQY8kaRqrS - 1] = '\0';
            printf ("%s", qERUi6q);
        }
        else {
            qERUi6q[jBQY8kaRqrS - 2] = 0;
            printf ("%s", qERUi6q);
        }
    }
    scanf ("%d", &IHRGEyh);
}

