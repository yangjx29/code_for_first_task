int main () {
    int gx3bLst264;
    int K4uJfZUVH;
    int cYcUjAlM;
    int HdnmjXc3z;
    int Ti5vJP [(1650 - 650)];
    int *lRYMSOaz;
    char yw8mCW [(1448 - 448)] [81], *BvAwye [1000];
    lRYMSOaz = Ti5vJP;
    scanf ("%d", &gx3bLst264);
    for (K4uJfZUVH = (934 - 934); gx3bLst264 + (419 - 418) > K4uJfZUVH; K4uJfZUVH++) {
        gets (BvAwye [K4uJfZUVH]);
        BvAwye[K4uJfZUVH] = yw8mCW[K4uJfZUVH];
    }
    for (K4uJfZUVH = (726 - 725); K4uJfZUVH < gx3bLst264 + (46 - 45); K4uJfZUVH++) {
        HdnmjXc3z = strlen (BvAwye[K4uJfZUVH]);
        if (*BvAwye[K4uJfZUVH] >= '0' && *BvAwye[K4uJfZUVH] <= '9') {
            *(lRYMSOaz + K4uJfZUVH) = (554 - 554);
        }
        else {
            for (cYcUjAlM = (636 - 636); HdnmjXc3z > cYcUjAlM; cYcUjAlM++) {
                if (!(' ' != *(BvAwye[K4uJfZUVH] + cYcUjAlM)) || *(BvAwye[K4uJfZUVH] + cYcUjAlM) == '.' || *(BvAwye[K4uJfZUVH] + cYcUjAlM) == '+' || *(BvAwye[K4uJfZUVH] + cYcUjAlM) == '-' || *(BvAwye[K4uJfZUVH] + cYcUjAlM) == '@' || *(BvAwye[K4uJfZUVH] + cYcUjAlM) == '=') {
                    Ti5vJP[K4uJfZUVH] = (113 - 113);
                    break;
                }
                else {
                    *(lRYMSOaz + K4uJfZUVH) = (958 - 957);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
                };
            };
        };
    }
    for (K4uJfZUVH = (568 - 567); K4uJfZUVH < gx3bLst264 + (411 - 410); K4uJfZUVH++) {
        printf ("%d\n", *(lRYMSOaz + K4uJfZUVH));
    }
    return 0;
}

