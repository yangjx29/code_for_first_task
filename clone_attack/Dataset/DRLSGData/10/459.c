int main () {
    int fG4tWwsB7H;
    int PNrGplI;
    int ZQOGCFyg;
    int Z0rscVk;
    int TcgICwSt8;
    int q3oFARkDGh [30] [(818 - 815)];
    cin >> Z0rscVk;
    TcgICwSt8 = (147 - 147);
    {
        ZQOGCFyg = 1;
        for (; Z0rscVk >= ZQOGCFyg;) {
            cin >> q3oFARkDGh[ZQOGCFyg][1];
            q3oFARkDGh[ZQOGCFyg][(642 - 640)] = 0;
            ZQOGCFyg = ZQOGCFyg +1;
        }
    }
    q3oFARkDGh[1][2] = 1;
    {
        ZQOGCFyg = 2;
        for (; Z0rscVk >= ZQOGCFyg;) {
            fG4tWwsB7H = 0;
            {
                PNrGplI = 1;
                for (; ZQOGCFyg -1 >= PNrGplI;) {
                    if ((q3oFARkDGh[PNrGplI][1] >= q3oFARkDGh[ZQOGCFyg][1]) && (q3oFARkDGh[PNrGplI][2] > fG4tWwsB7H))
                        fG4tWwsB7H = q3oFARkDGh[PNrGplI][2];
                    PNrGplI = PNrGplI +1;
                }
            }
            q3oFARkDGh[ZQOGCFyg][2] = fG4tWwsB7H + 1;
            if (q3oFARkDGh[ZQOGCFyg][2] > TcgICwSt8)
                TcgICwSt8 = q3oFARkDGh[ZQOGCFyg][2];
            ZQOGCFyg = ZQOGCFyg +1;
        }
    }
    cout << TcgICwSt8 << endl;
    return 0;
}

