int main () {
    int Jx6rcohSZP4 [26], maxnum = (209 - 208), OkpoUqihx2, L6yBEha8k, h [26], XEeMu4Ki;
    cin >> XEeMu4Ki;
    for (OkpoUqihx2 = 1; XEeMu4Ki >= OkpoUqihx2; OkpoUqihx2 = OkpoUqihx2 +1) {
        cin >> h[OkpoUqihx2];
        Jx6rcohSZP4[OkpoUqihx2] = 1;
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
    {
        OkpoUqihx2 = 2;
        while (OkpoUqihx2 <= XEeMu4Ki) {
            {
                L6yBEha8k = 1;
                while (L6yBEha8k < OkpoUqihx2) {
                    if (h[L6yBEha8k] >= h[OkpoUqihx2])
                        Jx6rcohSZP4[OkpoUqihx2] = max (Jx6rcohSZP4[OkpoUqihx2], Jx6rcohSZP4[L6yBEha8k] + 1);
                    L6yBEha8k = L6yBEha8k +1;
                };
            }
            maxnum = max (maxnum, Jx6rcohSZP4[OkpoUqihx2]);
            OkpoUqihx2++;
        };
    }
    cout << maxnum;
}

