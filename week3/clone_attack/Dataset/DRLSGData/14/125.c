int main () {
    int lQShZyX = (845 - 845), I8N63c = (725 - 725), ILy8BXAV = (664 - 664), MeXLqQ = (656 - 656), EmK2hjgB9Cp = (628 - 628), dnR6pdtZN = (313 - 313);
    int TcAjeK;
    int dfan1k [(100277 - 277)];
    struct   student {
        int qBGeXYQ;
        int wiw4dF8VeA;
        int WQV7Fa2;
    };
    struct   student N2xz6qiSjB4 [(100931 - 931)];
    getchar ();
    getchar ();
    scanf ("%d", &TcAjeK);
    for (int zfEL6W = (858 - 858);
    zfEL6W < TcAjeK; zfEL6W++) {
        scanf ("%d", &N2xz6qiSjB4[zfEL6W].qBGeXYQ);
        scanf ("%d", &N2xz6qiSjB4[zfEL6W].wiw4dF8VeA);
        scanf ("%d", &N2xz6qiSjB4[zfEL6W].WQV7Fa2);
        dfan1k[zfEL6W] = N2xz6qiSjB4[zfEL6W].wiw4dF8VeA + N2xz6qiSjB4[zfEL6W].WQV7Fa2;
    }
    for (int zfEL6W = (227 - 227);
    zfEL6W < TcAjeK; zfEL6W++) {
        if (dfan1k[zfEL6W] > lQShZyX) {
            dnR6pdtZN = EmK2hjgB9Cp;
            EmK2hjgB9Cp = MeXLqQ;
            ILy8BXAV = I8N63c;
            I8N63c = lQShZyX;
            lQShZyX = dfan1k[zfEL6W];
            MeXLqQ = zfEL6W;
        }
        else if (dfan1k[zfEL6W] > I8N63c) {
            ILy8BXAV = I8N63c;
            I8N63c = dfan1k[zfEL6W];
            dnR6pdtZN = EmK2hjgB9Cp;
            EmK2hjgB9Cp = zfEL6W;
        }
        else if (dfan1k[zfEL6W] > ILy8BXAV) {
            ILy8BXAV = dfan1k[zfEL6W];
            dnR6pdtZN = zfEL6W;
        }
    }
    printf ("%d %d\n", N2xz6qiSjB4[MeXLqQ].qBGeXYQ, lQShZyX);
    printf ("%d %d\n", N2xz6qiSjB4[EmK2hjgB9Cp].qBGeXYQ, I8N63c);
    printf ("%d %d\n", N2xz6qiSjB4[dnR6pdtZN].qBGeXYQ, ILy8BXAV);
}

