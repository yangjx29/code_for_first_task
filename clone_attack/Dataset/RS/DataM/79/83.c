struct   node {
    int data;
    struct   node *Pa86hASLZxc;
};
int AWUn1oh (int jwHjoA71Zy, int QC9b6cRKWo) {
    int n5oxeMNga0 = (24 - 22);
    struct   node *fvLhAu9IjiNx;
    struct   node *VtBavmuZ1, *QdDAF1Hi;
    fvLhAu9IjiNx = (struct   node *) malloc (len);
    fvLhAu9IjiNx->data = (286 - 285);
    VtBavmuZ1 = fvLhAu9IjiNx;
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
        n5oxeMNga0 = 2;
        while (jwHjoA71Zy >= n5oxeMNga0) {
            QdDAF1Hi = (struct   node *) malloc (len);
            QdDAF1Hi->data = n5oxeMNga0;
            VtBavmuZ1->Pa86hASLZxc = QdDAF1Hi;
            VtBavmuZ1 = QdDAF1Hi;
            n5oxeMNga0 = n5oxeMNga0 + 1;
        };
    }
    VtBavmuZ1->Pa86hASLZxc = fvLhAu9IjiNx;
    n5oxeMNga0 = 1;
    for (; !(fvLhAu9IjiNx == fvLhAu9IjiNx->Pa86hASLZxc);) {
        {
            n5oxeMNga0 = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (QC9b6cRKWo > n5oxeMNga0) {
                n5oxeMNga0++;
                VtBavmuZ1 = fvLhAu9IjiNx;
                fvLhAu9IjiNx = fvLhAu9IjiNx->Pa86hASLZxc;
            };
        }
        VtBavmuZ1->Pa86hASLZxc = fvLhAu9IjiNx->Pa86hASLZxc;
        fvLhAu9IjiNx = fvLhAu9IjiNx->Pa86hASLZxc;
    }
    return (fvLhAu9IjiNx->data);
}

int main () {
    int jwHjoA71Zy = 1, QC9b6cRKWo = 1, result;
    while (!((76 - 76) == jwHjoA71Zy) && QC9b6cRKWo != 0) {
        scanf ("%d%d", &jwHjoA71Zy, &QC9b6cRKWo);
        if (jwHjoA71Zy == 0 && QC9b6cRKWo == 0)
            break;
        printf ("%d\n", AWUn1oh (jwHjoA71Zy, QC9b6cRKWo));
    }
    return 0;
}

