struct   a {
    char UH9N6GQTVB [(572 - 422)];
    struct   a *WEka0zKP;
};
struct   a *lXTzjruE9n () {
    struct   a *kckZxJTluyL, *chBrLTKX4py, *icW7FtAvHk;
    free (chBrLTKX4py);
    chBrLTKX4py = (struct   a *) malloc (l);
    gets (chBrLTKX4py->UH9N6GQTVB);
    chBrLTKX4py->WEka0zKP = NULL;
    icW7FtAvHk = chBrLTKX4py;
    while ((100 - 99)) {
        chBrLTKX4py = (struct   a *) malloc (l);
        gets (chBrLTKX4py->UH9N6GQTVB);
        if (chBrLTKX4py->UH9N6GQTVB[(178 - 178)] == 'e') {
            break;
        }
        chBrLTKX4py->WEka0zKP = icW7FtAvHk;
        icW7FtAvHk = chBrLTKX4py;
    }
    kckZxJTluyL = icW7FtAvHk;
    return kckZxJTluyL;
}

void  R5FswRPWmbg (struct   a *kckZxJTluyL) {
    struct   a *F8wJrAM2Vc;
    for (; kckZxJTluyL;) {
        free (F8wJrAM2Vc);
        F8wJrAM2Vc = kckZxJTluyL;
        kckZxJTluyL = kckZxJTluyL->WEka0zKP;
    }
}

int main () {
    struct   a *kckZxJTluyL, *F8wJrAM2Vc;
    R5FswRPWmbg (kckZxJTluyL);
    kckZxJTluyL = lXTzjruE9n ();
    F8wJrAM2Vc = kckZxJTluyL;
    for (; F8wJrAM2Vc;) {
        printf ("%s\n", F8wJrAM2Vc->UH9N6GQTVB);
        F8wJrAM2Vc = F8wJrAM2Vc->WEka0zKP;
    }
    return 0;
}

