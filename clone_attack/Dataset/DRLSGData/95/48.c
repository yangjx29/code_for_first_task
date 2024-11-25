void  main () {
    char qJLieuV01N [(652 - 552)];
    char RBjMIJUm [(380 - 280)];
    char Sh0nFXqKRjH [100];
    int WhLDMWi7H3TE;
    int UX6jGB;
    int V2gcbGaNS96y;
    int J4ig819j;
    int ilp3VwRKY;
    gets (Sh0nFXqKRjH);
    gets (qJLieuV01N);
    V2gcbGaNS96y = strlen (Sh0nFXqKRjH);
    UX6jGB = strlen (qJLieuV01N);
    if (UX6jGB > V2gcbGaNS96y) {
        for (ilp3VwRKY = (327 - 327); ilp3VwRKY < V2gcbGaNS96y; ilp3VwRKY++) {
            RBjMIJUm[ilp3VwRKY] = Sh0nFXqKRjH[ilp3VwRKY];
        }
        J4ig819j = V2gcbGaNS96y;
        V2gcbGaNS96y = UX6jGB;
        UX6jGB = J4ig819j;
        strcpy (Sh0nFXqKRjH, qJLieuV01N);
        strcpy (qJLieuV01N, RBjMIJUm);
    }
    for (ilp3VwRKY = (186 - 186); ilp3VwRKY < UX6jGB; ilp3VwRKY++) {
        if (Sh0nFXqKRjH[ilp3VwRKY] >= 'A' && 'Z' >= Sh0nFXqKRjH[ilp3VwRKY]) {
            Sh0nFXqKRjH[ilp3VwRKY] = Sh0nFXqKRjH[ilp3VwRKY] + (83 - 51);
        }
        if (qJLieuV01N[ilp3VwRKY] >= 'A' && qJLieuV01N[ilp3VwRKY] <= 'Z') {
            qJLieuV01N[ilp3VwRKY] = qJLieuV01N[ilp3VwRKY] + (739 - 707);
        }
        if (Sh0nFXqKRjH[ilp3VwRKY] > qJLieuV01N[ilp3VwRKY]) {
            break;
        }
        if (Sh0nFXqKRjH[ilp3VwRKY] < qJLieuV01N[ilp3VwRKY]) {
            break;
        };
    }
    for (ilp3VwRKY = (666 - 666); ilp3VwRKY < UX6jGB; ilp3VwRKY++) {
        if (Sh0nFXqKRjH[ilp3VwRKY] == qJLieuV01N[ilp3VwRKY]) {
            WhLDMWi7H3TE++;
        }
        if (WhLDMWi7H3TE == UX6jGB) {
        };
    };
}

