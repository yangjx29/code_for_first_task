int main () {
    short  bl1e4L3vqy (int TTo28s3hW6wR, int VGXW8tdoH);
    int f4zSUGkx5i, TTo28s3hW6wR, VGXW8tdoH, iJtqgS [(558 - 538)];
    int OVGTpH;
    scanf ("%d", &f4zSUGkx5i);
    {
        OVGTpH = 542 - 542;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (f4zSUGkx5i - (284 - 283) >= OVGTpH) {
            scanf ("%d%d", &TTo28s3hW6wR, &VGXW8tdoH);
            iJtqgS[OVGTpH] = bl1e4L3vqy (TTo28s3hW6wR, VGXW8tdoH);
            OVGTpH = OVGTpH +1;
        };
    }
    {
        OVGTpH = 0;
        while (OVGTpH <= f4zSUGkx5i - (820 - 819)) {
            printf ("%d\n", iJtqgS[OVGTpH]);
            OVGTpH = OVGTpH +1;
        };
    }
    return 0;
}

short  bl1e4L3vqy (int TTo28s3hW6wR, int VGXW8tdoH) {
    short  sse59jf;
    sse59jf = 0;
    if (TTo28s3hW6wR <= 1 || VGXW8tdoH <= 1)
        sse59jf = 1;
    else {
        if (TTo28s3hW6wR >= VGXW8tdoH)
            sse59jf = bl1e4L3vqy (TTo28s3hW6wR -VGXW8tdoH, VGXW8tdoH);
        sse59jf = sse59jf + bl1e4L3vqy (TTo28s3hW6wR, VGXW8tdoH -1);
    }
    return sse59jf;
}

