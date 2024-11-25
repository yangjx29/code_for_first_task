main () {
    int b [25] = {0};
    int UBC2Z6, xn9aZfh [25], MVSiIR64ODdF, shaFIHRGm, hEuCvoI, aHvhwzMBD, ASQwRpZU8b;
    scanf ("%d", &UBC2Z6);
    for (MVSiIR64ODdF = 0; UBC2Z6 > MVSiIR64ODdF; MVSiIR64ODdF++) {
        scanf ("%d", &xn9aZfh[MVSiIR64ODdF]);
    }
    for (shaFIHRGm = UBC2Z6 -1; 0 <= shaFIHRGm; shaFIHRGm--) {
        hEuCvoI = UBC2Z6 -1;
        while (shaFIHRGm <= hEuCvoI) {
            if (!(shaFIHRGm == hEuCvoI)) {
                if ((xn9aZfh[hEuCvoI] <= xn9aZfh[shaFIHRGm]) && (b[shaFIHRGm] == b[hEuCvoI] - 1)) {
                    b[shaFIHRGm] = b[hEuCvoI];
                };
            }
            else if (hEuCvoI == shaFIHRGm) {
                b[shaFIHRGm] = b[shaFIHRGm] + 1;
            }
            hEuCvoI--;
        };
    }
    for (aHvhwzMBD = 1; aHvhwzMBD <= UBC2Z6 -1; aHvhwzMBD++) {
        if (b[0] < b[aHvhwzMBD]) {
            ASQwRpZU8b = b[0];
            b[0] = b[aHvhwzMBD];
            b[aHvhwzMBD] = ASQwRpZU8b;
        };
    }
    printf ("%d", b[0]);
}

