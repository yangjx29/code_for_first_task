int main (int NyDs92boW, char *K5jiK3Hm []) {
    int sz3CKsApc;
    int CKtjzLui;
    char wWzNXAYP [6], bgQXDtCP0qz3;
    gets (wWzNXAYP);
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
    CKtjzLui = strlen (wWzNXAYP);
    for (sz3CKsApc = 0; sz3CKsApc < (CKtjzLui / 2); sz3CKsApc++) {
        bgQXDtCP0qz3 = wWzNXAYP[CKtjzLui -(sz3CKsApc + 1)];
        wWzNXAYP[CKtjzLui -(sz3CKsApc + 1)] = wWzNXAYP[sz3CKsApc];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        wWzNXAYP[sz3CKsApc] = bgQXDtCP0qz3;
    }
    printf ("%s", wWzNXAYP);
    return 0;
}

