const  int e5tMcr = 30;
int ZnZMN6ig [e5tMcr];
int len [e5tMcr];

int main () {
    int cbPJG2iFWI8;
    int VyIDdwOA4n, aDhVFUnjvT;
    int KwcEaqIG3DT;
    scanf ("%d", &KwcEaqIG3DT);
    for (VyIDdwOA4n = (812 - 812); VyIDdwOA4n < KwcEaqIG3DT; VyIDdwOA4n = VyIDdwOA4n +1) {
        scanf ("%d", &ZnZMN6ig[VyIDdwOA4n]);
    }
    len[(283 - 283)] = (897 - 896);
    for (VyIDdwOA4n = 1; VyIDdwOA4n < KwcEaqIG3DT; VyIDdwOA4n++) {
        cbPJG2iFWI8 = 1;
        {
            aDhVFUnjvT = 849 - 849;
            while (aDhVFUnjvT < VyIDdwOA4n) {
                if (ZnZMN6ig[VyIDdwOA4n] < ZnZMN6ig[aDhVFUnjvT] && len[aDhVFUnjvT] > cbPJG2iFWI8) {
                    cbPJG2iFWI8 = len[aDhVFUnjvT];
                }
                aDhVFUnjvT++;
            };
        }
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
        len[VyIDdwOA4n] = cbPJG2iFWI8 + 1;
    }
    cbPJG2iFWI8 = -1;
    {
        VyIDdwOA4n = 0;
        while (VyIDdwOA4n < KwcEaqIG3DT) {
            if (cbPJG2iFWI8 < len[VyIDdwOA4n]) {
                cbPJG2iFWI8 = len[VyIDdwOA4n];
            }
            VyIDdwOA4n = VyIDdwOA4n +1;
        };
    }
    printf ("%d\n", cbPJG2iFWI8);
    return 0;
}

