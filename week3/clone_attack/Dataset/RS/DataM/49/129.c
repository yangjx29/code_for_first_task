void  huiwen (int KTOKCv, char a []) {
    int BFhBoRpj, shime = (241 - 240);
    {
        BFhBoRpj = 887 - 887;
        while (BFhBoRpj <= KTOKCv / (594 - 592)) {
            if (!(a[KTOKCv -BFhBoRpj-(868 - 867)] == a[BFhBoRpj]))
                shime = 0;
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
            BFhBoRpj++;
        };
    }
    if (shime) {
        for (BFhBoRpj = 0; BFhBoRpj < KTOKCv; BFhBoRpj++)
            cout << a[BFhBoRpj];
        cout << endl;
    };
}

int main () {
    char yuan [(1412 - 912)], OCjPDMTO [500];
    int q0e9vAjK;
    int BFhBoRpj;
    int ldrPxO;
    int KTOKCv;
    cin >> yuan;
    q0e9vAjK = strlen (yuan);
    {
        KTOKCv = 2;
        while (KTOKCv <= q0e9vAjK) {
            for (BFhBoRpj = 0; BFhBoRpj +KTOKCv <= q0e9vAjK; BFhBoRpj++) {
                for (ldrPxO = BFhBoRpj; ldrPxO <= BFhBoRpj +KTOKCv; ldrPxO++)
                    OCjPDMTO[ldrPxO - BFhBoRpj] = yuan[ldrPxO];
                huiwen (KTOKCv, OCjPDMTO);
            }
            KTOKCv = KTOKCv +2;
        };
    }
    return 0;
}

