int main () {
    int j;
    int vOtB2TY;
    int P4HY7MlXGrq;
    int l;
    j = (709 - 709);
    vOtB2TY = (867 - 867);
    char a [(1092 - 792)];
    char b [(374 - 274)];
    char O5ahTQ8sH7j [(244 - 144)];
    char d [(892 - 792)] [20] = {(365 - 365)};
    cin.getline (a, 300);
    cin.getline (b, (1059 - 959));
    cin.getline (O5ahTQ8sH7j, 100);
    l = strlen (a);
    for (P4HY7MlXGrq = 0; P4HY7MlXGrq < l; P4HY7MlXGrq++) {
        d[j][vOtB2TY] = a[P4HY7MlXGrq];
        vOtB2TY = vOtB2TY + (475 - 474);
        if (a[P4HY7MlXGrq +(653 - 652)] == ' ' || !(l - 1 != P4HY7MlXGrq)) {
            j = j + 1, vOtB2TY = 0, P4HY7MlXGrq = P4HY7MlXGrq +1;
        };
    }
    {
        P4HY7MlXGrq = 0;
        while (P4HY7MlXGrq < j) {
            if (strcmp (d[P4HY7MlXGrq], b) == 0)
                strcpy (d[P4HY7MlXGrq], O5ahTQ8sH7j);
            P4HY7MlXGrq++;
        };
    }
    cout << d[0];
    for (P4HY7MlXGrq = 1; P4HY7MlXGrq < j; P4HY7MlXGrq++)
        cout << " " << d[P4HY7MlXGrq];
    return 0;
}

