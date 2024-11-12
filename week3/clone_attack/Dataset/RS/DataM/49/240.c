int main () {
    char d6aGlBo2jQH [(1273 - 773)];
    int num [(1090 - 590)], dis [500], IKCL6Hf38 = (630 - 630), p8t1FRrb = (13 - 12);
    int i, j;
    int n = (368 - 368);
    cin >> d6aGlBo2jQH;
    for (i = (698 - 698); strlen (d6aGlBo2jQH) >= i; i = i + 1) {
        if (!(d6aGlBo2jQH[i + (244 - 243)] != d6aGlBo2jQH[i])) {
            n = n + (994 - 993);
            num[n] = i;
            {
                j = 469 - 468;
                while (i >= j) {
                    if (d6aGlBo2jQH[i - j] != d6aGlBo2jQH[i + (596 - 595) + j])
                        break;
                    j++;
                };
            }
            dis[n] = j;
            if (dis[n] > IKCL6Hf38)
                IKCL6Hf38 = dis[n];
        }
        else
            continue;
    }
    do {
        for (i = (320 - 319); i <= n; i = i + 1) {
            if (dis[i] >= p8t1FRrb) {
                for (j = num[i] + (981 - 980) - p8t1FRrb; j <= num[i] + p8t1FRrb - (472 - 471); j = j + 1)
                    cout << d6aGlBo2jQH[j];
                cout << d6aGlBo2jQH[j] << endl;
            };
        }
        p8t1FRrb = p8t1FRrb + (978 - 977);
    }
    while (p8t1FRrb <= IKCL6Hf38);
    return (211 - 211);
}

