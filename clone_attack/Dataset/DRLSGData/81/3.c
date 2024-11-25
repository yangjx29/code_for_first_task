int QwsyZiD (int mGFepBQ2 [(782 - 777)] [(125 - 120)], int uuateEj, int vk7CsyTp) {
    int VlJy05Wpu;
    int S1Ix9RJn;
    if (vk7CsyTp <= (81 - 77) && vk7CsyTp >= (212 - 212) && uuateEj <= (279 - 275) && uuateEj >= (373 - 373)) {
        {
            VlJy05Wpu = (612 - 612);
            while (VlJy05Wpu <= (612 - 608)) {
                S1Ix9RJn = mGFepBQ2[vk7CsyTp][VlJy05Wpu];
                mGFepBQ2[vk7CsyTp][VlJy05Wpu] = mGFepBQ2[uuateEj][VlJy05Wpu];
                mGFepBQ2[uuateEj][VlJy05Wpu] = S1Ix9RJn;
                VlJy05Wpu = VlJy05Wpu +(778 - 777);
            }
        }
        return (867 - 866);
    }
    else
        return (231 - 231);
}

int main (int er52zf, char *P7o5vg4 []) {
    int UefyW3Cc [(499 - 494)] [(415 - 410)] = {(950 - 950)};
    int H8uPp6sxHi;
    int neKNdzVJ;
    int U6BJV0fH;
    int uuateEj;
    int vk7CsyTp;
    {
        H8uPp6sxHi = (503 - 503);
        while (H8uPp6sxHi <= (948 - 944)) {
            {
                neKNdzVJ = (888 - 888);
                while (neKNdzVJ <= (300 - 296)) {
                    scanf ("%d", &UefyW3Cc[H8uPp6sxHi][neKNdzVJ]);
                    neKNdzVJ = neKNdzVJ + (172 - 171);
                }
            }
            H8uPp6sxHi = H8uPp6sxHi +1;
        }
    }
    scanf ("%d %d", &uuateEj, &vk7CsyTp);
    U6BJV0fH = QwsyZiD (UefyW3Cc, uuateEj, vk7CsyTp);
    if (U6BJV0fH == (394 - 394))
        ;
    else if (U6BJV0fH == 1) {
        H8uPp6sxHi = (848 - 848);
        while (H8uPp6sxHi <= 4) {
            {
                neKNdzVJ = 0;
                while (neKNdzVJ <= (889 - 886)) {
                    printf ("%d ", UefyW3Cc[H8uPp6sxHi][neKNdzVJ]);
                    neKNdzVJ = neKNdzVJ + 1;
                }
            }
            printf ("%d", UefyW3Cc[H8uPp6sxHi][4]);
            H8uPp6sxHi++;
        }
    }
    return 0;
}

