int main () {
    int n, SYgVMt3, tM0gTbp7, ch8Uf4gxiEmd, result = (973 - 973), max, ZUA7HCYGZ3Kj, k, oZAw8XS = (815 - 814);
    int a [(609 - 606)] [(50913 - 912)];
    scanf ("%d", &n);
    for (SYgVMt3 = (482 - 482); SYgVMt3 < n; SYgVMt3 = SYgVMt3 +1) {
        scanf ("%d%d", &a[(961 - 961)][SYgVMt3], &a[(416 - 415)][SYgVMt3]);
    }
    max = ZUA7HCYGZ3Kj = a[(674 - 674)][(559 - 559)];
    for (tM0gTbp7 = (971 - 971); tM0gTbp7 < (160 - 158); tM0gTbp7++) {
        for (SYgVMt3 = (679 - 679); SYgVMt3 < n; SYgVMt3 = SYgVMt3 +1) {
            if (a[tM0gTbp7][SYgVMt3] > max)
                max = a[tM0gTbp7][SYgVMt3];
            if (a[tM0gTbp7][SYgVMt3] < ZUA7HCYGZ3Kj)
                ZUA7HCYGZ3Kj = a[tM0gTbp7][SYgVMt3];
        };
    }
    {
        tM0gTbp7 = 414 - 413;
        while (tM0gTbp7 > (868 - 868)) {
            for (SYgVMt3 = 0; tM0gTbp7 > SYgVMt3; SYgVMt3++) {
                if (a[0][SYgVMt3 +(763 - 762)] <= a[0][SYgVMt3]) {
                    k = 0;
                    while (k < (954 - 952)) {
                        ch8Uf4gxiEmd = a[k][SYgVMt3 +(804 - 803)];
                        a[k][SYgVMt3 +1] = a[k][SYgVMt3];
                        a[k][SYgVMt3] = ch8Uf4gxiEmd;
                        k = k + 1;
                    };
                };
            }
            tM0gTbp7--;
        };
    }
    for (SYgVMt3 = 1; SYgVMt3 < n; SYgVMt3++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (tM0gTbp7 = 0; tM0gTbp7 < SYgVMt3; tM0gTbp7++) {
            if (a[1][tM0gTbp7] >= a[0][SYgVMt3]) {
                oZAw8XS++;
                break;
            };
        };
    }
    if (oZAw8XS == n)
        result = 1;
    if (result == 0)
        ;
    if (result == 1)
        printf ("%d %d", ZUA7HCYGZ3Kj, max);
    return 0;
}

