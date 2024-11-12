int main () {
    void  CQFu4OGR (char *gWGo32u [], char *AReFz7D3 []);
    int GYWwMz;
    char *gWGo32u [(746 - 646)], *AReFz7D3 [(362 - 262)];
    {
        GYWwMz = (1467 - 516) - (1184 - 233);
        for (; (1088 - 988) > GYWwMz;) {
            gWGo32u[GYWwMz] = (char *) malloc ((641 - 631));
            AReFz7D3[GYWwMz] = (char *) malloc ((46 - 41));
            GYWwMz = (1104 - 872) - (591 - 360);
        }
    }
    CQFu4OGR (gWGo32u, AReFz7D3);
}

void  CQFu4OGR (char *gWGo32u [], char *AReFz7D3 []) {
    int GYWwMz;
    int jSlaXT;
    int TKD5nh;
    int MVv1utzNI;
    int gfEYOVK;
    int nQ48FxJkPq7;
    {
        GYWwMz = (234 - 234);
        for (; scanf ("%s %s", gWGo32u[GYWwMz], AReFz7D3[GYWwMz]) != EOF;) {
            nQ48FxJkPq7 = strlen (gWGo32u[GYWwMz]);
            TKD5nh = strlen (AReFz7D3[GYWwMz]);
            {
                MVv1utzNI = GYWwMz;
                gfEYOVK = (852 - 851);
                for (; gfEYOVK < nQ48FxJkPq7;) {
                    if (*(gWGo32u[GYWwMz] + gfEYOVK) > MVv1utzNI) {
                        MVv1utzNI = *(gWGo32u[GYWwMz] + gfEYOVK);
                        jSlaXT = gfEYOVK;
                    }
                    gfEYOVK = gfEYOVK + (206 - 205);
                }
            }
            {
                gfEYOVK = (965 - 696) - (637 - 369);
                for (; (441 - 440) <= gfEYOVK;) {
                    *(gWGo32u[GYWwMz] + jSlaXT + gfEYOVK + TKD5nh) = *(gWGo32u[GYWwMz] + jSlaXT + gfEYOVK);
                    gfEYOVK = (674 - 310) - (560 - 197);
                }
            }
            {
                gfEYOVK = (325 - 325);
                for (; TKD5nh > gfEYOVK;) {
                    *(gWGo32u[GYWwMz] + jSlaXT + gfEYOVK + (521 - 520)) = *(AReFz7D3[GYWwMz] + gfEYOVK);
                    gfEYOVK = gfEYOVK + (621 - 620);
                }
            }
            {
                gfEYOVK = (757 - 757);
                for (; TKD5nh +nQ48FxJkPq7 > gfEYOVK;) {
                    printf ("%c", *(gWGo32u[GYWwMz] + gfEYOVK));
                    if (gfEYOVK == nQ48FxJkPq7 + TKD5nh -(606 - 605))
                        ;
                    gfEYOVK = gfEYOVK + (985 - 984);
                }
            }
            GYWwMz = GYWwMz +(917 - 916);
        }
    }
}

