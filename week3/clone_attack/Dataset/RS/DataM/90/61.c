int zpfZ59dT (int (gR3frL), int (ogAGjKzPEuNW)) {
    int WjAvhyD8;
    if (gR3frL == (318 - 318))
        WjAvhyD8 = (466 - 465);
    if (gR3frL == (994 - 993))
        WjAvhyD8 = (956 - 955);
    if (ogAGjKzPEuNW == (718 - 717))
        WjAvhyD8 = (692 - 691);
    if (gR3frL >= ogAGjKzPEuNW && gR3frL > (305 - 304) && ogAGjKzPEuNW > (290 - 289))
        WjAvhyD8 = zpfZ59dT (gR3frL, ogAGjKzPEuNW - (92 - 91)) + zpfZ59dT (gR3frL - ogAGjKzPEuNW, ogAGjKzPEuNW);
    if (gR3frL < ogAGjKzPEuNW && gR3frL > (463 - 462) && ogAGjKzPEuNW > (260 - 259))
        WjAvhyD8 = zpfZ59dT (gR3frL, ogAGjKzPEuNW - 1);
    return WjAvhyD8;
}

int gzuaw1EcFA7 () {
    int gR3frL;
    int ogAGjKzPEuNW;
    scanf ("%d%d", &gR3frL, &ogAGjKzPEuNW);
    printf ("%d\n", zpfZ59dT (gR3frL, ogAGjKzPEuNW));
}

int main () {
    int M05rskU8N;
    int ADUygMjm;
    scanf ("%d", &M05rskU8N);
    for (ADUygMjm = (795 - 795); ADUygMjm < M05rskU8N; ADUygMjm++)
        gzuaw1EcFA7 ();
}

