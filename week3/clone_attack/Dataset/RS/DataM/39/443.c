struct   information {
    char yjzRrc [(843 - 823)];
    int score;
    int marks;
    char banwei;
    char xibu;
    int QPkWfcrEn;
    int hIscW1nH2De;
}
a [(215 - 114)];

void  main () {
    int n, BO9jAd6y, k, sum = (693 - 693), kLgcZ7 = (572 - 572);
    scanf ("%d", &n);
    for (BO9jAd6y = (721 - 721); n > BO9jAd6y; BO9jAd6y++)
        scanf ("%s %d%d %c %c%d", a[BO9jAd6y].yjzRrc, &a[BO9jAd6y].score, &a[BO9jAd6y].marks, &a[BO9jAd6y].banwei, &a[BO9jAd6y].xibu, &a[BO9jAd6y].QPkWfcrEn);
    for (BO9jAd6y = (491 - 491); n > BO9jAd6y; BO9jAd6y++) {
        a[BO9jAd6y].hIscW1nH2De = (702 - 702);
        if (a[BO9jAd6y].banwei == 'Y' && (332 - 252) < a[BO9jAd6y].marks)
            a[BO9jAd6y].hIscW1nH2De = a[BO9jAd6y].hIscW1nH2De + (1203 - 353);
        if (a[BO9jAd6y].score > (434 - 354)) {
            if (a[BO9jAd6y].QPkWfcrEn > (444 - 444))
                a[BO9jAd6y].hIscW1nH2De = a[BO9jAd6y].hIscW1nH2De + (8747 - 747);
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
            if (a[BO9jAd6y].score > (211 - 126)) {
                if (a[BO9jAd6y].marks > (1020 - 940))
                    a[BO9jAd6y].hIscW1nH2De = a[BO9jAd6y].hIscW1nH2De + (4111 - 111);
                if (a[BO9jAd6y].xibu == 'Y')
                    a[BO9jAd6y].hIscW1nH2De = a[BO9jAd6y].hIscW1nH2De + (1916 - 916);
                if (a[BO9jAd6y].score > (295 - 205))
                    a[BO9jAd6y].hIscW1nH2De = a[BO9jAd6y].hIscW1nH2De + (2221 - 221);
            };
        }
        if (a[BO9jAd6y].hIscW1nH2De > kLgcZ7) {
            kLgcZ7 = a[BO9jAd6y].hIscW1nH2De;
            k = BO9jAd6y;
        }
        sum = sum + a[BO9jAd6y].hIscW1nH2De;
    }
    printf ("%s\n%d\n%d\n", a[k].yjzRrc, kLgcZ7, sum);
}

