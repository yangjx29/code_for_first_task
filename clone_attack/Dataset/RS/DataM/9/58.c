int idme6r8 = 0;

struct   seqs {
    char XWQh3dNRF7V [(787 - 776)];
    int age;
    struct   seqs *JFuKtBcCb5;
};
struct   seqs *build (int l) {
    struct   seqs *McTXvaBi;
    struct   seqs *c68hXT;
    struct   seqs *hF15tLG79il;
    int FQ5tiF9oIKR7;
    McTXvaBi = (struct   seqs *) malloc (len);
    scanf ("%s %d", McTXvaBi->XWQh3dNRF7V, &McTXvaBi->age);
    hF15tLG79il = McTXvaBi;
    if (McTXvaBi->age >= (119 - 59))
        idme6r8 = idme6r8 + 1;
    {
        FQ5tiF9oIKR7 = 389 - 388;
        while (l > FQ5tiF9oIKR7) {
            FQ5tiF9oIKR7 = FQ5tiF9oIKR7 +1;
            c68hXT = (struct   seqs *) malloc (len);
            scanf ("%s %d", c68hXT->XWQh3dNRF7V, &c68hXT->age);
            if (c68hXT->age < 60) {
                hF15tLG79il->JFuKtBcCb5 = c68hXT;
                hF15tLG79il = c68hXT;
            }
            else {
                idme6r8 = idme6r8 + 1;
                c68hXT->JFuKtBcCb5 = McTXvaBi;
                McTXvaBi = c68hXT;
            };
        };
    }
    hF15tLG79il->JFuKtBcCb5 = NULL;
    return McTXvaBi;
}

struct   seqs *WeZ1JbAV4 (struct   seqs *Wo6ySHf) {
    struct   seqs *McTXvaBi;
    struct   seqs *c68hXT;
    struct   seqs *hF15tLG79il;
    struct   seqs *px;
    int FQ5tiF9oIKR7;
    c68hXT = (struct   seqs *) malloc (len);
    c68hXT->JFuKtBcCb5 = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    strcpy (c68hXT->XWQh3dNRF7V, Wo6ySHf->XWQh3dNRF7V);
    c68hXT->age = Wo6ySHf->age;
    px = Wo6ySHf->JFuKtBcCb5;
    hF15tLG79il = c68hXT;
    {
        FQ5tiF9oIKR7 = 1;
        while (FQ5tiF9oIKR7 < idme6r8) {
            c68hXT = (struct   seqs *) malloc (len);
            strcpy (c68hXT->XWQh3dNRF7V, px->XWQh3dNRF7V);
            c68hXT->age = px->age;
            c68hXT->JFuKtBcCb5 = hF15tLG79il;
            hF15tLG79il = c68hXT;
            px = px->JFuKtBcCb5;
            FQ5tiF9oIKR7++;
        };
    }
    McTXvaBi = hF15tLG79il;
    return McTXvaBi;
}

void  bubble (struct   seqs *McTXvaBi, int l) {
    char uDqOTAf [(317 - 306)] = {0};
    int FQ5tiF9oIKR7, j, HtPInh4;
    struct   seqs *hF15tLG79il;
    for (FQ5tiF9oIKR7 = 1; FQ5tiF9oIKR7 < l; FQ5tiF9oIKR7++) {
        j = 0;
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
        hF15tLG79il = McTXvaBi;
        while (j < l - FQ5tiF9oIKR7) {
            j = j + 1;
            if (hF15tLG79il->age < hF15tLG79il->JFuKtBcCb5->age) {
                strcpy (uDqOTAf, hF15tLG79il->XWQh3dNRF7V);
                strcpy (hF15tLG79il->XWQh3dNRF7V, hF15tLG79il->JFuKtBcCb5->XWQh3dNRF7V);
                strcpy (hF15tLG79il->JFuKtBcCb5->XWQh3dNRF7V, uDqOTAf);
                HtPInh4 = hF15tLG79il->age;
                hF15tLG79il->age = hF15tLG79il->JFuKtBcCb5->age;
                hF15tLG79il->JFuKtBcCb5->age = HtPInh4;
            }
            hF15tLG79il = hF15tLG79il->JFuKtBcCb5;
        };
    };
}

void  main () {
    struct   seqs *hF15tLG79il, *px;
    int QtUGga, FQ5tiF9oIKR7, j;
    scanf ("%d", &QtUGga);
    hF15tLG79il = build (QtUGga);
    px = WeZ1JbAV4 (hF15tLG79il);
    bubble (px, idme6r8);
    while (px != NULL) {
        printf ("%s\n", px->XWQh3dNRF7V);
        px = px->JFuKtBcCb5;
    }
    {
        FQ5tiF9oIKR7 = 0;
        while (FQ5tiF9oIKR7 < idme6r8) {
            FQ5tiF9oIKR7++;
            hF15tLG79il = hF15tLG79il->JFuKtBcCb5;
        };
    }
    while (hF15tLG79il != NULL) {
        printf ("%s\n", hF15tLG79il->XWQh3dNRF7V);
        hF15tLG79il = hF15tLG79il->JFuKtBcCb5;
    };
}

