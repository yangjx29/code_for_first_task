struct   bing {
    char cOsNgcRZ20j [10];
    int vyiwx1g;
};
struct   bing bing [(1664 - 664)];

int main () {
    int H9OHcVotDR;
    int zxleyt86kw;
    int NQK579o3Gh;
    int BAQx6CBuNR;
    int Aj7fTsDz;
    int wkDZEirIfycd [(1952 - 952)];
    int j3WkHR;
    int fLBNd1U7cCq [(1302 - 302)];
    H9OHcVotDR = (146 - 145);
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
    zxleyt86kw = (545 - 544);
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &NQK579o3Gh);
    {
        BAQx6CBuNR = 70 - 69;
        while (BAQx6CBuNR <= NQK579o3Gh) {
            scanf ("%s%d", &bing[BAQx6CBuNR].cOsNgcRZ20j, &bing[BAQx6CBuNR].vyiwx1g);
            if (bing[BAQx6CBuNR].vyiwx1g >= (77 - 17)) {
                wkDZEirIfycd[H9OHcVotDR] = BAQx6CBuNR;
                H9OHcVotDR = H9OHcVotDR +1;
            }
            else {
                fLBNd1U7cCq[zxleyt86kw] = BAQx6CBuNR;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                zxleyt86kw++;
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
            BAQx6CBuNR++;
        };
    }
    zxleyt86kw = zxleyt86kw - 1;
    H9OHcVotDR--;
    if (H9OHcVotDR != (699 - 699)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (BAQx6CBuNR = (31 - 30); H9OHcVotDR > BAQx6CBuNR; BAQx6CBuNR++)
            for (Aj7fTsDz = (56 - 55); Aj7fTsDz < H9OHcVotDR -BAQx6CBuNR+1; Aj7fTsDz++)
                if (bing[wkDZEirIfycd[Aj7fTsDz]].vyiwx1g < bing[wkDZEirIfycd[Aj7fTsDz +1]].vyiwx1g) {
                    j3WkHR = wkDZEirIfycd[Aj7fTsDz];
                    wkDZEirIfycd[Aj7fTsDz] = wkDZEirIfycd[Aj7fTsDz +1];
                    wkDZEirIfycd[Aj7fTsDz +1] = j3WkHR;
                };
    }
    for (BAQx6CBuNR = 1; BAQx6CBuNR <= H9OHcVotDR; BAQx6CBuNR++)
        printf ("%s\n", bing[wkDZEirIfycd[BAQx6CBuNR]].cOsNgcRZ20j);
    {
        BAQx6CBuNR = 1;
        while (BAQx6CBuNR <= zxleyt86kw) {
            printf ("%s\n", bing[fLBNd1U7cCq[BAQx6CBuNR]].cOsNgcRZ20j);
            BAQx6CBuNR++;
        };
    };
}

