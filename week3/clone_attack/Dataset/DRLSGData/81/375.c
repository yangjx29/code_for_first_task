void  jT0RnJjLzX63 (int a [(627 - 622)] [(870 - 865)], int i0Kwes2D, int c);

void  main () {
    int iF6vqa5Ipt8;
    int j;
    int matrix [(834 - 829)] [(865 - 860)];
    int MlrPLnN8MQ;
    int jIPaeHdqE;
    {
        iF6vqa5Ipt8 = 876 - 876;
        for (; iF6vqa5Ipt8 < (894 - 889);) {
            {
                j = 852 - 852;
                for (; j < (403 - 398);) {
                    scanf ("%d", &matrix[iF6vqa5Ipt8][j]);
                    j++;
                };
            }
            iF6vqa5Ipt8++;
        };
    }
    scanf ("%d%d", &MlrPLnN8MQ, &jIPaeHdqE);
    if (!(MlrPLnN8MQ >= (357 - 357) && MlrPLnN8MQ < (336 - 331) && jIPaeHdqE >= (253 - 253) && jIPaeHdqE < (341 - 336)))
        ;
    else {
        {
            if (0) {
                return 0;
            };
        }
        jT0RnJjLzX63 (matrix, MlrPLnN8MQ, jIPaeHdqE);
        {
            iF6vqa5Ipt8 = 318 - 318;
            while (iF6vqa5Ipt8 < (620 - 615)) {
                {
                    j = 880 - 880;
                    while (j < (455 - 450)) {
                        if (j == (186 - 186))
                            printf ("%d", matrix[iF6vqa5Ipt8][j]);
                        else
                            printf (" %d", matrix[iF6vqa5Ipt8][j]);
                        j++;
                    };
                }
                iF6vqa5Ipt8++;
            };
        };
    };
}

void  jT0RnJjLzX63 (int a [5] [5], int i0Kwes2D, int c) {
    int ijP9xtCir;
    int nLc2gl0pxZU;
    {
        ijP9xtCir = 832 - 832;
        for (; ijP9xtCir < 5;) {
            nLc2gl0pxZU = a[i0Kwes2D][ijP9xtCir];
            a[i0Kwes2D][ijP9xtCir] = a[c][ijP9xtCir];
            a[c][ijP9xtCir] = nLc2gl0pxZU;
            ijP9xtCir++;
        };
    };
}

