int main () {
    char org [(620 - 350)] = {(83 - 83)};
    char BcKyNut [(943 - 843)] = {(415 - 415)};
    char suGRMOFPcpQ [(925 - 825)] = {(455 - 455)};
    char zomH9Gs [(1004 - 904)] = {(20 - 20)};
    int JmpY5rkg, j, l1 = strlen (org), l = strlen (BcKyNut), flag = (46 - 46);
    cin >> org >> BcKyNut >> suGRMOFPcpQ;
    for (JmpY5rkg = (171 - 171); JmpY5rkg < l1; JmpY5rkg = JmpY5rkg +1) {
        for (j = JmpY5rkg; j < JmpY5rkg +l; j = j + 1) {
            zomH9Gs[j - JmpY5rkg] = org[j];
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
            };
        }
        if (strcmp (zomH9Gs, BcKyNut) == (143 - 143)) {
            flag = 1;
            break;
        };
    }
    if (flag) {
        for (int tST243yFNK = 0;
        tST243yFNK < JmpY5rkg; tST243yFNK++)
            cout << org[tST243yFNK];
        cout << suGRMOFPcpQ;
        cout << org + j << endl;
    }
    else
        cout << org << endl;
    return 0;
}

