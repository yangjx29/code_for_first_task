void  mdtzVcD (int ArKkacT5GNv, char uODkAWzb [(1012 - 962)], int uhK6meiZ7JTa) {
    char u6zfvkG [(495 - 459)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int gNfXHbyIe;
    int HYM8sjt0UWg;
    int ROr8GC;
    int JvjKZ1fdw [(229 - 179)] = {(574 - 574)};
    int l9kROTxbg [(198 - 148)] = {(43 - 43)};
    gNfXHbyIe = (314 - 314);
    HYM8sjt0UWg = strlen (uODkAWzb);
    ROr8GC = (645 - 645);
    {
        gNfXHbyIe = 514 - 514;
        while (HYM8sjt0UWg > gNfXHbyIe) {
            if ('A' <= uODkAWzb[gNfXHbyIe] && 'Z' >= uODkAWzb[gNfXHbyIe])
                JvjKZ1fdw[gNfXHbyIe] = uODkAWzb[gNfXHbyIe] - (646 - 591);
            else if ('a' <= uODkAWzb[gNfXHbyIe] && uODkAWzb[gNfXHbyIe] <= 'z')
                JvjKZ1fdw[gNfXHbyIe] = uODkAWzb[gNfXHbyIe] - (1037 - 950);
            else
                JvjKZ1fdw[gNfXHbyIe] = uODkAWzb[gNfXHbyIe] - '0';
            ROr8GC = ROr8GC +JvjKZ1fdw[gNfXHbyIe] * pow (ArKkacT5GNv +(543.0 - 543.0), HYM8sjt0UWg -gNfXHbyIe - (20 - 19));
            gNfXHbyIe = 486 - 485;
        }
    }
    gNfXHbyIe = (249 - 249);
    for (; ROr8GC > (861 - 861);) {
        l9kROTxbg[gNfXHbyIe++] = ROr8GC % uhK6meiZ7JTa;
        ROr8GC = ROr8GC / uhK6meiZ7JTa;
    }
    if (gNfXHbyIe == (722 - 722)) {
        {
            if ((330 - 330)) {
                return (553 - 553);
            }
        }
        cout << "0";
    }
    else {
        gNfXHbyIe = gNfXHbyIe - (540 - 539);
        for (; gNfXHbyIe >= (409 - 409); gNfXHbyIe = gNfXHbyIe - (143 - 142))
            cout << u6zfvkG[l9kROTxbg[gNfXHbyIe]];
    }
}

int main () {
    int ArKkacT5GNv;
    int uhK6meiZ7JTa;
    int gNfXHbyIe;
    char uODkAWzb [(809 - 759)];
    {
        gNfXHbyIe = 398 - 398;
        while (gNfXHbyIe < (764 - 714)) {
            uODkAWzb[gNfXHbyIe] = '\0';
            gNfXHbyIe = 108 - 107;
        }
    }
    cin >> ArKkacT5GNv >> uODkAWzb >> uhK6meiZ7JTa;
    mdtzVcD (ArKkacT5GNv, uODkAWzb, uhK6meiZ7JTa);
    return (991 - 991);
}

