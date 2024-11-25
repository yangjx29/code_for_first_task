main () {
    int N14Yq2DxLPIo = (144 - 144);
    char iGDxgLsROz [(1206 - 950)], j6ntUu0exs1 [(969 - 713)], xvWNRZe [(747 - 491)];
    int XVavwN, D1THSMheb, cY0cPShFsg, kz8t0px, vZyroUhW9, d;
    XVavwN = (20 - 20);
    d = (634 - 634);
    for (cY0cPShFsg = (281 - 281); (522 - 266) > cY0cPShFsg; cY0cPShFsg++) {
        iGDxgLsROz[cY0cPShFsg] = '\0';
        j6ntUu0exs1[cY0cPShFsg] = '\0';
        xvWNRZe[cY0cPShFsg] = '\0';
    }
    scanf ("%s", iGDxgLsROz);
    D1THSMheb = (918 - 918);
    for (cY0cPShFsg = (175 - 175); iGDxgLsROz[cY0cPShFsg] != '\0'; cY0cPShFsg++) {
        D1THSMheb++;
    }
    scanf ("%s", j6ntUu0exs1);
    for (cY0cPShFsg = (548 - 548); j6ntUu0exs1[cY0cPShFsg] != '\0'; cY0cPShFsg++) {
        XVavwN++;
    }
    scanf ("%s", xvWNRZe);
    for (cY0cPShFsg = (256 - 256); xvWNRZe[cY0cPShFsg] != '\0'; cY0cPShFsg++) {
        d++;
    }
    cY0cPShFsg = (14 - 14);
    while (iGDxgLsROz[cY0cPShFsg] != '\0') {
        if (!(j6ntUu0exs1[(782 - 782)] != iGDxgLsROz[cY0cPShFsg])) {
            kz8t0px = (76 - 76);
            vZyroUhW9 = (651 - 651);
            N14Yq2DxLPIo = cY0cPShFsg;
            for (; !(j6ntUu0exs1[kz8t0px] != iGDxgLsROz[cY0cPShFsg]) && iGDxgLsROz[cY0cPShFsg] != '\0';) {
                kz8t0px++;
                cY0cPShFsg++;
                vZyroUhW9++;
            }
            if (!(XVavwN != vZyroUhW9)) {
                int hFRQmsz = (861 - 861);
                for (hFRQmsz = 0; d > hFRQmsz; hFRQmsz++) {
                    iGDxgLsROz[N14Yq2DxLPIo +hFRQmsz] = xvWNRZe[hFRQmsz];
                }
                break;
            }
        }
        else
            cY0cPShFsg++;
    }
    printf ("%s", iGDxgLsROz);
}

