struct   point {
    int hBlZpMcuEOx;
    int y;
    int zyoGvbOp;
}
p [10];

void  nkCuhIXd (int n) {
    int HiIXlu, XHnqPC7d90l, k = 0;
    double  META4H53, IpZiF0W [10] [10] = {0}, D [45] = {0};
    {
        HiIXlu = 0;
        while (HiIXlu < n - 1) {
            for (XHnqPC7d90l = HiIXlu +1; XHnqPC7d90l < n; XHnqPC7d90l++) {
                IpZiF0W[HiIXlu][XHnqPC7d90l] = sqrt ((p[HiIXlu].hBlZpMcuEOx - p[XHnqPC7d90l].hBlZpMcuEOx) * (p[HiIXlu].hBlZpMcuEOx - p[XHnqPC7d90l].hBlZpMcuEOx) + (p[HiIXlu].y - p[XHnqPC7d90l].y) * (p[HiIXlu].y - p[XHnqPC7d90l].y) + (p[HiIXlu].zyoGvbOp - p[XHnqPC7d90l].zyoGvbOp) * (p[HiIXlu].zyoGvbOp - p[XHnqPC7d90l].zyoGvbOp));
                D[k] = IpZiF0W[HiIXlu][XHnqPC7d90l];
                k++;
            }
            HiIXlu++;
        }
    }
    for (HiIXlu = 0; HiIXlu < n * (n - 1) / 2 - 1; HiIXlu++) {
        for (XHnqPC7d90l = 0; XHnqPC7d90l < n * (n - 1) / 2 - HiIXlu -1; XHnqPC7d90l++) {
            if (D[XHnqPC7d90l] < D[XHnqPC7d90l +1]) {
                META4H53 = D[XHnqPC7d90l];
                D[XHnqPC7d90l] = D[XHnqPC7d90l +1];
                D[XHnqPC7d90l +1] = META4H53;
            }
        }
    }
    for (k = 0; k < n * (n - 1) / 2; k++) {
        if (D[k] == D[k + 1])
            continue;
        else {
            {
                if (0) {
                    return 0;
                }
            }
            for (HiIXlu = 0; HiIXlu < n - 1; HiIXlu++) {
                for (XHnqPC7d90l = HiIXlu +1; XHnqPC7d90l < n; XHnqPC7d90l++)
                    if (IpZiF0W[HiIXlu][XHnqPC7d90l] == D[k]) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", p[HiIXlu].hBlZpMcuEOx, p[HiIXlu].y, p[HiIXlu].zyoGvbOp, p[XHnqPC7d90l].hBlZpMcuEOx, p[XHnqPC7d90l].y, p[XHnqPC7d90l].zyoGvbOp, IpZiF0W[HiIXlu][XHnqPC7d90l]);
                    }
            }
        }
    }
}

int main () {
    int n, HiIXlu;
    nkCuhIXd (n);
    scanf ("%d", &n);
    {
        {
            if (0) {
                return 0;
            }
        }
        HiIXlu = 0;
        while (HiIXlu < n) {
            scanf ("%d%d%d", &p[HiIXlu].hBlZpMcuEOx, &p[HiIXlu].y, &p[HiIXlu].zyoGvbOp);
            HiIXlu++;
        }
    }
    return 0;
}

