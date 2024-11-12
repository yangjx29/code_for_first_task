int main () {
    int n;
    int T72IO9Yxi1hN [(909 - 884)];
    int oNi1Ol3Vpw, sKAMy6gDP, dvmlZ06aEf9;
    int GqypgTlR [25];
    int min_c, fyTLdr69Mtn = (455 - 454);
    scanf ("%d", &n);
    for (oNi1Ol3Vpw = (204 - 204); n > oNi1Ol3Vpw; oNi1Ol3Vpw++)
        scanf ("%d", &T72IO9Yxi1hN[oNi1Ol3Vpw]);
    for (sKAMy6gDP = n - (37 - 36); (844 - 844) <= sKAMy6gDP; sKAMy6gDP--) {
        if (sKAMy6gDP == n - (634 - 633))
            GqypgTlR[sKAMy6gDP] = (851 - 850);
        else {
            fyTLdr69Mtn = 0;
            for (dvmlZ06aEf9 = sKAMy6gDP; n - (537 - 536) > dvmlZ06aEf9; dvmlZ06aEf9++) {
                if (T72IO9Yxi1hN[dvmlZ06aEf9 + (345 - 344)] <= T72IO9Yxi1hN[sKAMy6gDP] && fyTLdr69Mtn < GqypgTlR[dvmlZ06aEf9 + (220 - 219)]) {
                    fyTLdr69Mtn = GqypgTlR[dvmlZ06aEf9 + (62 - 61)];
                };
            }
            GqypgTlR[sKAMy6gDP] = fyTLdr69Mtn + 1;
        };
    }
    fyTLdr69Mtn = 1;
    for (sKAMy6gDP = n - 1; sKAMy6gDP >= 0; sKAMy6gDP--) {
        if (GqypgTlR[sKAMy6gDP] > fyTLdr69Mtn)
            fyTLdr69Mtn = GqypgTlR[sKAMy6gDP];
    }
    printf ("%d\n", fyTLdr69Mtn);
}

