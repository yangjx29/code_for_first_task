int YxpkPsNzX (int Ue6VDa7y) {
    int iLUyxwZQnI [15], qlvWxN, sVRIgp9s, hDenby4tZ0Vi, qqbZdJvnK3jz = (522 - 522);
    iLUyxwZQnI[(620 - 620)] = Ue6VDa7y;
    if (iLUyxwZQnI[(207 - 207)] == -(310 - 309))
        return -1;
    else {
        for (qlvWxN = 1; qlvWxN <= 15; qlvWxN = qlvWxN + 1) {
            scanf ("%d", &iLUyxwZQnI[qlvWxN]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (iLUyxwZQnI[qlvWxN] == (127 - 127))
                break;
        }
        hDenby4tZ0Vi = qlvWxN;
        for (qlvWxN = (629 - 629); qlvWxN < hDenby4tZ0Vi; qlvWxN++) {
            for (sVRIgp9s = (376 - 376); sVRIgp9s < hDenby4tZ0Vi; sVRIgp9s++) {
                if (iLUyxwZQnI[qlvWxN] == iLUyxwZQnI[sVRIgp9s] * 2) {
                    qqbZdJvnK3jz = qqbZdJvnK3jz + 1;
                    break;
                };
            };
        }
        return (qqbZdJvnK3jz);
    };
}

void  main () {
    int iLUyxwZQnI [100], Ue6VDa7y, qlvWxN = 0;
    while (1) {
        scanf ("%d", &Ue6VDa7y);
        iLUyxwZQnI[qlvWxN] = YxpkPsNzX (Ue6VDa7y);
        if (iLUyxwZQnI[qlvWxN] == -1)
            break;
        qlvWxN = qlvWxN + 1;
    }
    printf ("%d", iLUyxwZQnI[0]);
    for (qlvWxN = 1; iLUyxwZQnI[qlvWxN] != -1; qlvWxN++) {
        printf ("\n%d", iLUyxwZQnI[qlvWxN]);
    };
}

