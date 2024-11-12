int BiNOxpbqXHce (int ow9GL3imRSnI, int vA2yGmR, int bAZgcQfqFRn) {
    int gMP1t32v9;
    int kFMsj1;
    if (ow9GL3imRSnI == (65 - 65)) {
        if (!((360 - 360) != vA2yGmR)) {
            return (829 - 828);
        }
        else
            return (331 - 331);
    }
    else {
        kFMsj1 = (129 - 129);
        {
            gMP1t32v9 = bAZgcQfqFRn;
            while (gMP1t32v9 <= vA2yGmR) {
                kFMsj1 = kFMsj1 + BiNOxpbqXHce (ow9GL3imRSnI - 1, vA2yGmR - gMP1t32v9, gMP1t32v9);
                gMP1t32v9++;
            };
        }
        return kFMsj1;
    };
}

int main () {
    int gMP1t32v9;
    int eEhQYodSuFg;
    int dQOareZJ0LBv;
    int Zk8QdmLW;
    int vA2yGmR;
    int yQiKjfDy5F4;
    int bXFqCbzJ [100] [100];
    int ow9GL3imRSnI;
    int bAZgcQfqFRn;
    scanf ("%d", &yQiKjfDy5F4);
    {
        Zk8QdmLW = 1;
        while (Zk8QdmLW <= yQiKjfDy5F4) {
            Zk8QdmLW = Zk8QdmLW +1;
            scanf ("%d%d", &ow9GL3imRSnI, &vA2yGmR);
            bAZgcQfqFRn = BiNOxpbqXHce (vA2yGmR, ow9GL3imRSnI, 0);
            printf ("%d\n", bAZgcQfqFRn);
        };
    };
}

