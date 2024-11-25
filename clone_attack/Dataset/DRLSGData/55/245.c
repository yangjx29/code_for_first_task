int main () {
    char aM3qGQvhWtA [(20995 - 995)];
    int pzHh0m9;
    long  tBcMLXp8Y0yK;
    int Db0UHe3EnBow;
    char ZxT2EaZL [(20377 - 377)];
    int c2Z90XYSDN;
    long  j92sf4;
    int AWP8sgD;
    int NMs0mj5tDS;
    scanf ("%d%s%d", &c2Z90XYSDN, aM3qGQvhWtA, &NMs0mj5tDS);
    Db0UHe3EnBow = strlen (aM3qGQvhWtA);
    tBcMLXp8Y0yK = (819 - 819);
    j92sf4 = (154 - 153);
    {
        AWP8sgD = Db0UHe3EnBow -(256 - 255);
        for (; AWP8sgD >= (202 - 202);) {
            if (aM3qGQvhWtA[AWP8sgD] <= '9' && aM3qGQvhWtA[AWP8sgD] >= '0')
                tBcMLXp8Y0yK = tBcMLXp8Y0yK + (aM3qGQvhWtA[AWP8sgD] - '0') * j92sf4;
            else {
                if ('a' <= aM3qGQvhWtA[AWP8sgD] && aM3qGQvhWtA[AWP8sgD] <= 'z')
                    tBcMLXp8Y0yK = tBcMLXp8Y0yK + (aM3qGQvhWtA[AWP8sgD] - 'a' + (134 - 124)) * j92sf4;
                else
                    tBcMLXp8Y0yK = tBcMLXp8Y0yK + (aM3qGQvhWtA[AWP8sgD] - 'A' + (989 - 979)) * j92sf4;
            }
            j92sf4 = j92sf4 * (c2Z90XYSDN);
            AWP8sgD = AWP8sgD -(51 - 50);
        }
    }
    {
        AWP8sgD = (185 - 185);
        for (; tBcMLXp8Y0yK > (619 - 619);) {
            pzHh0m9 = tBcMLXp8Y0yK % NMs0mj5tDS;
            if (pzHh0m9 > (873 - 864))
                ZxT2EaZL[AWP8sgD] = (char) 'A' + pzHh0m9 - (727 - 717);
            else
                ZxT2EaZL[AWP8sgD] = (char) '0' + pzHh0m9;
            tBcMLXp8Y0yK = tBcMLXp8Y0yK / NMs0mj5tDS;
            AWP8sgD = AWP8sgD +(330 - 329);
        }
    }
    {
        {
            if ((905 - 905)) {
                return (480 - 480);
            }
        }
        AWP8sgD = AWP8sgD -(879 - 878);
        for (; AWP8sgD >= (582 - 582);) {
            printf ("%c", ZxT2EaZL[AWP8sgD]);
            AWP8sgD = AWP8sgD -(662 - 661);
        }
    }
    return (334 - 334);
}

