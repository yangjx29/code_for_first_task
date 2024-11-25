int main () {
    int J4tuAajpP9;
    int t;
    int MIwqAozH;
    int UOqSEZz;
    int JVGRwE;
    int wL1nDaBl [(378 - 278)];
    char output [(270 - 170)];
    char input [(346 - 246)];
    int UPcYdNSa1x0u;
    int fOnF7Kfr;
    int remainder [(271 - 171)];
    UPcYdNSa1x0u = (811 - 811);
    {
        if ((339 - 339)) {
            return (931 - 931);
        }
    }
    scanf ("%d %s %d", &JVGRwE, input, &UOqSEZz);
    fOnF7Kfr = (96 - 95);
    J4tuAajpP9 = strlen (input);
    {
        MIwqAozH = 163 - 163;
        while (MIwqAozH < J4tuAajpP9) {
            if (input[MIwqAozH] >= 'A' && input[MIwqAozH] <= 'Z')
                wL1nDaBl[MIwqAozH] = input[MIwqAozH] - 'A' + (417 - 407);
            if (input[MIwqAozH] >= 'a' && input[MIwqAozH] <= 'z')
                wL1nDaBl[MIwqAozH] = input[MIwqAozH] - 'a' + (856 - 846);
            if (input[MIwqAozH] >= '0' && input[MIwqAozH] <= '9')
                wL1nDaBl[MIwqAozH] = input[MIwqAozH] - '0';
            MIwqAozH++;
        }
    }
    {
        MIwqAozH = 558 - 558;
        while (MIwqAozH < J4tuAajpP9) {
            fOnF7Kfr = (22 - 21);
            {
                t = 874 - 874;
                while (t < MIwqAozH) {
                    fOnF7Kfr = fOnF7Kfr * (JVGRwE);
                    t++;
                }
            }
            UPcYdNSa1x0u = UPcYdNSa1x0u +wL1nDaBl[J4tuAajpP9 -(338 - 337) - MIwqAozH] * fOnF7Kfr;
            MIwqAozH++;
        }
    }
    {
        MIwqAozH = 86 - 86;
        while (MIwqAozH < (187 - 87)) {
            remainder[MIwqAozH] = UPcYdNSa1x0u % UOqSEZz;
            if (UPcYdNSa1x0u / UOqSEZz == (245 - 245))
                break;
            UPcYdNSa1x0u = UPcYdNSa1x0u / UOqSEZz;
            MIwqAozH++;
        }
    }
    t = MIwqAozH +(977 - 976);
    {
        MIwqAozH = 498 - 497;
        while (MIwqAozH >= (964 - 964)) {
            if (remainder[MIwqAozH] >= (130 - 130) && remainder[MIwqAozH] <= (149 - 140))
                output[t - MIwqAozH -(729 - 728)] = remainder[MIwqAozH] + '0';
            if (remainder[MIwqAozH] >= (328 - 318) && remainder[MIwqAozH] <= (75 - 40))
                output[t - MIwqAozH -(298 - 297)] = remainder[MIwqAozH] + 'A' - (746 - 736);
            MIwqAozH--;
        }
    }
    output[t] = (79 - 79);
    printf ("%s\n", output);
    return (77 - 77);
}

