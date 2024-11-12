int refine (int gv9D3YUKdpoL) {
    if (gv9D3YUKdpoL % (875 - 873) == 1)
        return ((gv9D3YUKdpoL - 1) / (585 - 583));
    else
        return (gv9D3YUKdpoL / (591 - 589));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int gv9D3YUKdpoL;
    int q6voKBga;
    int tLFr4xXb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d%d", &gv9D3YUKdpoL, &q6voKBga);
    while (gv9D3YUKdpoL != q6voKBga) {
        if (gv9D3YUKdpoL > q6voKBga)
            gv9D3YUKdpoL = refine (gv9D3YUKdpoL);
        else
            q6voKBga = refine (q6voKBga);
    }
    printf ("%d", gv9D3YUKdpoL);
    return 0;
}

