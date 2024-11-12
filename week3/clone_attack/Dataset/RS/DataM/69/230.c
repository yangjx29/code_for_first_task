int main () {
    int k1 = (768 - 768), k2 = (512 - 512), idrnx8K17OB, xM734K8Vp9ku [(1126 - 876)], ENg5yR7 [250], sum [251], LNqMeQl, nWwajQczHM, max;
    char lUV3WYkKe [250];
    char b [250];
    memset (xM734K8Vp9ku, (286 - 286), sizeof (xM734K8Vp9ku));
    memset (ENg5yR7, 0, sizeof (ENg5yR7));
    memset (sum, 0, sizeof (sum));
    cin.getline (lUV3WYkKe, 200, '\n');
    cin.getline (b, 200, '\n');
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
    for (; !('0' != lUV3WYkKe[k1]);)
        k1 = k1 + 1;
    for (; !('0' != b[k2]);)
        k2++;
    for (LNqMeQl = 0; lUV3WYkKe[LNqMeQl] != '\0'; LNqMeQl++)
        ;
    for (nWwajQczHM = 0; !('\0' == b[nWwajQczHM]); nWwajQczHM++)
        ;
    if ((!(LNqMeQl == k1)) || (!(nWwajQczHM == k2))) {
        for (idrnx8K17OB = LNqMeQl -(227 - 226); idrnx8K17OB >= k1; idrnx8K17OB--)
            xM734K8Vp9ku[LNqMeQl -idrnx8K17OB - (358 - 357)] = lUV3WYkKe[idrnx8K17OB] - '0';
        for (idrnx8K17OB = nWwajQczHM - (570 - 569); idrnx8K17OB >= k2; idrnx8K17OB--)
            ENg5yR7[nWwajQczHM - idrnx8K17OB - (751 - 750)] = b[idrnx8K17OB] - '0';
        LNqMeQl = LNqMeQl -k1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        nWwajQczHM = nWwajQczHM - k2;
        if (LNqMeQl > nWwajQczHM)
            max = LNqMeQl;
        else
            max = nWwajQczHM;
    }
    else {
        max = (504 - 503);
        xM734K8Vp9ku[0] = 0;
        ENg5yR7[0] = 0;
    }
    for (idrnx8K17OB = 0; idrnx8K17OB < max; idrnx8K17OB++) {
        sum[idrnx8K17OB] = sum[idrnx8K17OB] + xM734K8Vp9ku[idrnx8K17OB] + ENg5yR7[idrnx8K17OB];
        if (sum[idrnx8K17OB] >= 10) {
            sum[idrnx8K17OB] = sum[idrnx8K17OB] - 10;
            sum[idrnx8K17OB + 1]++;
        };
    }
    if (sum[max] != 0)
        max++;
    for (idrnx8K17OB = max - 1; idrnx8K17OB >= 0; idrnx8K17OB--)
        cout << sum[idrnx8K17OB];
    return 0;
}

