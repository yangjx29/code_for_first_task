int main () {
    int UCoZexy5vSmQ [100] [100];
    int w1Zqsz7;
    int s3Jt5IMSY;
    int O5LquYMXFj [100] [100];
    int iZAxcEj6Uu1R;
    int E74f9FyE2DP;
    int XHWP7yw;
    int h5zqL4U;
    int isN68BjM;
    int eA2CDPqw [100] [100];
    scanf ("%d %d", &w1Zqsz7, &E74f9FyE2DP);
    {
        h5zqL4U = 0;
        while (h5zqL4U <= w1Zqsz7 - 1) {
            {
                iZAxcEj6Uu1R = 0;
                while (iZAxcEj6Uu1R <= E74f9FyE2DP -1) {
                    scanf ("%d", &eA2CDPqw[h5zqL4U][iZAxcEj6Uu1R]);
                    iZAxcEj6Uu1R = iZAxcEj6Uu1R + 1;
                }
            }
            h5zqL4U = h5zqL4U + 1;
        }
    }
    scanf ("%d %d", &s3Jt5IMSY, &XHWP7yw);
    {
        h5zqL4U = 0;
        while (h5zqL4U <= s3Jt5IMSY - 1) {
            {
                iZAxcEj6Uu1R = 0;
                while (iZAxcEj6Uu1R <= XHWP7yw -1) {
                    scanf ("%d", &O5LquYMXFj[h5zqL4U][iZAxcEj6Uu1R]);
                    iZAxcEj6Uu1R = iZAxcEj6Uu1R + 1;
                }
            }
            h5zqL4U = h5zqL4U + 1;
        }
    }
    {
        h5zqL4U = 0;
        while (h5zqL4U <= w1Zqsz7 - 1) {
            {
                iZAxcEj6Uu1R = 0;
                while (iZAxcEj6Uu1R <= XHWP7yw -1) {
                    UCoZexy5vSmQ[h5zqL4U][iZAxcEj6Uu1R] = 0;
                    for (isN68BjM = 0; isN68BjM <= E74f9FyE2DP -1; isN68BjM = isN68BjM + 1) {
                        UCoZexy5vSmQ[h5zqL4U][iZAxcEj6Uu1R] = UCoZexy5vSmQ[h5zqL4U][iZAxcEj6Uu1R] + eA2CDPqw[h5zqL4U][isN68BjM] * O5LquYMXFj[isN68BjM][iZAxcEj6Uu1R];
                    }
                    iZAxcEj6Uu1R = iZAxcEj6Uu1R + 1;
                }
            }
            h5zqL4U = h5zqL4U + 1;
        }
    }
    {
        h5zqL4U = 0;
        while (h5zqL4U <= w1Zqsz7 - 1) {
            printf ("%d", UCoZexy5vSmQ[h5zqL4U][0]);
            {
                iZAxcEj6Uu1R = 1;
                while (iZAxcEj6Uu1R <= XHWP7yw -1) {
                    printf (" %d", UCoZexy5vSmQ[h5zqL4U][iZAxcEj6Uu1R]);
                    iZAxcEj6Uu1R = iZAxcEj6Uu1R + 1;
                }
            }
            h5zqL4U++;
            printf ("\n");
        }
    }
}

