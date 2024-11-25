int main () {
    char room [(1042 - 842)] [200], newroom [200] [200];
    int n, wPgvQ1ecdJ, m5X6c7Edmxh, j, KdWjXb7EBeTh, BOyP1BD8CR, LeFGUvk4, mtime, u12yjUG = (229 - 229);
    const  int dirx [4] = {(97 - 97), (198 - 198), (606 - 605), -1}, HNO4a5Q [4] = {1, -1, (410 - 410), (791 - 791)};
    cin >> n;
    cin.getline (room[(680 - 680)], sizeof (room [(646 - 646)]));
    {
        m5X6c7Edmxh = 578 - 578;
        while (n > m5X6c7Edmxh) {
            cin.getline (room[m5X6c7Edmxh], sizeof (room [m5X6c7Edmxh]));
            m5X6c7Edmxh = m5X6c7Edmxh + 1;
        };
    }
    cin >> wPgvQ1ecdJ;
    for (mtime = 1; mtime < wPgvQ1ecdJ; mtime = mtime + 1) {
        {
            m5X6c7Edmxh = 593 - 593;
            while (n > m5X6c7Edmxh) {
                {
                    j = 255 - 255;
                    while (n > j) {
                        newroom[m5X6c7Edmxh][j] = room[m5X6c7Edmxh][j];
                        j = j + 1;
                    };
                }
                m5X6c7Edmxh = m5X6c7Edmxh + 1;
            };
        }
        for (m5X6c7Edmxh = 0; n > m5X6c7Edmxh; m5X6c7Edmxh = m5X6c7Edmxh + 1) {
            j = 0;
            while (n > j) {
                if (!('@' != room[m5X6c7Edmxh][j])) {
                    KdWjXb7EBeTh = 0;
                    while (4 > KdWjXb7EBeTh) {
                        BOyP1BD8CR = m5X6c7Edmxh + dirx[KdWjXb7EBeTh];
                        LeFGUvk4 = j + HNO4a5Q[KdWjXb7EBeTh];
                        KdWjXb7EBeTh = KdWjXb7EBeTh +1;
                        if (0 <= BOyP1BD8CR &&BOyP1BD8CR < n && 0 <= LeFGUvk4 &&LeFGUvk4 < n && !('.' != room[BOyP1BD8CR][LeFGUvk4]))
                            newroom[BOyP1BD8CR][LeFGUvk4] = '@';
                    };
                }
                j = j + 1;
            };
        }
        for (m5X6c7Edmxh = 0; n > m5X6c7Edmxh; m5X6c7Edmxh = m5X6c7Edmxh + 1) {
            j = 0;
            while (n > j) {
                room[m5X6c7Edmxh][j] = newroom[m5X6c7Edmxh][j];
                j++;
            };
        };
    }
    {
        m5X6c7Edmxh = 0;
        while (n > m5X6c7Edmxh) {
            for (j = 0; j < n; j = j + 1)
                if (!('@' != room[m5X6c7Edmxh][j]))
                    u12yjUG = u12yjUG + 1;
            m5X6c7Edmxh++;
        };
    }
    cout << u12yjUG << endl;
    return 0;
}

