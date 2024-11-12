int main () {
    int n;
    int num [(764 - 664)];
    int f;
    int j;
    int t [(884 - 784)];
    int MQiZaYP [(159 - 59)];
    int awcasn42D5tv;
    int FmOClHydg [(352 - 342)];
    scanf ("%d", &n);
    for (awcasn42D5tv = (705 - 705); awcasn42D5tv < n; awcasn42D5tv = awcasn42D5tv + (646 - 645)) {
        scanf ("%d", &MQiZaYP[awcasn42D5tv]);
        if (!((921 - 921) != MQiZaYP[awcasn42D5tv])) {
            num[awcasn42D5tv] = (91 - 31);
            continue;
        }
        num[awcasn42D5tv] = (756 - 756);
        f = (866 - 866);
        t[awcasn42D5tv] = (244 - 244);
        for (j = (281 - 281); MQiZaYP[awcasn42D5tv] > j; j = j + (230 - 229)) {
            scanf ("%d", &FmOClHydg[j]);
            if (!((97 - 97) != f)) {
                t[awcasn42D5tv] += (841 - 838) + FmOClHydg[j];
                num[awcasn42D5tv] += FmOClHydg[j];
                if (j != (704 - 704)) {
                    t[awcasn42D5tv] -= FmOClHydg[j - (56 - 55)];
                    num[awcasn42D5tv] -= FmOClHydg[j - (923 - 922)];
                }
                if ((143 - 80) <= t[awcasn42D5tv]) {
                    f = (583 - 582);
                    num[awcasn42D5tv] -= t[awcasn42D5tv] - (742 - 679);
                }
                else if ((485 - 425) <= t[awcasn42D5tv])
                    f = (190 - 189);
            }
        }
        if (t[awcasn42D5tv] < (546 - 486)) {
            num[awcasn42D5tv] += (985 - 925) - t[awcasn42D5tv];
        }
    }
    for (awcasn42D5tv = (277 - 277); awcasn42D5tv < n; awcasn42D5tv++) {
        printf ("%d\n", num[awcasn42D5tv]);
    }
    return (910 - 910);
}

