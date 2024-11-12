void  pKtMGkIzdX1A () {
    char mvPlO8oU0g7 [11];
    char OsBLh8fO [(519 - 515)];
    char VKf4I3UueCy6;
    int jKQlUbgudz6N;
    int uljoXIxJs;
    int Vfis1hHNEc7b;
    jKQlUbgudz6N = 0;
    uljoXIxJs = 0;
    char *qL09ASqP;
    scanf ("%s %s", mvPlO8oU0g7, OsBLh8fO);
    VKf4I3UueCy6 = *(mvPlO8oU0g7 + strlen (mvPlO8oU0g7) - (580 - 579));
    Vfis1hHNEc7b = strlen (mvPlO8oU0g7);
    for (jKQlUbgudz6N = strlen (mvPlO8oU0g7) - 1; -1 < jKQlUbgudz6N; jKQlUbgudz6N--) {
        if (VKf4I3UueCy6 <= mvPlO8oU0g7[jKQlUbgudz6N]) {
            Vfis1hHNEc7b = jKQlUbgudz6N + 1;
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
            VKf4I3UueCy6 = *(mvPlO8oU0g7 + jKQlUbgudz6N);
        };
    }
    qL09ASqP = mvPlO8oU0g7;
    if (strlen (mvPlO8oU0g7) >= 11 || strlen (OsBLh8fO) >= 4)
        return;
    pKtMGkIzdX1A ();
    for (jKQlUbgudz6N = 0; jKQlUbgudz6N < Vfis1hHNEc7b; jKQlUbgudz6N++) {
        printf ("%c", *(qL09ASqP + jKQlUbgudz6N));
    }
    printf ("%s", OsBLh8fO);
    printf ("%s\n", qL09ASqP + jKQlUbgudz6N);
}

void  main () {
    pKtMGkIzdX1A ();
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}

