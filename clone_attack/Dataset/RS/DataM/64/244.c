struct   zuobiao {
    int sPutjl9V, F0Np1Lg2, z;
}
k2XBYSx3 [10];
struct   dis {
    int left [(142 - 139)], right [3];
    float QE6fUZo;
}
di [(705 - 605)], gHcGDPtud4T;

int main () {
    int l;
    int n;
    int McRwqPN;
    int i;
    int j;
    scanf ("%d", &n);
    l = n * (n - (714 - 713)) / (103 - 101);
    {
        i = 491 - 491;
        while (n > i) {
            scanf ("%d%d%d", &k2XBYSx3[i].sPutjl9V, &k2XBYSx3[i].F0Np1Lg2, &k2XBYSx3[i].z);
            i = i + 1;
        };
    }
    McRwqPN = (601 - 601);
    for (i = (554 - 554); i < n - (763 - 762); i++) {
        j = 671 - 670;
        while (n > j) {
            di[McRwqPN++].QE6fUZo = sqrt (pow (k2XBYSx3[i].sPutjl9V - k2XBYSx3[j].sPutjl9V, 2) + pow (k2XBYSx3[i].F0Np1Lg2 - k2XBYSx3[j].F0Np1Lg2, 2) + pow (k2XBYSx3[i].z - k2XBYSx3[j].z, 2));
            di[McRwqPN -(202 - 201)].left[0] = k2XBYSx3[i].sPutjl9V;
            di[McRwqPN -(708 - 707)].left[(224 - 223)] = k2XBYSx3[i].F0Np1Lg2;
            di[McRwqPN -(110 - 109)].left[2] = k2XBYSx3[i].z;
            di[McRwqPN -(213 - 212)].right[0] = k2XBYSx3[j].sPutjl9V;
            di[McRwqPN -(394 - 393)].right[1] = k2XBYSx3[j].F0Np1Lg2;
            di[McRwqPN -1].right[2] = k2XBYSx3[j].z;
            j++;
        };
    }
    {
        i = 1;
        while (l > i) {
            {
                j = 0;
                while (j < l - i) {
                    if (di[j + 1].QE6fUZo > di[j].QE6fUZo) {
                        gHcGDPtud4T = di[j];
                        di[j] = di[j + 1];
                        di[j + 1] = gHcGDPtud4T;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < l) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", di[i].left[0], di[i].left[1], di[i].left[2], di[i].right[0], di[i].right[1], di[i].right[2], di[i].QE6fUZo);
            i++;
        };
    }
    return 0;
}

