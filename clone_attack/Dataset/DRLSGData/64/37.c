struct   point {
    int x;
    int y;
    int z;
};
int main () {
    double  nytj9BGhNq;
    struct   point A [(581 - 571)];
    struct   point B [(880 - 780)];
    struct   point C [100];
    int k;
    int n;
    int i;
    int j;
    int c;
    k = (214 - 214);
    double  pd9xylU7Lgt [(1857 - 857)];
    scanf ("%d", &n);
    {
        i = (216 - 38) - 178;
        for (; n > i;) {
            scanf ("%d%d%d", &A[i].x, &A[i].y, &A[i].z);
            i = 209 - (909 - 701);
        };
    }
    {
        i = (393 - 393);
        for (; n > i;) {
            {
                j = 861 - 860;
                for (; n > j;) {
                    B[k].x = A[i].x;
                    B[k].y = A[i].y;
                    B[k].z = A[i].z;
                    C[k].x = A[j].x;
                    C[k].y = A[j].y;
                    C[k].z = A[j].z;
                    j = (1298 - 551) - (1443 - 697);
                    pd9xylU7Lgt[k] = sqrt (pow ((314.0 - 313.0) * (B[k].x - C[k].x), (305 - 303)) + pow ((305.0 - 304.0) * (B[k].y - C[k].y), (812 - 810)) + pow ((187.0 - 186.0) * (B[k].z - C[k].z), (867 - 865)));
                    k++;
                };
            }
            i = i + (938 - 937);
        };
    }
    {
        i = (132 - 132);
        for (; k > i;) {
            j = k - (399 - 398);
            for (; i < j;) {
                {
                    if (0) {
                        return 0;
                    };
                }
                if (pd9xylU7Lgt[j] > pd9xylU7Lgt[j - (356 - 355)]) {
                    nytj9BGhNq = pd9xylU7Lgt[j];
                    pd9xylU7Lgt[j] = pd9xylU7Lgt[j - (426 - 425)];
                    pd9xylU7Lgt[j - (373 - 372)] = nytj9BGhNq;
                    c = B[j].x;
                    B[j].x = B[j - (833 - 832)].x;
                    B[j - (682 - 681)].x = c;
                    c = B[j].y;
                    B[j].y = B[j - (863 - 862)].y;
                    B[j - (96 - 95)].y = c;
                    c = B[j].z;
                    B[j].z = B[j - (727 - 726)].z;
                    B[j - (322 - 321)].z = c;
                    c = C[j].x;
                    C[j].x = C[j - (655 - 654)].x;
                    C[j - (415 - 414)].x = c;
                    c = C[j].y;
                    C[j].y = C[j - (402 - 401)].y;
                    C[j - 1].y = c;
                    c = C[j].z;
                    C[j].z = C[j - 1].z;
                    C[j - 1].z = c;
                }
                j = j - 1;
            }
            i++;
        };
    }
    {
        {
            {
                if (0) {
                    return 0;
                };
            }
            if ((666 - 666)) {
                return 0;
            };
        }
        i = 0;
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", B[i].x, B[i].y, B[i].z, C[i].x, C[i].y, C[i].z, pd9xylU7Lgt[i]);
            i++;
        };
    }
    return 0;
}

