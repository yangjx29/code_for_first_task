int main () {
    int Of46QmR5Ap;
    int bhjPeR3qIf;
    int aD8rRhLwxG6e;
    int Y5nVBFtvPN8s;
    int TAk241m5;
    int Z810sTCvLOz;
    int xeSJovdQF;
    int f6hqdIGciD;
    int LFfc78hp2;
    Of46QmR5Ap = 0;
    scanf ("%d,%d\n", &xeSJovdQF, &f6hqdIGciD);
    int DnOBH20 [8] [8];
    {
        bhjPeR3qIf = 0;
        while (xeSJovdQF > bhjPeR3qIf) {
            {
                aD8rRhLwxG6e = 0;
                while (f6hqdIGciD > aD8rRhLwxG6e) {
                    scanf ("%d", &DnOBH20[bhjPeR3qIf][aD8rRhLwxG6e]);
                    aD8rRhLwxG6e++;
                }
            }
            bhjPeR3qIf++;
        }
    }
    {
        bhjPeR3qIf = 0;
        while (bhjPeR3qIf < xeSJovdQF) {
            LFfc78hp2 = 0;
            Y5nVBFtvPN8s = DnOBH20[bhjPeR3qIf][0];
            Z810sTCvLOz = 0;
            for (aD8rRhLwxG6e = 0; f6hqdIGciD > aD8rRhLwxG6e; aD8rRhLwxG6e++) {
                if (DnOBH20[bhjPeR3qIf][aD8rRhLwxG6e] > Y5nVBFtvPN8s) {
                    Y5nVBFtvPN8s = DnOBH20[bhjPeR3qIf][aD8rRhLwxG6e];
                    Z810sTCvLOz = aD8rRhLwxG6e;
                }
            }
            for (TAk241m5 = 0; xeSJovdQF > TAk241m5; TAk241m5++) {
                if (DnOBH20[TAk241m5][Z810sTCvLOz] < Y5nVBFtvPN8s) {
                    LFfc78hp2++;
                }
            }
            if (LFfc78hp2 == 0) {
                printf ("%d+%d\n", bhjPeR3qIf, Z810sTCvLOz);
                Of46QmR5Ap++;
            }
            bhjPeR3qIf++;
        }
    }
    if (Of46QmR5Ap == 0)
        printf ("No");
    return 0;
}

