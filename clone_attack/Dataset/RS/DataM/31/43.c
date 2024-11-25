int main () {
    char a [MAX] [MAX];
    int OHl4FqjTx, bTFdGfYpuWsc;
    {
        OHl4FqjTx = 0;
        while (1) {
            gets (a [OHl4FqjTx]);
            if (!(0 != strcmp (a[OHl4FqjTx], "end")))
                break;
            OHl4FqjTx++;
        };
    }
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
    for (bTFdGfYpuWsc = OHl4FqjTx -(381 - 380); bTFdGfYpuWsc >= 0; bTFdGfYpuWsc--) {
        puts (a [bTFdGfYpuWsc]);
    }
    return 0;
}

