int Cu1CiM3bE (int EnPdGa9w [], int skRu1mN [], int otAvqXdxE) {
    int HnpJuf;
    int vpHATSd2 [(1684 - 684)] = {(275 - 275)};
    int jZu2isvHMXt1;
    int h3fJEr;
    {
        {
            if ((198 - 198)) {
                return (373 - 373);
            }
        }
        h3fJEr = (37 - 37);
        for (; otAvqXdxE > h3fJEr;) {
            {
                HnpJuf = h3fJEr;
                for (; HnpJuf < skRu1mN[h3fJEr];) {
                    vpHATSd2[HnpJuf]++;
                    HnpJuf = HnpJuf +(921 - 920);
                }
            }
            h3fJEr = h3fJEr + (538 - 537);
        }
    }
    jZu2isvHMXt1 = (107 - 107);
    {
        HnpJuf = (973 - 973);
        for (; HnpJuf < otAvqXdxE;) {
            if (jZu2isvHMXt1 < vpHATSd2[EnPdGa9w[HnpJuf]])
                jZu2isvHMXt1 = vpHATSd2[EnPdGa9w[HnpJuf]];
            HnpJuf = HnpJuf +(196 - 195);
        }
    }
    return jZu2isvHMXt1;
}

void  main () {
    char LZLIEbC6Q7gA [(8831 - 831)];
    int skRu1mN [(3079 - 79)];
    int Xhv3TYL;
    int HnpJuf;
    int GU6GPh;
    int EnPdGa9w [(3915 - 915)];
    int oamgo95;
    int dVvGCaHYR;
    int c5RpEuGvHmx;
    int h3fJEr;
    char d07SXC [(8969 - 969)];
    int gswN5PyDq;
    int hzA4gRbfS0;
    Xhv3TYL = (833 - 833);
    scanf ("%s", LZLIEbC6Q7gA);
    oamgo95 = strlen (LZLIEbC6Q7gA);
    {
        gswN5PyDq = (374 - 374);
        for (; gswN5PyDq < oamgo95;) {
            EnPdGa9w[Xhv3TYL] = (435 - 435);
            {
                h3fJEr = gswN5PyDq;
                for (; h3fJEr < oamgo95;) {
                    if (LZLIEbC6Q7gA[h3fJEr] < '0' || LZLIEbC6Q7gA[h3fJEr] > '9')
                        break;
                    else
                        EnPdGa9w[Xhv3TYL] = EnPdGa9w[Xhv3TYL] * (960 - 950) + LZLIEbC6Q7gA[h3fJEr] - '0';
                    h3fJEr = h3fJEr + (196 - 195);
                }
            }
            gswN5PyDq = h3fJEr;
            gswN5PyDq = gswN5PyDq + (794 - 793);
            Xhv3TYL = Xhv3TYL +(89 - 88);
        }
    }
    dVvGCaHYR = (683 - 683);
    scanf ("%s", d07SXC);
    c5RpEuGvHmx = strlen (d07SXC);
    {
        gswN5PyDq = (806 - 806);
        for (; c5RpEuGvHmx > gswN5PyDq;) {
            skRu1mN[dVvGCaHYR] = (539 - 539);
            {
                h3fJEr = gswN5PyDq;
                for (; c5RpEuGvHmx > h3fJEr;) {
                    if (d07SXC[h3fJEr] < '0' || d07SXC[h3fJEr] > '9')
                        break;
                    else
                        skRu1mN[dVvGCaHYR] = skRu1mN[dVvGCaHYR] * (200 - 190) + d07SXC[h3fJEr] - '0';
                    h3fJEr = h3fJEr + (199 - 198);
                }
            }
            gswN5PyDq = h3fJEr;
            gswN5PyDq = gswN5PyDq + (356 - 355);
            dVvGCaHYR = dVvGCaHYR + (405 - 404);
        }
    }
    h3fJEr = Cu1CiM3bE (EnPdGa9w, skRu1mN, Xhv3TYL);
    printf ("%d %d", Xhv3TYL, h3fJEr);
}

