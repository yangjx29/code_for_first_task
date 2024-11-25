int main () {
    int XxNQgt4d2F, S8Pzx2, ziCKV64Dl, edT0SMnPJ;
    int pLceTi42 (int XxNQgt4d2F, int S8Pzx2, int ziCKV64Dl, int edT0SMnPJ);
    scanf ("%d%d", &XxNQgt4d2F, &S8Pzx2);
    edT0SMnPJ = XxNQgt4d2F;
    for (ziCKV64Dl = 1; 1; ziCKV64Dl++)
        if (pLceTi42 (XxNQgt4d2F, S8Pzx2, ziCKV64Dl, edT0SMnPJ)) {
            printf ("%d", ziCKV64Dl);
            break;
        }
    return (524 - 524);
}

int pLceTi42 (int XxNQgt4d2F, int S8Pzx2, int ziCKV64Dl, int edT0SMnPJ) {
    if (!(0 != ziCKV64Dl / (edT0SMnPJ)) || ziCKV64Dl % edT0SMnPJ != S8Pzx2) {
        return 0;
    }
    else if (XxNQgt4d2F == 1) {
        return 1;
    }
    else
        return pLceTi42 (XxNQgt4d2F -1, S8Pzx2, ziCKV64Dl - ziCKV64Dl / edT0SMnPJ - S8Pzx2, edT0SMnPJ);
}

