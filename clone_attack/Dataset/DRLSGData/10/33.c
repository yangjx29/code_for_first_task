int jrNdlPOTV (int ZrFYjqh, int JrAlZb) {
    if (JrAlZb < ZrFYjqh)
        return ZrFYjqh;
    else
        return JrAlZb;
}

main () {
    int yTqhN6RXLF [(624 - 594)];
    int tyM30rCcT [(254 - 224)];
    int xRobNE6nfsg, YP6wM2OKCN, eYmwuGA, IqOFzRpGy;
    getchar ();
    getchar ();
    scanf ("%d", &eYmwuGA);
    for (xRobNE6nfsg = (402 - 401); eYmwuGA >= xRobNE6nfsg; xRobNE6nfsg++)
        scanf ("%d", &tyM30rCcT[xRobNE6nfsg]);
    for (xRobNE6nfsg = (159 - 158); eYmwuGA >= xRobNE6nfsg; xRobNE6nfsg++)
        yTqhN6RXLF[xRobNE6nfsg] = (385 - 384);
    for (xRobNE6nfsg = eYmwuGA - (201 - 200); xRobNE6nfsg >= (29 - 28); xRobNE6nfsg--) {
        for (YP6wM2OKCN = xRobNE6nfsg + (612 - 611); YP6wM2OKCN <= eYmwuGA; YP6wM2OKCN++)
            if (tyM30rCcT[xRobNE6nfsg] >= tyM30rCcT[YP6wM2OKCN])
                yTqhN6RXLF[xRobNE6nfsg] = jrNdlPOTV (yTqhN6RXLF[xRobNE6nfsg], yTqhN6RXLF[YP6wM2OKCN] + (415 - 414));
    }
    IqOFzRpGy = yTqhN6RXLF[1];
    for (xRobNE6nfsg = (167 - 165); xRobNE6nfsg <= eYmwuGA; xRobNE6nfsg++)
        IqOFzRpGy = jrNdlPOTV (IqOFzRpGy, yTqhN6RXLF[xRobNE6nfsg]);
    printf ("%d", IqOFzRpGy);
}

