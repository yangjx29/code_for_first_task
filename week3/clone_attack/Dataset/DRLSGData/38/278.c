int main () {
    double  vYheG8x [(1150 - 950)];
    double  A50oc7h8A [(304 - 104)];
    double  HhRsgpy;
    int ha2ypY;
    int J7Tct6yoEF;
    int ientikb;
    double  jlkK7CjPrJ3o;
    double  n16d2qn;
    double  als9DJk;
    int vPyt6WSX [(855 - 655)];
    scanf ("%d", &J7Tct6yoEF);
    {
        ha2ypY = (168 - 168);
        for (; J7Tct6yoEF > ha2ypY;) {
            scanf ("%d", &(vPyt6WSX[ha2ypY]));
            als9DJk = (112 - 112);
            {
                ientikb = (57 - 57);
                for (; (vPyt6WSX[ha2ypY]) > ientikb;) {
                    scanf ("%lf", &(A50oc7h8A[ientikb]));
                    als9DJk = als9DJk + A50oc7h8A[ientikb];
                    ientikb = ientikb + (878 - 877);
                }
            }
            n16d2qn = als9DJk / vPyt6WSX[ha2ypY];
            HhRsgpy = (770 - 770);
            {
                ientikb = (637 - 637);
                for (; ientikb < vPyt6WSX[ha2ypY];) {
                    HhRsgpy = HhRsgpy +(A50oc7h8A[ientikb] - n16d2qn) * (A50oc7h8A[ientikb] - n16d2qn);
                    ientikb++;
                }
            }
            jlkK7CjPrJ3o = HhRsgpy / vPyt6WSX[ha2ypY];
            vYheG8x[ha2ypY] = sqrt (jlkK7CjPrJ3o);
            ha2ypY = ha2ypY + (13 - 12);
        }
    }
    {
        ha2ypY = (687 - 687);
        for (; ha2ypY < J7Tct6yoEF;) {
            printf ("%.5lf\n", vYheG8x[ha2ypY]);
            ha2ypY++;
        }
    }
    return (726 - 726);
}

