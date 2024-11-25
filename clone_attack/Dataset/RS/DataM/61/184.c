int main () {
    int rg2mJsN, EoduThr0EC, YREYr17OS3xc, ZrbfNQlhDz9 [1000], Wwug3WI26r;
    int tQakP7X (int gaL9Ne3DOmwX);
    getchar ();
    scanf ("%d", &rg2mJsN);
    {
        EoduThr0EC = 0;
        while (EoduThr0EC < rg2mJsN) {
            scanf ("%d", &ZrbfNQlhDz9[EoduThr0EC]);
            EoduThr0EC = EoduThr0EC +1;
        };
    }
    {
        YREYr17OS3xc = 0;
        while (rg2mJsN > YREYr17OS3xc) {
            Wwug3WI26r = tQakP7X (ZrbfNQlhDz9[YREYr17OS3xc]);
            printf ("%d\n", Wwug3WI26r);
            YREYr17OS3xc++;
        };
    }
    getchar ();
}

int tQakP7X (int gaL9Ne3DOmwX) {
    int ZrbfNQlhDz9 [gaL9Ne3DOmwX + 1];
    int EoduThr0EC;
    ZrbfNQlhDz9[1] = 1;
    ZrbfNQlhDz9[(257 - 255)] = 1;
    {
        EoduThr0EC = 3;
        while (EoduThr0EC <= gaL9Ne3DOmwX) {
            ZrbfNQlhDz9[EoduThr0EC] = ZrbfNQlhDz9[EoduThr0EC -1] + ZrbfNQlhDz9[EoduThr0EC -2];
            EoduThr0EC++;
        };
    }
    return (ZrbfNQlhDz9[gaL9Ne3DOmwX]);
}

