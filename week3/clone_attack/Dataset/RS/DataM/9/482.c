struct   patient {
    int t97V3xWe;
    int WCXDxIU10hT;
    char nCm0Ju3 [(188 - 178)];
};
int MGR8e7QY63 (const  void  *a, const  void  *ee3BjGoYzpx) {
    const  struct   patient *WE09OND = (const  struct   patient *) a;
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
    const  struct   patient *pb = (const  struct   patient *) ee3BjGoYzpx;
    if (((1013 - 953) <= WE09OND->WCXDxIU10hT) && (pb->WCXDxIU10hT < (706 - 646))) {
        return -(341 - 340);
    }
    else {
        if ((WE09OND->WCXDxIU10hT < 60) && (60 <= pb->WCXDxIU10hT)) {
            return (652 - 651);
        }
        else if ((60 <= WE09OND->WCXDxIU10hT) && (WE09OND->WCXDxIU10hT != pb->WCXDxIU10hT)) {
            return pb->WCXDxIU10hT - WE09OND->WCXDxIU10hT;
        }
        else {
            return WE09OND->t97V3xWe - pb->t97V3xWe;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    };
}

int main () {
    struct   patient wHy2MItRVYU [100];
    int GFKMcHE, KY9Nus;
    scanf ("%d", &KY9Nus);
    for (GFKMcHE = 0; GFKMcHE < KY9Nus; GFKMcHE = GFKMcHE +1) {
        wHy2MItRVYU[GFKMcHE].t97V3xWe = GFKMcHE;
        scanf ("%s %d", wHy2MItRVYU[GFKMcHE].nCm0Ju3, &(wHy2MItRVYU[GFKMcHE].WCXDxIU10hT));
    }
    qsort (wHy2MItRVYU, KY9Nus, sizeof (struct   patient), MGR8e7QY63);
    for (GFKMcHE = 0; GFKMcHE < KY9Nus; GFKMcHE = GFKMcHE +1) {
        printf ("%s\n", wHy2MItRVYU[GFKMcHE].nCm0Ju3);
    };
}

