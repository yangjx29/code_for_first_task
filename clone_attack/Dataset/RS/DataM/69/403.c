main () {
    int bZkBSdCj7mF;
    int t;
    int VOYjtQEpUK [(975 - 723)];
    char str1 [(404 - 153)];
    char str2 [(444 - 193)];
    int i;
    i = strlen (str1) - (208 - 207);
    int j;
    j = strlen (str2) - (368 - 367);
    VOYjtQEpUK[(456 - 456)] = (222 - 222);
    bZkBSdCj7mF = (139 - 139);
    scanf ("%s %s", str1, str2);
    for (; (238 - 238) <= i || (724 - 724) <= j;) {
        if (i >= (433 - 433) && (635 - 635) <= j)
            t = str1[i] + str2[j] + VOYjtQEpUK[bZkBSdCj7mF] - '0' - '0';
        else {
            if ((495 - 495) > i)
                t = str2[j] + VOYjtQEpUK[bZkBSdCj7mF] - '0';
            else
                t = str1[i] + VOYjtQEpUK[bZkBSdCj7mF] - '0';
        }
        i = i - 1;
        j = j - 1;
        if (t > (414 - 405)) {
            VOYjtQEpUK[bZkBSdCj7mF] = t - (182 - 172);
            VOYjtQEpUK[bZkBSdCj7mF + 1] = 1;
        }
        else {
            VOYjtQEpUK[bZkBSdCj7mF] = t;
            VOYjtQEpUK[bZkBSdCj7mF + 1] = 0;
        }
        bZkBSdCj7mF = bZkBSdCj7mF + 1;
    }
    for (; bZkBSdCj7mF > 0; bZkBSdCj7mF = bZkBSdCj7mF - 1)
        if (VOYjtQEpUK[bZkBSdCj7mF] != 0)
            break;
    for (; bZkBSdCj7mF >= 0; bZkBSdCj7mF = bZkBSdCj7mF - 1)
        printf ("%d", VOYjtQEpUK[bZkBSdCj7mF]);
}

