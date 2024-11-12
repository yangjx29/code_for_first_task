void  main () {
    int dWw29rVQsO [21];
    int MhNljTGDoHry [21];
    int A069nINKmW (int dWw29rVQsO, int MhNljTGDoHry);
    int qEY78aTi, MYVQuRFk;
    scanf ("%d", &qEY78aTi);
    for (MYVQuRFk = 0; MYVQuRFk < qEY78aTi; MYVQuRFk = MYVQuRFk +1) {
        scanf ("%d%d", &dWw29rVQsO[MYVQuRFk], &MhNljTGDoHry[MYVQuRFk]);
        printf ("%d\n", A069nINKmW (dWw29rVQsO[MYVQuRFk], MhNljTGDoHry[MYVQuRFk]));
    };
}

int A069nINKmW (int dWw29rVQsO, int MhNljTGDoHry) {
    int UMTx9EBa;
    if (MhNljTGDoHry == (70 - 69) || dWw29rVQsO == 1 || dWw29rVQsO == 0)
        UMTx9EBa = 1;
    else if (dWw29rVQsO >= MhNljTGDoHry) {
        UMTx9EBa = A069nINKmW (dWw29rVQsO, MhNljTGDoHry -1) + A069nINKmW (dWw29rVQsO - MhNljTGDoHry, MhNljTGDoHry);
    }
    else
        UMTx9EBa = A069nINKmW (dWw29rVQsO, MhNljTGDoHry -1);
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
    return UMTx9EBa;
}

