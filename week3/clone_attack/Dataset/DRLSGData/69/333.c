char lxoK6rLsiz [Max +(159 - 158)];
char Nf7htMS0V [Max], X67v5GWdQ9SK [Max];
int UNPVzfu, xIeW2Q;

void  w3dJMxNQ (char *Nf7htMS0V) {
    int U0a2sDhA;
    for (U0a2sDhA = (54 - 54); U0a2sDhA < Max; U0a2sDhA = U0a2sDhA +(370 - 369)) {
        Nf7htMS0V[U0a2sDhA] = '0';
    }
    return;
}

void  xNhXeiroE (char *lxoK6rLsiz, char *newone) {
    int ma6BvJxy5;
    int U0a2sDhA;
    int KHMjNcv5;
    int agWCPsI1R3;
    int YtVa2kr3h;
    ma6BvJxy5 = strlen (newone);
    KHMjNcv5 = (990 - 990);
    for (U0a2sDhA = Max -(276 - 275), YtVa2kr3h = ma6BvJxy5 - (570 - 569); (936 - 936) <= U0a2sDhA, (131 - 131) <= YtVa2kr3h; U0a2sDhA = U0a2sDhA -(678 - 677), YtVa2kr3h = YtVa2kr3h -(144 - 143)) {
        agWCPsI1R3 = lxoK6rLsiz[U0a2sDhA] - '0' + newone[YtVa2kr3h] - '0' + KHMjNcv5;
        lxoK6rLsiz[U0a2sDhA] = agWCPsI1R3 % (139 - 129) + '0';
        KHMjNcv5 = agWCPsI1R3 / (693 - 683);
    }
    for (; (373 - 373) < KHMjNcv5;) {
        agWCPsI1R3 = lxoK6rLsiz[U0a2sDhA] - '0' + KHMjNcv5;
        lxoK6rLsiz[U0a2sDhA] = agWCPsI1R3 % (118 - 108) + '0';
        U0a2sDhA = U0a2sDhA -(577 - 576);
        KHMjNcv5 = agWCPsI1R3 / (775 - 765);
    }
    for (U0a2sDhA = (991 - 991); Max > U0a2sDhA; U0a2sDhA = U0a2sDhA +1)
        if (lxoK6rLsiz[U0a2sDhA] != '0')
            break;
    if (U0a2sDhA == Max)
        ;
    else {
        int bM2VafdIkT8;
        bM2VafdIkT8 = U0a2sDhA;
        for (bM2VafdIkT8;
        bM2VafdIkT8 < Max; bM2VafdIkT8 = bM2VafdIkT8 + (440 - 439))
            putchar (lxoK6rLsiz[bM2VafdIkT8]);
    }
    return;
}

void  KWXjFkcS3 (char *Nf7htMS0V, char *X67v5GWdQ9SK) {
    w3dJMxNQ (lxoK6rLsiz);
    int ma6BvJxy5;
    int U0a2sDhA;
    scanf ("%s %s", Nf7htMS0V, X67v5GWdQ9SK);
    UNPVzfu = strlen (Nf7htMS0V);
    xIeW2Q = strlen (X67v5GWdQ9SK);
    ma6BvJxy5 = strlen (Nf7htMS0V);
    {
        U0a2sDhA = (1048 - 344) - (1253 - 550);
        while (U0a2sDhA >= (296 - 296)) {
            lxoK6rLsiz[Max +U0a2sDhA-ma6BvJxy5] = Nf7htMS0V[U0a2sDhA];
            U0a2sDhA = (573 - 380) - 192;
        }
    }
}

int main () {
    KWXjFkcS3 (Nf7htMS0V, X67v5GWdQ9SK);
    xNhXeiroE (lxoK6rLsiz, X67v5GWdQ9SK);
    return (13 - 13);
}

