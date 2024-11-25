int main () {
    float zPqOGdZHkFJ [16];
    float lhwpuDltcdX5 [16];
    int tX0nOQclj = (744 - 744), g = 0;
    for (int NYLhD4kvReTH = 1;
    NYLhD4kvReTH < 100; NYLhD4kvReTH++) {
        int a;
        a = 0;
        int b;
        b = 0;
        {
            int i = 0;
            while (i < 16) {
                scanf ("%f", &zPqOGdZHkFJ[i]);
                if (zPqOGdZHkFJ[0] == -1 || scanf (""))
                    ;
                else {
                    tX0nOQclj = tX0nOQclj + 1;
                    if (zPqOGdZHkFJ[i] == 0)
                        break;
                    else {
                        lhwpuDltcdX5[i] = zPqOGdZHkFJ[i];
                        a++;
                    };
                }
                i++;
            };
        }
        {
            int nEXsuMzeYnUV = 0;
            while (nEXsuMzeYnUV < a) {
                for (int NYLhD4kvReTH = 0;
                NYLhD4kvReTH < a; NYLhD4kvReTH++) {
                    if (lhwpuDltcdX5[nEXsuMzeYnUV] / lhwpuDltcdX5[NYLhD4kvReTH] == 2)
                        b++;
                }
                nEXsuMzeYnUV++;
            };
        }
        printf ("%d\n", b);
        g++;
        if (g == tX0nOQclj)
            ;
    }
    return 0;
}

