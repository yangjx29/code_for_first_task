int main () {
    int UUxN8OtJg6 (long  int r), oWv2gtZnY5Tk (long  int r);
    long  int L2tjPcS1UH, M9kfMFD5rB1, VYwskfF = (819 - 819), M9UWudmY47, BksNR1HZ, Lg5ONU = 0, UkgurNI0Sa;
    int U8fgNe0l [1000];
    scanf ("%d %d", &L2tjPcS1UH, &M9kfMFD5rB1);
    {
        UkgurNI0Sa = L2tjPcS1UH;
        while (UkgurNI0Sa <= M9kfMFD5rB1) {
            M9UWudmY47 = UUxN8OtJg6 (UkgurNI0Sa);
            BksNR1HZ = oWv2gtZnY5Tk (UkgurNI0Sa);
            if (M9UWudmY47 == 0 && BksNR1HZ == 0) {
                U8fgNe0l[VYwskfF] = UkgurNI0Sa;
                VYwskfF++;
                Lg5ONU = VYwskfF;
            }
            UkgurNI0Sa = UkgurNI0Sa +1;
        };
    }
    if (Lg5ONU == 0)
        printf ("no");
    else {
        for (VYwskfF = 0; Lg5ONU -(575 - 574) > VYwskfF; VYwskfF++)
            printf ("%d,", U8fgNe0l[VYwskfF]);
        printf ("%d", U8fgNe0l[Lg5ONU -(24 - 23)]);
    };
}

int UUxN8OtJg6 (long  int L2tjPcS1UH) {
    long  int UkgurNI0Sa, H7BgwFzlq6, DROQWtcuMwF = 1;
    H7BgwFzlq6 = sqrt (L2tjPcS1UH);
    {
        UkgurNI0Sa = 475 - 473;
        while (UkgurNI0Sa <= H7BgwFzlq6) {
            if (L2tjPcS1UH % UkgurNI0Sa == 0)
                break;
            UkgurNI0Sa++;
        };
    }
    if (UkgurNI0Sa > H7BgwFzlq6)
        DROQWtcuMwF = 0;
    return DROQWtcuMwF;
}

int oWv2gtZnY5Tk (long  int L2tjPcS1UH) {
    long  int U8fgNe0l [200];
    long  int M9kfMFD5rB1, UnjEVCNYO8, VYwskfF = 0, H7BgwFzlq6, r;
    UnjEVCNYO8 = log10 (L2tjPcS1UH);
    {
        M9kfMFD5rB1 = 0;
        H7BgwFzlq6 = UnjEVCNYO8;
        while (M9kfMFD5rB1 <= UnjEVCNYO8) {
            r = pow (10, H7BgwFzlq6);
            H7BgwFzlq6 = H7BgwFzlq6 -1;
            U8fgNe0l[M9kfMFD5rB1] = L2tjPcS1UH / r;
            L2tjPcS1UH = L2tjPcS1UH -U8fgNe0l[M9kfMFD5rB1] * r;
            M9kfMFD5rB1 = M9kfMFD5rB1 +1;
        };
    }
    for (M9kfMFD5rB1 = 0; M9kfMFD5rB1 <= UnjEVCNYO8 / 2; M9kfMFD5rB1++)
        if (U8fgNe0l[M9kfMFD5rB1] != U8fgNe0l[UnjEVCNYO8 -M9kfMFD5rB1]) {
            VYwskfF = 1;
            break;
        }
    return VYwskfF;
}

