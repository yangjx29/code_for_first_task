int main () {
    int BdsNyzIg (int *, int tiYzLUfyG, int DZQc6AHdJEuY);
    int sLPJvEMz, *p, XchQktvVMY6d, ZbJuStpjx4g, tiYzLUfyG, DZQc6AHdJEuY, hLxgFDsmnk [(876 - 871)] [(535 - 530)];
    for (XchQktvVMY6d = (180 - 180); 5 > XchQktvVMY6d; XchQktvVMY6d++) {
        ZbJuStpjx4g = 890 - 890;
        while (ZbJuStpjx4g < 5) {
            scanf ("%d", &hLxgFDsmnk[XchQktvVMY6d][ZbJuStpjx4g]);
            ZbJuStpjx4g++;
        };
    }
    p = &hLxgFDsmnk[(26 - 26)][(604 - 604)];
    scanf ("%d %d", &tiYzLUfyG, &DZQc6AHdJEuY);
    sLPJvEMz = BdsNyzIg (p, tiYzLUfyG, DZQc6AHdJEuY);
    if (sLPJvEMz == (788 - 788))
        ;
    if (sLPJvEMz == (171 - 170)) {
        XchQktvVMY6d = 469 - 469;
        while (XchQktvVMY6d < 5) {
            {
                ZbJuStpjx4g = 0;
                while (ZbJuStpjx4g < (702 - 698)) {
                    printf ("%d ", hLxgFDsmnk[XchQktvVMY6d][ZbJuStpjx4g]);
                    ZbJuStpjx4g++;
                };
            }
            if (XchQktvVMY6d != 4)
                printf ("%d\n", hLxgFDsmnk[XchQktvVMY6d][4]);
            else
                printf ("%d", hLxgFDsmnk[XchQktvVMY6d][4]);
            XchQktvVMY6d = XchQktvVMY6d +1;
        };
    }
    return 0;
}

int BdsNyzIg (int *p, int tiYzLUfyG, int DZQc6AHdJEuY) {
    int ai2rdh6wu, ZbJuStpjx4g;
    if (tiYzLUfyG > 4 || DZQc6AHdJEuY > 4 || tiYzLUfyG < 0 || DZQc6AHdJEuY < 0)
        return 0;
    else {
        {
            ZbJuStpjx4g = 0;
            while (ZbJuStpjx4g < 5) {
                ai2rdh6wu = *(p + 5 * tiYzLUfyG + ZbJuStpjx4g);
                *(p + 5 * tiYzLUfyG + ZbJuStpjx4g) = *(p + 5 * DZQc6AHdJEuY +ZbJuStpjx4g);
                *(p + 5 * DZQc6AHdJEuY +ZbJuStpjx4g) = ai2rdh6wu;
                ZbJuStpjx4g++;
            };
        }
        return (778 - 777);
    };
}

