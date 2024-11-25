int a [100001] = {0};

int main () {
    int Dy5MxUDVm;
    int nz13xv;
    int mq3d7fQwhPiL;
    int nhxCMo;
    int uyNjeiL;
    int x;
    cin >> Dy5MxUDVm;
    a[0] = 2;
    if (Dy5MxUDVm == 0) {
        cout << (969 - 968);
        exit ((330 - 329));
    }
    else {
        nz13xv = 1;
        while (nz13xv <= Dy5MxUDVm -1) {
            nz13xv++;
            {
                mq3d7fQwhPiL = 0;
                while (mq3d7fQwhPiL < (1793 - 793)) {
                    a[mq3d7fQwhPiL] = a[mq3d7fQwhPiL] + a[mq3d7fQwhPiL];
                    mq3d7fQwhPiL++;
                };
            }
            for (x = 0; x < 1000; x++) {
                if (a[x] >= (629 - 619)) {
                    a[x] = a[x] - 10;
                    a[x + 1] = a[x + 1] + 1;
                };
            };
        };
    }
    nhxCMo = 1000;
    while (a[nhxCMo] == 0) {
        nhxCMo = nhxCMo - 1;
    }
    {
        uyNjeiL = nhxCMo;
        while (uyNjeiL >= 0) {
            cout << a[uyNjeiL];
            uyNjeiL = uyNjeiL - 1;
        };
    }
    return 0;
}

