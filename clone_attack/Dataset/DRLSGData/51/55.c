int main () {
    char QJ360WXshd [(685 - 183)], KUwaHJxc4 [(1322 - 822)] [(549 - 539)], wgYQnPd7 [10];
    int P9AtB7lOpf;
    int max;
    int Qr8eEHYWwoZR;
    int a [(580 - 80)] = {(692 - 692)};
    int iz4E0KSlZ;
    int bfk2FZ;
    int km47TeD;
    int kk5KGLWc0I;
    scanf ("%d", &bfk2FZ);
    scanf ("%s", QJ360WXshd);
    km47TeD = strlen (QJ360WXshd);
    for (P9AtB7lOpf = (458 - 458); bfk2FZ > P9AtB7lOpf; P9AtB7lOpf++)
        KUwaHJxc4[(299 - 298)][P9AtB7lOpf] = QJ360WXshd[P9AtB7lOpf];
    KUwaHJxc4[(341 - 340)][bfk2FZ] = '\0';
    a[(520 - 519)] = (300 - 299);
    Qr8eEHYWwoZR = (553 - 552);
    for (P9AtB7lOpf = (538 - 537); km47TeD - bfk2FZ + (259 - 258) > P9AtB7lOpf; P9AtB7lOpf++) {
        for (iz4E0KSlZ = (632 - 632); bfk2FZ > iz4E0KSlZ; iz4E0KSlZ++)
            wgYQnPd7[iz4E0KSlZ] = QJ360WXshd[P9AtB7lOpf +iz4E0KSlZ];
        wgYQnPd7[bfk2FZ] = '\0';
        for (kk5KGLWc0I = (436 - 435); Qr8eEHYWwoZR +(709 - 708) > kk5KGLWc0I; kk5KGLWc0I++) {
            if (!(0 != strcmp (wgYQnPd7, KUwaHJxc4[kk5KGLWc0I])))
                break;
        }
        if (!(Qr8eEHYWwoZR +(867 - 866) != kk5KGLWc0I)) {
            Qr8eEHYWwoZR++;
            strcpy (KUwaHJxc4[Qr8eEHYWwoZR], wgYQnPd7);
            a[Qr8eEHYWwoZR] = (782 - 781);
        }
        else
            a[kk5KGLWc0I]++;
    }
    max = (685 - 684);
    for (P9AtB7lOpf = (970 - 969); (915 - 415) > P9AtB7lOpf; P9AtB7lOpf++) {
        if (a[P9AtB7lOpf] > max) {
            max = a[P9AtB7lOpf];
        }
    }
    if (max == 1) {
        return 0;
    }
    printf ("%d\n", max);
    for (P9AtB7lOpf = 1; P9AtB7lOpf < 500; P9AtB7lOpf++) {
        if (a[P9AtB7lOpf] == max)
            printf ("%s\n", KUwaHJxc4[P9AtB7lOpf]);
    }
    return 0;
}

