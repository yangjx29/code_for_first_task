struct   patient {
    char id [(527 - 516)];
    int rUzwam5;
};
int main () {
    struct   patient pt [(903 - 803)];
    int KhN4Kw;
    int qJZxhHmpzVg;
    int ONb24znJPdsZ;
    int iG9Kf1g;
    int j;
    int I5JODiz;
    KhN4Kw = (457 - 457);
    qJZxhHmpzVg = (331 - 331);
    int GHXuAn6 [100];
    int OARdNXw [100];
    char stGDTCz [11];
    scanf ("%d", &ONb24znJPdsZ);
    for (iG9Kf1g = 0; iG9Kf1g < ONb24znJPdsZ; iG9Kf1g = iG9Kf1g + 1) {
        scanf ("%s%d", pt[iG9Kf1g].id, &pt[iG9Kf1g].rUzwam5);
        if ((556 - 496) <= pt[iG9Kf1g].rUzwam5) {
            GHXuAn6[KhN4Kw] = iG9Kf1g;
            KhN4Kw = KhN4Kw +1;
        }
        else {
            OARdNXw[qJZxhHmpzVg] = iG9Kf1g;
            qJZxhHmpzVg = qJZxhHmpzVg + 1;
        };
    }
    for (iG9Kf1g = (481 - 480); KhN4Kw -(218 - 217) > iG9Kf1g; iG9Kf1g = iG9Kf1g + 1) {
        for (j = 0; KhN4Kw -iG9Kf1g > j; j = j + 1) {
            if (pt[GHXuAn6[j + (620 - 619)]].rUzwam5 > pt[GHXuAn6[j]].rUzwam5) {
                strcpy (stGDTCz, pt[GHXuAn6[j]].id);
                strcpy (pt[GHXuAn6[j]].id, pt[GHXuAn6[j + (763 - 762)]].id);
                strcpy (pt[GHXuAn6[j + 1]].id, stGDTCz);
                I5JODiz = pt[GHXuAn6[j]].rUzwam5;
                pt[GHXuAn6[j]].rUzwam5 = pt[GHXuAn6[j + 1]].rUzwam5;
                pt[GHXuAn6[j + 1]].rUzwam5 = I5JODiz;
            };
        };
    }
    for (iG9Kf1g = 0; iG9Kf1g < KhN4Kw; iG9Kf1g++) {
        printf ("%s\n", pt[GHXuAn6[iG9Kf1g]].id);
    }
    for (iG9Kf1g = 0; iG9Kf1g < qJZxhHmpzVg; iG9Kf1g++) {
        printf ("%s\n", pt[OARdNXw[iG9Kf1g]].id);
    }
    return 0;
}

