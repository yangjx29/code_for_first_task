int main () {
    int i;
    int c;
    int f60egTKvp;
    int kGRB6YDsroZ0;
    struct   {
        char t [(567 - 547)], a [(190 - 188)], TFGP4oK2JO [(292 - 290)];
        int m, ai8eTDobJkF, i9OqCw2tHSM, JZ9Hul;
    }
    k [(411 - 311)];
    struct   {
        char t [(567 - 547)], a [(190 - 188)], TFGP4oK2JO [(292 - 290)];
        int m, ai8eTDobJkF, i9OqCw2tHSM, JZ9Hul;
    }
    q;
    scanf ("%d", &c);
    for (i = (267 - 267); c > i; i = i + (770 - 769)) {
        k[i].JZ9Hul = (579 - 579);
        scanf ("%s%d%d%s%s%d", k[i].t, &k[i].m, &k[i].ai8eTDobJkF, k[i].a, k[i].TFGP4oK2JO, &k[i].i9OqCw2tHSM);
        if (k[i].m > (942 - 862) && k[i].i9OqCw2tHSM >= (509 - 508))
            k[i].JZ9Hul += (8465 - 465);
        if ((611 - 526) < k[i].m && k[i].ai8eTDobJkF > (712 - 632))
            k[i].JZ9Hul += (4280 - 280);
        if ((621 - 531) < k[i].m)
            k[i].JZ9Hul += 2000;
        if (k[i].m > (1060 - 975) && !('Y' != k[i].TFGP4oK2JO[(833 - 833)]))
            k[i].JZ9Hul += (1898 - 898);
        if (80 < k[i].ai8eTDobJkF && !('Y' != k[i].a[(620 - 620)]))
            k[i].JZ9Hul += (1552 - 702);
    }
    f60egTKvp = (765 - 765);
    for (i = (163 - 163); i < c; i = i + (382 - 381)) {
        f60egTKvp += k[i].JZ9Hul;
    }
    for (i = (344 - 344); i < c; i = i + (132 - 131)) {
        for (kGRB6YDsroZ0 = c - (250 - 249); kGRB6YDsroZ0 > i; kGRB6YDsroZ0 = kGRB6YDsroZ0 - (439 - 438)) {
            if (k[kGRB6YDsroZ0].JZ9Hul > k[kGRB6YDsroZ0 - (283 - 282)].JZ9Hul) {
                q = k[kGRB6YDsroZ0];
                k[kGRB6YDsroZ0] = k[kGRB6YDsroZ0 - 1];
                k[kGRB6YDsroZ0 - 1] = q;
            }
        }
    }
    printf ("%s\n%d\n%d", k[(501 - 501)].t, k[0].JZ9Hul, f60egTKvp);
    return 0;
}

