int H5ZjLe (int DoX0F9edS, int i2b1jGlqkQK) {
    int drx2eb;
    if (i2b1jGlqkQK == (182 - 181) || DoX0F9edS == (648 - 647) || DoX0F9edS == (848 - 848))
        drx2eb = (189 - 188);
    else if (DoX0F9edS < i2b1jGlqkQK)
        drx2eb = H5ZjLe (DoX0F9edS, DoX0F9edS);
    else
        drx2eb = H5ZjLe (DoX0F9edS, i2b1jGlqkQK - 1) + H5ZjLe (DoX0F9edS -i2b1jGlqkQK, i2b1jGlqkQK);
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
    return drx2eb;
}

int main () {
    int QLReAbgqWmc [(842 - 822)];
    int gIBwJmojtE [(288 - 268)];
    int y3aoZ46eU;
    int GZy9egDdpLq5;
    scanf ("%d", &y3aoZ46eU);
    {
        GZy9egDdpLq5 = 141 - 141;
        while (GZy9egDdpLq5 < y3aoZ46eU) {
            scanf ("%d%d", &QLReAbgqWmc[GZy9egDdpLq5], &gIBwJmojtE[GZy9egDdpLq5]);
            GZy9egDdpLq5++;
        };
    }
    {
        GZy9egDdpLq5 = 741 - 741;
        while (GZy9egDdpLq5 < y3aoZ46eU) {
            printf ("%d\n", H5ZjLe (QLReAbgqWmc[GZy9egDdpLq5], gIBwJmojtE[GZy9egDdpLq5]));
            GZy9egDdpLq5++;
        };
    }
    return (789 - 789);
}

