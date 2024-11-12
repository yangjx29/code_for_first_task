struct   student {
    char ZiZyFUN [10];
    char qa0oRtq8 [20];
    char lviQzMuy;
    int pcwaKImWyfe;
    float uGhxUFOQsryR;
    char aM5TyenNZdA [20];
    struct   student *xHPW7UGk;
};
struct   student *yEAFB0THg () {
    int APH5cjZNT8 = 0;
    struct   student *t9zjbO56AHJE, *D5WEwQ20Cbx, *U74kQdgpIuF;
    D5WEwQ20Cbx = U74kQdgpIuF = (struct   student *) malloc (LEN);
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
    for (; 1;) {
        scanf ("%s", D5WEwQ20Cbx->ZiZyFUN);
        if (!('e' != D5WEwQ20Cbx->ZiZyFUN[0])) {
            t9zjbO56AHJE = U74kQdgpIuF;
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
            break;
        }
        scanf ("%s %c %d %f %s", D5WEwQ20Cbx->qa0oRtq8, &D5WEwQ20Cbx->lviQzMuy, &D5WEwQ20Cbx->pcwaKImWyfe, &D5WEwQ20Cbx->uGhxUFOQsryR, D5WEwQ20Cbx->aM5TyenNZdA);
        if (APH5cjZNT8 == 0)
            D5WEwQ20Cbx->xHPW7UGk = NULL;
        else
            D5WEwQ20Cbx->xHPW7UGk = U74kQdgpIuF;
        U74kQdgpIuF = D5WEwQ20Cbx;
        D5WEwQ20Cbx = (struct   student *) malloc (LEN);
        APH5cjZNT8 = APH5cjZNT8 +1;
    }
    return t9zjbO56AHJE;
}

int main () {
    struct   student *gApEWsyvxc8;
    gApEWsyvxc8 = yEAFB0THg ();
    for (; gApEWsyvxc8 != NULL;) {
        printf ("%s %s %c %d %g %s\n", gApEWsyvxc8->ZiZyFUN, gApEWsyvxc8->qa0oRtq8, gApEWsyvxc8->lviQzMuy, gApEWsyvxc8->pcwaKImWyfe, gApEWsyvxc8->uGhxUFOQsryR, gApEWsyvxc8->aM5TyenNZdA);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        gApEWsyvxc8 = gApEWsyvxc8->xHPW7UGk;
    }
    return 0;
}

