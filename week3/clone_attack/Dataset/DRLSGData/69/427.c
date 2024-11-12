char S9G0UfrPJj [100001];
int a [100001], b [100001], pMojUeLq [100001];

int main () {
    gets (S9G0UfrPJj);
    long  i, QpHJPT, Qj4H2N89x, m = 0;
    gets (S9G0UfrPJj);
    long  EGmbQts;
    long  blen;
    long  nA0f5GRSUayQ;
    EGmbQts = strlen (S9G0UfrPJj);
    for (i = EGmbQts -1; i >= 0; i--)
        a[EGmbQts -i] = S9G0UfrPJj[i] - '0';
    blen = strlen (S9G0UfrPJj);
    for (i = blen - 1; i >= 0; i--)
        b[blen - i] = S9G0UfrPJj[i] - '0';
    if (EGmbQts > blen)
        nA0f5GRSUayQ = EGmbQts;
    else
        nA0f5GRSUayQ = blen;
    for (i = 1; i <= nA0f5GRSUayQ; i++)
        pMojUeLq[i] = a[i] + b[i];
    for (i = 1; i <= nA0f5GRSUayQ; i++)
        if (pMojUeLq[i] > 9) {
            pMojUeLq[i + 1]++;
            pMojUeLq[i] -= 10;
            if (i == nA0f5GRSUayQ)
                nA0f5GRSUayQ++;
        }
    for (i = nA0f5GRSUayQ; i >= 1; i--) {
        if (pMojUeLq[i] != 0) {
            m = i;
            break;
        }
    }
    if (m == 0) {
        for (i = nA0f5GRSUayQ; i >= 1; i--)
            printf ("%d", pMojUeLq[i]);
    }
    if (m != 0) {
        for (i = m; i >= 1; i--)
            printf ("%d", pMojUeLq[i]);
    }
}

