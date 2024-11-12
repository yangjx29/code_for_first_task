int main () {
    char x [500] = {'\0'};
    char G67yhj [500] = {'\0'};
    double  eQJAP4zUx;
    double  prgM5dowXY3S;
    int GTvQ17WxH;
    int Y6ZEGQFmsAP;
    int fFy7puLnjBS;
    prgM5dowXY3S = 0;
    fFy7puLnjBS = 0;
    scanf ("%lf %s %s", &eQJAP4zUx, G67yhj, x);
    {
        Y6ZEGQFmsAP = 0;
        while (G67yhj[Y6ZEGQFmsAP] != '\0') {
            if ('Z' < G67yhj[Y6ZEGQFmsAP]) {
                prgM5dowXY3S = 1;
                break;
            }
            Y6ZEGQFmsAP = Y6ZEGQFmsAP +1;
        }
    }
    {
        GTvQ17WxH = 0;
        while (x[GTvQ17WxH] != '\0') {
            if (x[GTvQ17WxH] > 'Z') {
                prgM5dowXY3S = 1;
                break;
            }
            GTvQ17WxH = GTvQ17WxH +1;
        }
    }
    if (Y6ZEGQFmsAP != GTvQ17WxH || !(1 != prgM5dowXY3S)) {
    }
    else {
        {
            Y6ZEGQFmsAP = 0;
            for (; GTvQ17WxH > Y6ZEGQFmsAP;) {
                if (!(x[Y6ZEGQFmsAP] != G67yhj[Y6ZEGQFmsAP])) {
                    fFy7puLnjBS = fFy7puLnjBS + 1;
                }
                Y6ZEGQFmsAP = Y6ZEGQFmsAP +1;
            }
        }
        prgM5dowXY3S = 1.0 * fFy7puLnjBS / GTvQ17WxH;
        if (eQJAP4zUx < prgM5dowXY3S) {
        }
        else {
        }
    }
    return 0;
}

