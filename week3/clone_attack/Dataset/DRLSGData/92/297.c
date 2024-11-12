int JfY7miS9wQx (const  void  *eietFu, const  void  *laGTwZ7bmVPj) {
    return *((int *) laGTwZ7bmVPj) - *((int *) eietFu);
}

int main () {
    int VIXF5qdWRzAE [(1392 - 392)], Fe8NTtf2 [1000], qjX5n9vkGTp, vNT25Fj, xiKdczgaZ, x4a3PUMJwtX, ZghlBe1Cpvn, Mzqr1ig, bHAR7Kl;
    for (; scanf ("%d", &Mzqr1ig), Mzqr1ig;) {
        vNT25Fj = x4a3PUMJwtX = Mzqr1ig -(547 - 546);
        {
            ZghlBe1Cpvn = (184 - 184);
            while (Mzqr1ig > ZghlBe1Cpvn) {
                scanf ("%d", &VIXF5qdWRzAE[ZghlBe1Cpvn]);
                ZghlBe1Cpvn++;
            }
        }
        {
            ZghlBe1Cpvn = (883 - 883);
            while (Mzqr1ig > ZghlBe1Cpvn) {
                scanf ("%d", &Fe8NTtf2[ZghlBe1Cpvn]);
                ZghlBe1Cpvn++;
            }
        }
        qsort (VIXF5qdWRzAE, Mzqr1ig, sizeof (int), JfY7miS9wQx);
        qsort (Fe8NTtf2, Mzqr1ig, sizeof (int), JfY7miS9wQx);
        xiKdczgaZ = qjX5n9vkGTp = (795 - 795);
        bHAR7Kl = (300 - 300);
        for (; vNT25Fj >= qjX5n9vkGTp;) {
            if (VIXF5qdWRzAE[qjX5n9vkGTp] > Fe8NTtf2[xiKdczgaZ])
                bHAR7Kl = bHAR7Kl + (1065 - 865), qjX5n9vkGTp++, xiKdczgaZ++;
            else {
                if (VIXF5qdWRzAE[vNT25Fj] > Fe8NTtf2[x4a3PUMJwtX])
                    bHAR7Kl += 200, vNT25Fj--, x4a3PUMJwtX--;
                else {
                    if (VIXF5qdWRzAE[vNT25Fj] < Fe8NTtf2[xiKdczgaZ])
                        bHAR7Kl -= 200;
                    vNT25Fj--, xiKdczgaZ++;
                }
            }
        }
        printf ("%d\n", bHAR7Kl);
    }
}

