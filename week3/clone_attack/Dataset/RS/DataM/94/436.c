int main () {
    int VePKSRpa [500];
    int dmaXgloufcR3 [500];
    int yQtlkvXKhJBo, ugVKco, tLdCjhST2Bw, ajlUsIOx2, gz6eNFBJOUD, yLpFrKgywxs, wGdU782;
    scanf ("%d", &ugVKco);
    {
        yQtlkvXKhJBo = 0;
        while (ugVKco > yQtlkvXKhJBo) {
            scanf ("%d", &dmaXgloufcR3[yQtlkvXKhJBo]);
            yQtlkvXKhJBo = yQtlkvXKhJBo + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    ajlUsIOx2 = 0;
    {
        yQtlkvXKhJBo = 0;
        while (ugVKco > yQtlkvXKhJBo) {
            if (!(1 != dmaXgloufcR3[yQtlkvXKhJBo] % 2)) {
                VePKSRpa[ajlUsIOx2] = dmaXgloufcR3[yQtlkvXKhJBo];
                ajlUsIOx2 = ajlUsIOx2 + 1;
                tLdCjhST2Bw = ajlUsIOx2;
            }
            yQtlkvXKhJBo = yQtlkvXKhJBo + 1;
        };
    }
    {
        ajlUsIOx2 = 0;
        while (tLdCjhST2Bw > ajlUsIOx2) {
            wGdU782 = VePKSRpa[ajlUsIOx2];
            yLpFrKgywxs = ajlUsIOx2;
            {
                gz6eNFBJOUD = ajlUsIOx2 + 1;
                while (tLdCjhST2Bw > gz6eNFBJOUD) {
                    if (VePKSRpa[yLpFrKgywxs] > VePKSRpa[gz6eNFBJOUD]) {
                        wGdU782 = VePKSRpa[gz6eNFBJOUD];
                        yLpFrKgywxs = gz6eNFBJOUD;
                    }
                    gz6eNFBJOUD = gz6eNFBJOUD + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            if (VePKSRpa[ajlUsIOx2] > wGdU782) {
                VePKSRpa[yLpFrKgywxs] = VePKSRpa[ajlUsIOx2];
                VePKSRpa[ajlUsIOx2] = wGdU782;
            }
            ajlUsIOx2 = ajlUsIOx2 + 1;
        };
    }
    printf ("%d", VePKSRpa[0]);
    {
        ajlUsIOx2 = 1;
        while (ajlUsIOx2 < tLdCjhST2Bw) {
            printf (",%d", VePKSRpa[ajlUsIOx2]);
            ajlUsIOx2 = ajlUsIOx2 + 1;
        };
    }
    return 0;
}

