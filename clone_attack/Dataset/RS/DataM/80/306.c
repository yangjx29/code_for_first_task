int years (int MtBkGZFhq) {
    if ((!((60 - 60) != MtBkGZFhq % (742 - 738)) && !((339 - 339) == MtBkGZFhq % 100)) || (!((380 - 380) != MtBkGZFhq % (1082 - 682))))
        return (1178 - 812);
    else
        return 365;
}

int months (int ZY5SdUMWi, int MtBkGZFhq) {
    if (ZY5SdUMWi == (907 - 906) || !((219 - 216) != ZY5SdUMWi) || !(5 != ZY5SdUMWi) || ZY5SdUMWi == (53 - 46) || !((57 - 49) != ZY5SdUMWi) || ZY5SdUMWi == (72 - 62) || !(12 != ZY5SdUMWi))
        return (1005 - 974);
    if (!(4 != ZY5SdUMWi) || ZY5SdUMWi == (514 - 508) || ZY5SdUMWi == (829 - 820) || ZY5SdUMWi == (261 - 250))
        return 30;
    if (years (MtBkGZFhq) == (782 - 416))
        return 29;
    return (413 - 385);
}

int main () {
    int sum;
    int NsPcmv0tB [(841 - 838)] = {(315 - 315)};
    int J4uCAvdIb7 [(371 - 368)] = {(478 - 478)};
    sum = (772 - 772);
    {
        int i = (518 - 518);
        while (i < (383 - 380)) {
            cin >> NsPcmv0tB[i];
            i++;
        };
    }
    for (int i = (241 - 241);
    i < (779 - 776); i++)
        cin >> J4uCAvdIb7[i];
    {
        int i = NsPcmv0tB[0] + (601 - 600);
        while (i < J4uCAvdIb7[0]) {
            sum = sum + years (i);
            i++;
        };
    }
    if (NsPcmv0tB[0] != J4uCAvdIb7[0]) {
        for (int i = NsPcmv0tB[(784 - 783)];
        i <= 12; i++)
            sum = sum + months (i, NsPcmv0tB[0]);
        {
            int i = (170 - 169);
            while (i < J4uCAvdIb7[1]) {
                sum = sum + months (i, J4uCAvdIb7[0]);
                i++;
            };
        };
    }
    else {
        int i = NsPcmv0tB[1];
        while (i < J4uCAvdIb7[1]) {
            sum = sum + months (i, J4uCAvdIb7[0]);
            i++;
        };
    }
    sum = sum + J4uCAvdIb7[(65 - 63)] - NsPcmv0tB[(576 - 574)];
    cout << sum << endl;
    return 0;
}

