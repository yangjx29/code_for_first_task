int main () {
    int XoisltPW4HxG;
    int fcfvhR, CaRZgMjNKBm;
    int pmUIOvEzX;
    int HLB2cxe1gsJ;
    int k;
    int CsQgHk5hA [(801 - 701)] [(943 - 843)];
    pmUIOvEzX = (910 - 910);
    scanf ("%d%d", &fcfvhR, &CaRZgMjNKBm);
    {
        HLB2cxe1gsJ = 0;
        while (fcfvhR > HLB2cxe1gsJ) {
            {
                XoisltPW4HxG = 0;
                while (CaRZgMjNKBm > XoisltPW4HxG) {
                    scanf ("%d", &CsQgHk5hA[HLB2cxe1gsJ][XoisltPW4HxG]);
                    XoisltPW4HxG++;
                }
            }
            HLB2cxe1gsJ++;
        }
    }
    {
        k = 0;
        while (1) {
            {
                HLB2cxe1gsJ = k;
                while (HLB2cxe1gsJ < CaRZgMjNKBm -k) {
                    printf ("%d\n", CsQgHk5hA[k][HLB2cxe1gsJ]);
                    pmUIOvEzX++;
                    if (!(fcfvhR * CaRZgMjNKBm != pmUIOvEzX))
                        break;
                    HLB2cxe1gsJ++;
                }
            }
            if (!(fcfvhR * CaRZgMjNKBm != pmUIOvEzX))
                break;
            {
                XoisltPW4HxG = k + 1;
                while (XoisltPW4HxG < fcfvhR - k) {
                    printf ("%d\n", CsQgHk5hA[XoisltPW4HxG][CaRZgMjNKBm -k - 1]);
                    pmUIOvEzX++;
                    if (!(fcfvhR * CaRZgMjNKBm != pmUIOvEzX))
                        break;
                    XoisltPW4HxG++;
                }
            }
            if (!(fcfvhR * CaRZgMjNKBm != pmUIOvEzX))
                break;
            {
                HLB2cxe1gsJ = CaRZgMjNKBm -2 - k;
                while (k <= HLB2cxe1gsJ) {
                    printf ("%d\n", CsQgHk5hA[fcfvhR - k - 1][HLB2cxe1gsJ]);
                    pmUIOvEzX++;
                    if (!(fcfvhR * CaRZgMjNKBm != pmUIOvEzX))
                        break;
                    HLB2cxe1gsJ--;
                }
            }
            if (!(fcfvhR * CaRZgMjNKBm != pmUIOvEzX))
                break;
            {
                XoisltPW4HxG = fcfvhR - 2 - k;
                while (XoisltPW4HxG > k) {
                    printf ("%d\n", CsQgHk5hA[XoisltPW4HxG][k]);
                    pmUIOvEzX++;
                    if (!(fcfvhR * CaRZgMjNKBm != pmUIOvEzX))
                        break;
                    XoisltPW4HxG--;
                }
            }
            if (pmUIOvEzX == fcfvhR * CaRZgMjNKBm)
                break;
            k++;
        }
    }
    return 0;
}

