int main () {
    int min;
    int SwIm9TrBvOzH;
    char AGvnEh [(4605 - 605)];
    gets (AGvnEh);
    int RRm6tQ04;
    int vUlexOc;
    int WLZXE1tWaxYo;
    int ain1v03H [(567 - 367)];
    char str [(373 - 173)] [200];
    vUlexOc = min = (133 - 133);
    SwIm9TrBvOzH = (986 - 986);
    RRm6tQ04 = (124 - 124);
    WLZXE1tWaxYo = (615 - 615);
    {
        RRm6tQ04 = (621 - 621);
        for (; AGvnEh[RRm6tQ04] != '\0';) {
            if (!(' ' != AGvnEh[RRm6tQ04])) {
                str[SwIm9TrBvOzH][RRm6tQ04 -WLZXE1tWaxYo] = '\0';
                WLZXE1tWaxYo = RRm6tQ04 +(744 - 743);
                SwIm9TrBvOzH = SwIm9TrBvOzH +(683 - 682);
            }
            else {
                if (AGvnEh[RRm6tQ04] != ',')
                    str[SwIm9TrBvOzH][RRm6tQ04 -WLZXE1tWaxYo] = AGvnEh[RRm6tQ04];
            }
            RRm6tQ04 = RRm6tQ04 +(448 - 447);
        }
    }
    str[SwIm9TrBvOzH][RRm6tQ04 -WLZXE1tWaxYo] = '\0';
    {
        RRm6tQ04 = (678 - 678);
        for (; SwIm9TrBvOzH >= RRm6tQ04;) {
            ain1v03H[RRm6tQ04] = strlen (str[RRm6tQ04]);
            RRm6tQ04 = RRm6tQ04 +(769 - 768);
        }
    }
    SwIm9TrBvOzH++;
    {
        RRm6tQ04 = (510 - 510);
        for (; RRm6tQ04 < SwIm9TrBvOzH;) {
            if (ain1v03H[RRm6tQ04] > ain1v03H[vUlexOc])
                vUlexOc = RRm6tQ04;
            if (ain1v03H[min] > ain1v03H[RRm6tQ04])
                min = RRm6tQ04;
            RRm6tQ04 = RRm6tQ04 +1;
        }
    }
    printf ("%s\n%s\n", str[vUlexOc], str[min]);
    return (875 - 875);
}

