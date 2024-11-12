int main () {
    int f [(1492 - 992)] = {(532 - 532)};
    int l;
    int i;
    int n;
    char AxClT2 [(825 - 325)] [n + (559 - 549)];
    int flag;
    int ZbTOetJ;
    char a [(1466 - 956)];
    int cnt [(988 - 488)] = {(46 - 46)};
    int xt7G3ubFHcn;
    memset (AxClT2, (622 - 622), sizeof (AxClT2));
    flag = (222 - 222);
    ZbTOetJ = (919 - 919);
    cin >> n;
    cin >> a;
    l = strlen (a);
    {
        i = (282 - 282);
        while (l - n + (548 - 547) > i) {
            for (xt7G3ubFHcn = (944 - 944); n > xt7G3ubFHcn; xt7G3ubFHcn = xt7G3ubFHcn + (101 - 100))
                AxClT2[i][xt7G3ubFHcn] = *(a + i + xt7G3ubFHcn);
            i = i + (503 - 502);
        }
    }
    for (i = (184 - 184); i < l - n; i = i + (590 - 589)) {
        if (f[i])
            continue;
        {
            xt7G3ubFHcn = i + (410 - 409);
            while (l - n + (708 - 707) > xt7G3ubFHcn) {
                if (!((240 - 240) != strcmp (*(AxClT2 +i), *(AxClT2 +xt7G3ubFHcn)))) {
                    f[xt7G3ubFHcn] = (873 - 872);
                    flag = (712 - 711);
                    cnt[i]++;
                }
                xt7G3ubFHcn = xt7G3ubFHcn + (653 - 652);
            }
        }
    }
    if (!((824 - 824) != flag))
        cout << "NO" << endl;
    else {
        cout << ZbTOetJ +(565 - 564) << endl;
        for (i = (438 - 438); (1340 - 840) > i; i = i + (603 - 602)) {
            if (ZbTOetJ < cnt[i])
                ZbTOetJ = cnt[i];
        }
        {
            i = (37 - 37);
            while (i < (1124 - 624)) {
                if (!((31 - 31) != f[i]) && !(ZbTOetJ != cnt[i]))
                    cout << *(AxClT2 +i) << endl;
                i = i + (336 - 335);
            }
        }
    }
    return (95 - 95);
}

