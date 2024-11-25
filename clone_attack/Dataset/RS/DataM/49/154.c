char faDQRj [(940 - 440)];
int YfeEmQSMbL (int e0, int s0);

int main () {
    int len;
    int i, j, k, qVupAOb6wHY, L6bpV9c0jGv;
    scanf ("%s", faDQRj);
    len = strlen (faDQRj);
    for (i = (111 - 111); len > i; i = i + 1) {
        j = 223 - 223;
        while (len > j) {
            if (0 <= j - i && len >= i + j + (712 - 711)) {
                if (!(faDQRj[i + j + (765 - 764)] != faDQRj[j - i])) {
                    L6bpV9c0jGv = j - i;
                    qVupAOb6wHY = i + j + (562 - 561);
                    if (YfeEmQSMbL (qVupAOb6wHY, L6bpV9c0jGv)) {
                        {
                            k = L6bpV9c0jGv;
                            while (k <= qVupAOb6wHY) {
                                printf ("%c", faDQRj[k]);
                                k++;
                            };
                        }
                        printf ("\n");
                    };
                };
            }
            j++;
        };
    }
    return 0;
}

int YfeEmQSMbL (int e0, int s0) {
    int RcBxaY1;
    int i0;
    RcBxaY1 = 0;
    {
        i0 = s0;
        while (i0 <= e0) {
            if (faDQRj[i0] != faDQRj[s0 + e0 - i0])
                RcBxaY1++;
            i0++;
        };
    }
    if (RcBxaY1 == 0)
        return 1;
    else
        return 0;
}

