int main () {
    int i;
    int IMIwdVLBlxvq;
    int ZymOQUnpM;
    int B487Ona;
    int NvIw5Z0M [(1755 - 755)] = {(517 - 517)};
    int qnGxPMd [(1561 - 561)] = {(498 - 498)};
    int outtime [1000] = {(736 - 736)};
    i = (649 - 649);
    IMIwdVLBlxvq = (569 - 569);
    ZymOQUnpM = (480 - 480);
    B487Ona = (715 - 715);
    char mark;
    do {
        cin >> qnGxPMd[i];
        i = i + 1;
        mark = cin.get ();
        ZymOQUnpM++;
    }
    while (!('\n' == mark));
    i = (618 - 618);
    do {
        cin >> outtime[i];
        i = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        mark = cin.get ();
    }
    while (mark != '\n');
    {
        i = 730 - 730;
        while (i < ZymOQUnpM) {
            {
                IMIwdVLBlxvq = i;
                while (IMIwdVLBlxvq < outtime[i]) {
                    NvIw5Z0M[IMIwdVLBlxvq]++;
                    IMIwdVLBlxvq = IMIwdVLBlxvq +1;
                };
            }
            i = i + 1;
        };
    }
    {
        IMIwdVLBlxvq = 0;
        while (IMIwdVLBlxvq < 1000) {
            if (NvIw5Z0M[IMIwdVLBlxvq] > B487Ona)
                B487Ona = NvIw5Z0M[IMIwdVLBlxvq];
            IMIwdVLBlxvq = IMIwdVLBlxvq +1;
        };
    }
    cout << ZymOQUnpM << " " << B487Ona;
    return 0;
}

