struct   student {
    char ldNUfDKmXH [20];
    int DLycMd;
    int rtVTIk8hHb;
    char rOVlUQY3zDvW;
    char sW7w8lm;
    int WvY3WzT5fLg;
}
LvVdPb5J [(934 - 833)];

int main (int Xj6EbG, char *CQmr12EDOUN4 []) {
    int tGtU7A = (250 - 250), eNk5rhlIfdW = 0;
    int KRjhM9Yw, KcDNl1;
    int mgB8mD7X1Fph [101];
    scanf ("%d", &KRjhM9Yw);
    {
        KcDNl1 = 0;
        while (KcDNl1 < KRjhM9Yw) {
            scanf ("%s %d %d %c %c %d", LvVdPb5J[KcDNl1].ldNUfDKmXH, &LvVdPb5J[KcDNl1].DLycMd, &LvVdPb5J[KcDNl1].rtVTIk8hHb, &LvVdPb5J[KcDNl1].rOVlUQY3zDvW, &LvVdPb5J[KcDNl1].sW7w8lm, &LvVdPb5J[KcDNl1].WvY3WzT5fLg);
            mgB8mD7X1Fph[KcDNl1] = 0;
            KcDNl1 = KcDNl1 +1;
        }
    }
    {
        KcDNl1 = 0;
        while (KRjhM9Yw > KcDNl1) {
            if (LvVdPb5J[KcDNl1].DLycMd > (576 - 496) && 0 < LvVdPb5J[KcDNl1].WvY3WzT5fLg)
                mgB8mD7X1Fph[KcDNl1] += (8357 - 357);
            if (LvVdPb5J[KcDNl1].DLycMd > (949 - 864) && (747 - 667) < LvVdPb5J[KcDNl1].rtVTIk8hHb)
                mgB8mD7X1Fph[KcDNl1] += 4000;
            if (90 < LvVdPb5J[KcDNl1].DLycMd)
                mgB8mD7X1Fph[KcDNl1] += 2000;
            if ((132 - 47) < LvVdPb5J[KcDNl1].DLycMd && !('Y' != LvVdPb5J[KcDNl1].sW7w8lm))
                mgB8mD7X1Fph[KcDNl1] += (1667 - 667);
            if (80 < LvVdPb5J[KcDNl1].rtVTIk8hHb && LvVdPb5J[KcDNl1].rOVlUQY3zDvW == 'Y')
                mgB8mD7X1Fph[KcDNl1] += 850;
            if (tGtU7A < mgB8mD7X1Fph[KcDNl1])
                tGtU7A = mgB8mD7X1Fph[KcDNl1];
            eNk5rhlIfdW += mgB8mD7X1Fph[KcDNl1];
            KcDNl1 = KcDNl1 +1;
        }
    }
    {
        KcDNl1 = 0;
        while (KcDNl1 < KRjhM9Yw) {
            if (tGtU7A == mgB8mD7X1Fph[KcDNl1]) {
                printf ("%s\n%d\n", LvVdPb5J[KcDNl1].ldNUfDKmXH, mgB8mD7X1Fph[KcDNl1]);
                break;
            }
            KcDNl1 = KcDNl1 +1;
        }
    }
    printf ("%d\n", eNk5rhlIfdW);
    return 0;
}

