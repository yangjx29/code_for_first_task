int main (int argc, char *fhDMs4OSaf []) {
    int wotMhgw9jG;
    int i;
    int e4KGOyU6D;
    int xE1s7zvAjb;
    int NPFol8zq;
    int n;
    int u5h40pX [(607 - 506)];
    wotMhgw9jG = (382 - 382);
    char wQt1NXjSc [(678 - 577)];
    char ANOmAUCTjhpi [(879 - 778)];
    while (gets (wQt1NXjSc)) {
        strcpy (ANOmAUCTjhpi, wQt1NXjSc);
        {
            e4KGOyU6D = 120 - 120;
            i = 380 - 380;
            while (wQt1NXjSc[i]) {
                if (wQt1NXjSc[i] == '(') {
                    u5h40pX[e4KGOyU6D] = i;
                    e4KGOyU6D++;
                }
                i++;
            };
        }
        {
            n = 338 - 337;
            while (n >= (145 - 145)) {
                {
                    NPFol8zq = 43 - 42;
                    while (wQt1NXjSc[NPFol8zq]) {
                        if (ANOmAUCTjhpi[NPFol8zq] == ')') {
                            ANOmAUCTjhpi[u5h40pX[n]] = ' ';
                            ANOmAUCTjhpi[NPFol8zq] = ' ';
                            break;
                        }
                        NPFol8zq = NPFol8zq +1;
                    };
                }
                n--;
            };
        }
        {
            xE1s7zvAjb = 672 - 672;
            while (wQt1NXjSc[xE1s7zvAjb]) {
                if (ANOmAUCTjhpi[xE1s7zvAjb] == '(')
                    ANOmAUCTjhpi[xE1s7zvAjb] = '$';
                else {
                    if (ANOmAUCTjhpi[xE1s7zvAjb] == ')')
                        ANOmAUCTjhpi[xE1s7zvAjb] = '?';
                    else
                        ANOmAUCTjhpi[xE1s7zvAjb] = ' ';
                }
                xE1s7zvAjb = xE1s7zvAjb + 1;
            };
        }
        printf ("%s\n", wQt1NXjSc);
        printf ("%s\n", ANOmAUCTjhpi);
    }
    return (517 - 517);
}

