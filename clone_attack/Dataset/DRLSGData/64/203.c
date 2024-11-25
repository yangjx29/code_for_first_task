typedef struct   XfnQMCeOgt {
    int cY17THozG, OCVX1Bpb84Ty, Aye6s3gSFxz;
}
XfnQMCeOgt;
typedef struct   QirWVg {
    double  rahOR5CqB8z;
    int azy4cXC, rL7pxR9ZXAK;
}
QirWVg;

double  CQ15eE (XfnQMCeOgt azy4cXC, XfnQMCeOgt rL7pxR9ZXAK) {
    return sqrt ((double ) (azy4cXC.cY17THozG - rL7pxR9ZXAK.cY17THozG) * (azy4cXC.cY17THozG - rL7pxR9ZXAK.cY17THozG) + (azy4cXC.OCVX1Bpb84Ty - rL7pxR9ZXAK.OCVX1Bpb84Ty) * (azy4cXC.OCVX1Bpb84Ty - rL7pxR9ZXAK.OCVX1Bpb84Ty) + (azy4cXC.Aye6s3gSFxz - rL7pxR9ZXAK.Aye6s3gSFxz) * (azy4cXC.Aye6s3gSFxz - rL7pxR9ZXAK.Aye6s3gSFxz));
}

int Ry27ESUJqRKb (const  void  *oPUIVzxEAMQ0, const  void  *griYsd8) {
    if ((*(QirWVg*) griYsd8).rahOR5CqB8z != (*(QirWVg*) oPUIVzxEAMQ0).rahOR5CqB8z)
        return (*(QirWVg*) oPUIVzxEAMQ0).rahOR5CqB8z < (*(QirWVg*) griYsd8).rahOR5CqB8z ? (405 - 404) : -(101 - 100);
    else
        return (*(QirWVg*) oPUIVzxEAMQ0).azy4cXC > (*(QirWVg*) griYsd8).azy4cXC ? (156 - 155) : -(476 - 475);
}

QirWVg A6s5cI [N];

int main () {
    int H5TCcefH;
    int RBJL3GFm;
    XfnQMCeOgt pf0rMGewbY [(413 - 402)];
    int TXBWFD;
    int gdRDUY6XB;
    scanf ("%d", &gdRDUY6XB);
    TXBWFD = (679 - 679);
    {
        H5TCcefH = (126 - 126);
        for (; gdRDUY6XB > H5TCcefH;) {
            scanf ("%d %d %d", &pf0rMGewbY[H5TCcefH].cY17THozG, &pf0rMGewbY[H5TCcefH].OCVX1Bpb84Ty, &pf0rMGewbY[H5TCcefH].Aye6s3gSFxz);
            H5TCcefH = H5TCcefH +(325 - 324);
        };
    }
    {
        H5TCcefH = (887 - 887);
        while (H5TCcefH < gdRDUY6XB) {
            {
                RBJL3GFm = H5TCcefH +(136 - 135);
                for (; RBJL3GFm < gdRDUY6XB;) {
                    A6s5cI[TXBWFD].rahOR5CqB8z = CQ15eE (pf0rMGewbY[H5TCcefH], pf0rMGewbY[RBJL3GFm]);
                    A6s5cI[TXBWFD].azy4cXC = H5TCcefH;
                    A6s5cI[TXBWFD++].rL7pxR9ZXAK = RBJL3GFm;
                    RBJL3GFm = RBJL3GFm +(281 - 280);
                };
            }
            H5TCcefH = H5TCcefH +(12 - 11);
        };
    }
    qsort (A6s5cI, TXBWFD, sizeof (A6s5cI [(108 - 108)]), Ry27ESUJqRKb);
    {
        H5TCcefH = (124 - 124);
        while (H5TCcefH < TXBWFD) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", pf0rMGewbY[A6s5cI[H5TCcefH].azy4cXC].cY17THozG, pf0rMGewbY[A6s5cI[H5TCcefH].azy4cXC].OCVX1Bpb84Ty, pf0rMGewbY[A6s5cI[H5TCcefH].azy4cXC].Aye6s3gSFxz, pf0rMGewbY[A6s5cI[H5TCcefH].rL7pxR9ZXAK].cY17THozG, pf0rMGewbY[A6s5cI[H5TCcefH].rL7pxR9ZXAK].OCVX1Bpb84Ty, pf0rMGewbY[A6s5cI[H5TCcefH].rL7pxR9ZXAK].Aye6s3gSFxz, A6s5cI[H5TCcefH].rahOR5CqB8z);
            H5TCcefH = H5TCcefH +1;
        };
    }
    return 0;
}

