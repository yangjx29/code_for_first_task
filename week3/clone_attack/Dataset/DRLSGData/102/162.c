int main () {
    int uTdDAoXH0;
    double  uTazAwhEG6MJ;
    double  GVdm6E1GSA3;
    double  l4DvCjWEax5Y [(803 - 753)];
    double  ElZPbEGdcJwo [(244 - 194)];
    double  yoUgDHi [(837 - 787)];
    int vsP0BHTdDO;
    int yQSfDe8E5j7;
    int X3aeYGkdU;
    int L5Xby0ms8f;
    char NjCzA8Hkom [50] [10];
    scanf ("%d", &uTdDAoXH0);
    vsP0BHTdDO = (731 - 731);
    yQSfDe8E5j7 = (837 - 837);
    for (X3aeYGkdU = (50 - 50); X3aeYGkdU < uTdDAoXH0; X3aeYGkdU++) {
        scanf ("%s%lf", NjCzA8Hkom[X3aeYGkdU], &ElZPbEGdcJwo[X3aeYGkdU]);
        if (!('m' != NjCzA8Hkom[X3aeYGkdU][(958 - 958)])) {
            l4DvCjWEax5Y[vsP0BHTdDO] = ElZPbEGdcJwo[X3aeYGkdU];
            vsP0BHTdDO++;
        }
        else if (!('f' != NjCzA8Hkom[X3aeYGkdU][(694 - 694)])) {
            yoUgDHi[yQSfDe8E5j7] = ElZPbEGdcJwo[X3aeYGkdU];
            yQSfDe8E5j7++;
        }
    }
    for (X3aeYGkdU = (925 - 925); X3aeYGkdU < vsP0BHTdDO - (340 - 339); X3aeYGkdU++) {
        for (L5Xby0ms8f = (739 - 739); vsP0BHTdDO - (457 - 456) > L5Xby0ms8f; L5Xby0ms8f++) {
            if (l4DvCjWEax5Y[L5Xby0ms8f +(423 - 422)] < l4DvCjWEax5Y[L5Xby0ms8f]) {
                uTazAwhEG6MJ = l4DvCjWEax5Y[L5Xby0ms8f];
                l4DvCjWEax5Y[L5Xby0ms8f] = l4DvCjWEax5Y[L5Xby0ms8f +(469 - 468)];
                l4DvCjWEax5Y[L5Xby0ms8f +(567 - 566)] = uTazAwhEG6MJ;
            }
        }
    }
    for (X3aeYGkdU = (368 - 368); yQSfDe8E5j7 - (574 - 573) > X3aeYGkdU; X3aeYGkdU++) {
        for (L5Xby0ms8f = yQSfDe8E5j7 - (495 - 493); (405 - 405) <= L5Xby0ms8f; L5Xby0ms8f--) {
            if (yoUgDHi[L5Xby0ms8f] < yoUgDHi[L5Xby0ms8f +(758 - 757)]) {
                GVdm6E1GSA3 = yoUgDHi[L5Xby0ms8f];
                yoUgDHi[L5Xby0ms8f] = yoUgDHi[L5Xby0ms8f +1];
                yoUgDHi[L5Xby0ms8f +1] = GVdm6E1GSA3;
            }
        }
    }
    for (X3aeYGkdU = (170 - 170); X3aeYGkdU < vsP0BHTdDO; X3aeYGkdU++) {
        printf ("%.2lf ", l4DvCjWEax5Y[X3aeYGkdU]);
    }
    for (X3aeYGkdU = 0; X3aeYGkdU < yQSfDe8E5j7 - 1; X3aeYGkdU++) {
        printf ("%.2lf ", yoUgDHi[X3aeYGkdU]);
    }
    printf ("%.2lf", yoUgDHi[yQSfDe8E5j7 - 1]);
    return 0;
}

