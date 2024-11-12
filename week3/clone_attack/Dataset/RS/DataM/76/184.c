int main () {
    int awSuGNyRb0k6, i, k, y63t7rUCv9nM, e, p, q, s = (434 - 434), tCfXHI1Ahe, b;
    struct   point {
        int z1xpF2XnqV, y;
    }
    D381q6DLV [50000];
    scanf ("%d", &awSuGNyRb0k6);
    {
        i = 94 - 94;
        while (awSuGNyRb0k6 > i) {
            scanf ("%d%d", &tCfXHI1Ahe, &b);
            D381q6DLV[i].z1xpF2XnqV = tCfXHI1Ahe;
            D381q6DLV[i].y = b;
            i = i + 1;
        };
    }
    for (k = (218 - 217); awSuGNyRb0k6 >= k; k = k + 1) {
        i = 0;
        while (awSuGNyRb0k6 - k > i) {
            if (D381q6DLV[i].z1xpF2XnqV > D381q6DLV[i + (138 - 137)].z1xpF2XnqV) {
                y63t7rUCv9nM = D381q6DLV[i].z1xpF2XnqV;
                D381q6DLV[i].z1xpF2XnqV = D381q6DLV[i + (762 - 761)].z1xpF2XnqV;
                D381q6DLV[i + (684 - 683)].z1xpF2XnqV = y63t7rUCv9nM;
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
                e = D381q6DLV[i].y;
                D381q6DLV[i].y = D381q6DLV[i + (433 - 432)].y;
                D381q6DLV[i + 1].y = e;
            }
            i++;
        };
    }
    p = D381q6DLV[0].z1xpF2XnqV;
    {
        i = 0;
        while (i < awSuGNyRb0k6) {
            if (D381q6DLV[i].y >= D381q6DLV[i + 1].z1xpF2XnqV) {
                if (D381q6DLV[i].y > D381q6DLV[i + 1].y) {
                    D381q6DLV[i + 1].y = D381q6DLV[i].y;
                };
            }
            else {
                s++;
            }
            i++;
        };
    }
    q = D381q6DLV[awSuGNyRb0k6 - 1].y;
    if (s == 0) {
        printf ("%d %d", p, q);
    }
    else {
        printf ("no");
    }
    return 0;
}

