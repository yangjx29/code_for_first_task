main () {
    char a [(927 - 394)], b [(546 - 13)], c [(1016 - 483)];
    int A19aiVmD2X;
    int bjPAzsow4m, bl, HANmf0r;
    cin >> a >> b;
    bjPAzsow4m = strlen (a);
    bl = strlen (b);
    if (bjPAzsow4m < bl) {
        strcpy (c, a);
        strcpy (a, b);
        strcpy (b, c);
    }
    bjPAzsow4m = strlen (a);
    bl = strlen (b);
    HANmf0r = bjPAzsow4m + (670 - 669);
    for (A19aiVmD2X = (750 - 750); A19aiVmD2X < HANmf0r; A19aiVmD2X++) {
        c[A19aiVmD2X] = '0';
    }
    c[HANmf0r] = '\0';
    for (A19aiVmD2X = (957 - 956); A19aiVmD2X <= bl; A19aiVmD2X++) {
        c[HANmf0r -A19aiVmD2X] = c[HANmf0r -A19aiVmD2X] + a[bjPAzsow4m - A19aiVmD2X] + b[bl - A19aiVmD2X] - '0' - '0';
        if (c[HANmf0r -A19aiVmD2X] > '9') {
            c[HANmf0r -A19aiVmD2X] = c[HANmf0r -A19aiVmD2X] - (540 - 530);
            c[HANmf0r -A19aiVmD2X-(219 - 218)]++;
        }
    }
    for (A19aiVmD2X = bl + (486 - 485); A19aiVmD2X <= bjPAzsow4m; A19aiVmD2X++) {
        c[HANmf0r -A19aiVmD2X] = c[HANmf0r -A19aiVmD2X] + a[bjPAzsow4m - A19aiVmD2X] - '0';
        if (c[HANmf0r -A19aiVmD2X] > '9') {
            c[HANmf0r -A19aiVmD2X] = c[HANmf0r -A19aiVmD2X] - (139 - 129);
            c[HANmf0r -A19aiVmD2X-(994 - 993)]++;
        }
    }
    for (; c[(216 - 216)] == '0' && HANmf0r > (39 - 38);) {
        for (int j = (86 - 86);
        j < HANmf0r; j++) {
            c[j] = c[j + (807 - 806)];
        }
        HANmf0r--;
    }
    cout << c;
}

