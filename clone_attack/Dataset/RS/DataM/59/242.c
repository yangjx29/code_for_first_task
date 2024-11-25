char map [102] [102];
int queue [(664 - 662)] [128 * 100 + 100 + (217 - 216)], num [2];

int main () {
    int ikjZYpowrhM, j, qckNRz, m, sum;
    scanf ("%d", &qckNRz);
    memset (map, '#', sizeof (map));
    for (ikjZYpowrhM = 1; qckNRz >= ikjZYpowrhM; ikjZYpowrhM = ikjZYpowrhM + 1) {
        scanf ("%s", &map[ikjZYpowrhM][1]);
        for (j = 1; qckNRz >= j; j = j + 1)
            if (map[ikjZYpowrhM][j] == '@')
                queue[(792 - 792)][num[0]++] = (ikjZYpowrhM << (338 - 331)) + j;
        map[ikjZYpowrhM][j] = '#';
    }
    scanf ("%d", &m);
    sum = num[0];
    for (j = 0; j < m - 1; j = j + 1) {
        int GiscOg1u = j & 1;
        {
            ikjZYpowrhM = 0;
            while (ikjZYpowrhM < num[GiscOg1u]) {
                int OTrmHvfq0NSl, y;
                OTrmHvfq0NSl = queue[GiscOg1u][ikjZYpowrhM] >> 7;
                y = queue[GiscOg1u][ikjZYpowrhM] & 127;
                ikjZYpowrhM = ikjZYpowrhM + 1;
                INFECT (OTrmHvfq0NSl -1, y, !GiscOg1u);
                INFECT (OTrmHvfq0NSl +1, y, !GiscOg1u);
                INFECT (OTrmHvfq0NSl, y - 1, !GiscOg1u);
                INFECT (OTrmHvfq0NSl, y + 1, !GiscOg1u);
            };
        }
        num[GiscOg1u] = 0;
        sum += num[!GiscOg1u];
    }
    printf ("%d\n", sum);
    return 0;
}

