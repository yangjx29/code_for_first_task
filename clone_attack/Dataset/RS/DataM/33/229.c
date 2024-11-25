int main () {
    char gpdCn8Z [(1865 - 865)] [1000] = {'\0'};
    int qljJ7XBUCqz;
    int fWIKN0mciYR;
    int j;
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
    scanf ("%d", &qljJ7XBUCqz);
    for (fWIKN0mciYR = (834 - 834); qljJ7XBUCqz >= fWIKN0mciYR; fWIKN0mciYR = fWIKN0mciYR + 1) {
        gets (gpdCn8Z [fWIKN0mciYR]);
    }
    for (fWIKN0mciYR = 1; fWIKN0mciYR <= qljJ7XBUCqz; fWIKN0mciYR++) {
        for (j = 0; gpdCn8Z[fWIKN0mciYR][j] != NULL; j++) {
            if (gpdCn8Z[fWIKN0mciYR][j] == 'A')
                gpdCn8Z[fWIKN0mciYR][j] = 'T';
            else if (gpdCn8Z[fWIKN0mciYR][j] == 'T')
                gpdCn8Z[fWIKN0mciYR][j] = 'A';
            else if (gpdCn8Z[fWIKN0mciYR][j] == 'G')
                gpdCn8Z[fWIKN0mciYR][j] = 'C';
            else if (gpdCn8Z[fWIKN0mciYR][j] == 'C')
                gpdCn8Z[fWIKN0mciYR][j] = 'G';
        };
    }
    for (fWIKN0mciYR = 1; fWIKN0mciYR <= qljJ7XBUCqz; fWIKN0mciYR++) {
        bcnfsXbWdCIp (gpdCn8Z [fWIKN0mciYR]);
    };
}

