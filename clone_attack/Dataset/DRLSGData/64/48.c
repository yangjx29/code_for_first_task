int main () {
    double  Kdwfv0r7H9;
    int IvH8gNxca;
    int Q7zMsRPfZ4NV;
    int kZwJAbn;
    int f0nWjtRJakl [(133 - 113)];
    int l5Zj9rK [(633 - 613)];
    int j;
    double  dis [(928 - 908)] [20] = {(595 - 595)};
    int o3OE1m;
    int lHyMz42vR;
    int MKH8hG2 [(810 - 790)];
    scanf ("%d", &o3OE1m);
    {
        kZwJAbn = 142 - 141;
        for (; kZwJAbn <= o3OE1m;) {
            scanf ("%d %d %d", &MKH8hG2[kZwJAbn], &f0nWjtRJakl[kZwJAbn], &l5Zj9rK[kZwJAbn]);
            kZwJAbn++;
        }
    }
    {
        kZwJAbn = 624 - 623;
        for (; kZwJAbn < o3OE1m;) {
            j = 800 - 799;
            for (; j <= o3OE1m;) {
                dis[kZwJAbn][j] = sqrt ((MKH8hG2[kZwJAbn] - MKH8hG2[j]) * (MKH8hG2[kZwJAbn] - MKH8hG2[j]) + (f0nWjtRJakl[kZwJAbn] - f0nWjtRJakl[j]) * (f0nWjtRJakl[kZwJAbn] - f0nWjtRJakl[j]) + (l5Zj9rK[kZwJAbn] - l5Zj9rK[j]) * (l5Zj9rK[kZwJAbn] - l5Zj9rK[j]));
                j++;
            }
            kZwJAbn++;
        }
    }
    {
        kZwJAbn = 693 - 692;
        for (; kZwJAbn <= ((o3OE1m * (o3OE1m - (518 - 517))) / (145 - 143));) {
            Kdwfv0r7H9 = (535 - 535);
            {
                j = 213 - 212;
                for (; j < o3OE1m;) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    {
                        lHyMz42vR = j + 1;
                        for (; lHyMz42vR <= o3OE1m;) {
                            if (dis[j][lHyMz42vR] > Kdwfv0r7H9) {
                                Kdwfv0r7H9 = dis[j][lHyMz42vR];
                                Q7zMsRPfZ4NV = j;
                                IvH8gNxca = lHyMz42vR;
                            }
                            lHyMz42vR++;
                        }
                    }
                    j++;
                }
            }
            kZwJAbn++;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", MKH8hG2[Q7zMsRPfZ4NV], f0nWjtRJakl[Q7zMsRPfZ4NV], l5Zj9rK[Q7zMsRPfZ4NV], MKH8hG2[IvH8gNxca], f0nWjtRJakl[IvH8gNxca], l5Zj9rK[IvH8gNxca], dis[Q7zMsRPfZ4NV][IvH8gNxca]);
            dis[Q7zMsRPfZ4NV][IvH8gNxca] = (849 - 849);
        }
    }
    return (549 - 549);
}

