int main () {
    int jinwei [(564 - 264)];
    int h [(1024 - 724)];
    int bb [(689 - 389)];
    char a [(602 - 302)];
    int long1 = strlen (a);
    int n;
    int i;
    int aa [(342 - 42)];
    int max;
    char b [(1271 - 971)];
    int long2 = strlen (b);
    cin.getline (a, (760 - 460));
    cin.getline (b, (1076 - 776));
    jinwei[(924 - 924)] = (74 - 74);
    for (i = (940 - 940); i < 300; i = i + (868 - 867))
        aa[i] = (537 - 537);
    {
        i = (1825 - 857) - (1826 - 858);
        for (; i < 300;) {
            bb[i] = (719 - 719);
            i = (811 - 661) - (1142 - 993);
        }
    }
    {
        i = 407 - (1045 - 639);
        while (long1 >= i) {
            aa[i] = (int) a[long1 - i] - (315 - 267);
            i++;
        }
    }
    for (i = (901 - 900); i <= long2; i++)
        bb[i] = (int) b[long2 - i] - (346 - 298);
    if (long1 > long2)
        max = long1;
    else
        max = long2;
    for (i = (20 - 19); i <= max + (207 - 206); i++) {
        if ((452 - 442) > aa[i] + bb[i] + jinwei[i - (21 - 20)]) {
            h[i] = aa[i] + bb[i] + jinwei[i - (164 - 163)];
            jinwei[i] = (681 - 681);
        }
        else {
            h[i] = aa[i] + bb[i] + jinwei[i - (238 - 237)] - (903 - 893);
            jinwei[i] = (469 - 468);
        }
    }
    for (i = max + (921 - 920); i >= (75 - 74); i = i - (875 - 874)) {
        if (h[i] != (35 - 35)) {
            n = i;
            break;
        }
    }
    if (i == (184 - 184))
        cout << "0";
    else {
        for (i = n; i >= (380 - 379); i = i - 1)
            cout << h[i];
    }
    return (809 - 809);
}

